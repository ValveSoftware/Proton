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

bool unix_steamclient_next_callback( struct callback *callback, uint32_t *size )
{
    struct list *ptr;

    pthread_mutex_lock( &callbacks_lock );
    if ((ptr = list_head( &callbacks )))
    {
        struct callback_entry *entry = LIST_ENTRY( ptr, struct callback_entry, entry );

        if (entry->callback.size <= *size)
        {
            memcpy( callback, &entry->callback, entry->callback.size );
            list_remove( &entry->entry );
            free( entry );
        }

        *size = entry->callback.size;
    }
    pthread_mutex_unlock( &callbacks_lock );

    return !!ptr;
}

static void *(*p_CreateInterface)( const char *name, int *return_code );
static bool (*p_Steam_BGetCallback)( int32_t a, u_CallbackMsg_t *b, int32_t *c );
static bool (*p_Steam_GetAPICallResult)( int32_t, uint64_t, void *, int, int, bool * );
static bool (*p_Steam_FreeLastCallback)( int32_t );
static void (*p_Steam_ReleaseThreadLocalMemory)( int );
static bool (*p_Steam_IsKnownInterface)( const char * );
static void (*p_Steam_NotifyMissingInterface)( int32_t, const char * );

bool unix_Steam_BGetCallback( uint32_t pipe, w_CallbackMsg_t *w_msg, int32_t *ignored, u_CallbackMsg_t *u_msg )
{
    if (!p_Steam_BGetCallback( pipe, u_msg, ignored )) return false;
    callback_message_utow( u_msg, w_msg );
    return true;
}

void unix_callback_message_receive( u_CallbackMsg_t *u_msg, w_CallbackMsg_t *w_msg )
{
    convert_callback_utow( u_msg->m_iCallback, (void *)u_msg->m_pubParam, u_msg->m_cubParam,
                           (void *)w_msg->m_pubParam, w_msg->m_cubParam );
}

bool unix_Steam_FreeLastCallback( uint32_t pipe )
{
    return p_Steam_FreeLastCallback( pipe );
}

bool unix_Steam_GetAPICallResult( int32_t pipe, uint64_t call, void *w_callback, int w_callback_len,
                                  int id, bool *failed )
{
    int u_callback_len = w_callback_len;
    void *u_callback;
    bool ret;

    if (!(u_callback = alloc_callback_wtou( id, w_callback, &u_callback_len ))) return false;

    ret = p_Steam_GetAPICallResult( pipe, call, u_callback, u_callback_len, id, failed );

    if (ret && u_callback != w_callback)
    {
        convert_callback_utow( id, u_callback, u_callback_len, w_callback, w_callback_len );
        HeapFree( GetProcessHeap(), 0, u_callback );
    }

    return ret;
}

bool unix_steamclient_init( struct steamclient_init_params *params )
{
    char path[PATH_MAX], resolved_path[PATH_MAX];
    static void *steamclient;

    if (params->steam_app_id_unset) unsetenv( "SteamAppId" );
    else if (params->steam_app_id) setenv( "SteamAppId", params->steam_app_id, TRUE );
    if (params->ignore_child_processes_unset) unsetenv( "IgnoreChildProcesses" );
    else if (params->ignore_child_processes) setenv( "IgnoreChildProcesses", params->ignore_child_processes, TRUE );

    if (steamclient) return true;

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
        return false;
    }

#define LOAD_FUNC( x )                                         \
    if (!(p_##x = (decltype(p_##x))dlsym( steamclient, #x )))  \
    {                                                          \
        ERR( "unable to load " #x "\n" );                      \
        return false;                                          \
    }

    LOAD_FUNC( CreateInterface );
    LOAD_FUNC( Steam_BGetCallback );
    LOAD_FUNC( Steam_GetAPICallResult );
    LOAD_FUNC( Steam_FreeLastCallback );
    LOAD_FUNC( Steam_ReleaseThreadLocalMemory );
    LOAD_FUNC( Steam_IsKnownInterface );
    LOAD_FUNC( Steam_NotifyMissingInterface );

    return true;
}

void *unix_CreateInterface( const char *name, int *return_code )
{
    return p_CreateInterface( name, return_code );
}

void unix_Steam_ReleaseThreadLocalMemory( int thread_exit )
{
    p_Steam_ReleaseThreadLocalMemory( thread_exit );
}

bool unix_Steam_IsKnownInterface( const char *version )
{
    return p_Steam_IsKnownInterface( version );
}

void unix_Steam_NotifyMissingInterface( int32_t pipe, const char *version )
{
    p_Steam_NotifyMissingInterface( pipe, version );
}
