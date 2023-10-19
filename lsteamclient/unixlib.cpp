#include "unix_private.h"

#include <pthread.h>
#include <stdlib.h>
#include <dlfcn.h>

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

struct callback_entry
{
    struct list entry;
    struct callback callback;
};

static struct list callbacks = LIST_INIT( callbacks );
static pthread_mutex_t callbacks_lock = PTHREAD_MUTEX_INITIALIZER;

void queue_sockets_debug_output( void (*W_STDCALL pfnFunc)( uint32_t, const char * ), uint32_t type, const char *msg )
{
    uint32_t msg_size = strlen( msg ) + 1, size = msg_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = SOCKETS_DEBUG_OUTPUT;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.sockets_debug_output.pfnFunc = pfnFunc;
    entry->callback.sockets_debug_output.type = type;
    memcpy( (char *)entry->callback.sockets_debug_output.msg, msg, msg_size );

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

void queue_warning_message_hook( void (*W_CDECL pFunction)( int32_t, const char * ), int32_t severity, const char *msg )
{
    uint32_t msg_size = strlen( msg ) + 1, size = msg_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = WARNING_MESSAGE_HOOK;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.warning_message_hook.pFunction = pFunction;
    entry->callback.warning_message_hook.severity = severity;
    memcpy( (char *)entry->callback.warning_message_hook.msg, msg, msg_size );

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

NTSTATUS steamclient_next_callback( void *args )
{
    struct steamclient_next_callback_params *params = (struct steamclient_next_callback_params *)args;
    struct list *ptr;

    pthread_mutex_lock( &callbacks_lock );
    if ((ptr = list_head( &callbacks )))
    {
        struct callback_entry *entry = LIST_ENTRY( ptr, struct callback_entry, entry );

        if (entry->callback.size <= params->size)
        {
            memcpy( params->callback, &entry->callback, entry->callback.size );
            list_remove( &entry->entry );
            free( entry );
        }

        params->size = entry->callback.size;
    }
    pthread_mutex_unlock( &callbacks_lock );

    params->_ret = !!ptr;
    return 0;
}

static void *(*p_CreateInterface)( const char *name, int *return_code );
static bool (*p_Steam_BGetCallback)( int32_t a, u_CallbackMsg_t *b, int32_t *c );
static bool (*p_Steam_GetAPICallResult)( int32_t, uint64_t, void *, int, int, bool * );
static bool (*p_Steam_FreeLastCallback)( int32_t );
static void (*p_Steam_ReleaseThreadLocalMemory)( int );
static bool (*p_Steam_IsKnownInterface)( const char * );
static void (*p_Steam_NotifyMissingInterface)( int32_t, const char * );

NTSTATUS steamclient_Steam_BGetCallback( void *args )
{
    struct steamclient_Steam_BGetCallback_params *params = (struct steamclient_Steam_BGetCallback_params *)args;

    if (!p_Steam_BGetCallback( params->pipe, params->u_msg, params->ignored ))
        params->_ret = false;
    else
    {
        callback_message_utow( params->u_msg, params->w_msg );
        params->_ret = true;
    }

    return 0;
}

NTSTATUS steamclient_callback_message_receive( void *args )
{
    struct steamclient_callback_message_receive_params *params = (struct steamclient_callback_message_receive_params *)args;
    convert_callback_utow( params->u_msg->m_iCallback, (void *)params->u_msg->m_pubParam,
                           params->u_msg->m_cubParam, (void *)params->w_msg->m_pubParam,
                           params->w_msg->m_cubParam );
    return 0;
}

NTSTATUS steamclient_Steam_FreeLastCallback( void *args )
{
    struct steamclient_Steam_FreeLastCallback_params *params = (struct steamclient_Steam_FreeLastCallback_params *)args;
    params->_ret = p_Steam_FreeLastCallback( params->pipe );
    return 0;
}

NTSTATUS steamclient_Steam_GetAPICallResult( void *args )
{
    struct steamclient_Steam_GetAPICallResult_params *params = (struct steamclient_Steam_GetAPICallResult_params *)args;
    int u_callback_len = params->w_callback_len;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->id, params->w_callback, &u_callback_len ))) return false;

    params->_ret = p_Steam_GetAPICallResult( params->pipe, params->call, u_callback, u_callback_len,
                                             params->id, params->failed );

    if (params->_ret && u_callback != params->w_callback)
    {
        convert_callback_utow( params->id, u_callback, u_callback_len, params->w_callback, params->w_callback_len );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return 0;
}

NTSTATUS steamclient_init( void *args )
{
    struct steamclient_init_params *params = (struct steamclient_init_params *)args;
    char path[PATH_MAX], resolved_path[PATH_MAX];
    static void *steamclient;

    if (params->steam_app_id_unset) unsetenv( "SteamAppId" );
    else if (params->steam_app_id) setenv( "SteamAppId", params->steam_app_id, TRUE );
    if (params->ignore_child_processes_unset) unsetenv( "IgnoreChildProcesses" );
    else if (params->ignore_child_processes) setenv( "IgnoreChildProcesses", params->ignore_child_processes, TRUE );

    if (steamclient) return 0;

#ifdef __APPLE__
    if (getenv( "STEAM_COMPAT_CLIENT_INSTALL_PATH" ))
        snprintf( path, PATH_MAX, "%s/steamclient.dylib", getenv( "STEAM_COMPAT_CLIENT_INSTALL_PATH" ) );
    else
    {
        WARN( "Old Steam client, falling back to DYLD environment to locate native steamclient "
              "library\n" );
        strcpy( path, "steamclient.dylib" );
    }
#else /* __APPLE__ */
#ifdef __x86_64__
    snprintf( path, PATH_MAX, "%s/.steam/sdk64/steamclient.so", getenv( "HOME" ) );
#else
    snprintf( path, PATH_MAX, "%s/.steam/sdk32/steamclient.so", getenv( "HOME" ) );
#endif
    if (realpath( path, resolved_path ))
    {
        strcpy( path, resolved_path );
        path[PATH_MAX - 1] = 0;
    }
#endif /* __APPLE__ */

    if (!(steamclient = dlopen( path, RTLD_NOW )))
    {
        ERR( "unable to load native steamclient library\n" );
        return -1;
    }

#define LOAD_FUNC( x )                                         \
    if (!(p_##x = (decltype(p_##x))dlsym( steamclient, #x )))  \
    {                                                          \
        ERR( "unable to load " #x "\n" );                      \
        return -1;                                             \
    }

    LOAD_FUNC( CreateInterface );
    LOAD_FUNC( Steam_BGetCallback );
    LOAD_FUNC( Steam_GetAPICallResult );
    LOAD_FUNC( Steam_FreeLastCallback );
    LOAD_FUNC( Steam_ReleaseThreadLocalMemory );
    LOAD_FUNC( Steam_IsKnownInterface );
    LOAD_FUNC( Steam_NotifyMissingInterface );

    return 0;
}

NTSTATUS steamclient_CreateInterface( void *args )
{
    struct steamclient_CreateInterface_params *params = (struct steamclient_CreateInterface_params *)args;
    params->_ret = p_CreateInterface( params->name, params->return_code );
    return 0;
}

NTSTATUS steamclient_Steam_ReleaseThreadLocalMemory( void *args )
{
    struct steamclient_Steam_ReleaseThreadLocalMemory_params *params = (struct steamclient_Steam_ReleaseThreadLocalMemory_params *)args;
    p_Steam_ReleaseThreadLocalMemory( params->thread_exit );
    return 0;
}

NTSTATUS steamclient_Steam_IsKnownInterface( void *args )
{
    struct steamclient_Steam_IsKnownInterface_params *params = (struct steamclient_Steam_IsKnownInterface_params *)args;
    params->_ret = p_Steam_IsKnownInterface( params->version );
    return 0;
}

NTSTATUS steamclient_Steam_NotifyMissingInterface( void *args )
{
    struct steamclient_Steam_NotifyMissingInterface_params *params = (struct steamclient_Steam_NotifyMissingInterface_params *)args;
    p_Steam_NotifyMissingInterface( params->pipe, params->version );
    return 0;
}
