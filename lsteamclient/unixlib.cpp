#include "ntstatus.h"
#define WIN32_NO_STATUS
#include "unix_private.h"

#include <winnls.h>
#include <pthread.h>
#include <stdlib.h>
#include <dlfcn.h>

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

char *g_tmppath;

struct callback_entry
{
    struct list entry;
    struct callback callback;
};

static struct list callbacks = LIST_INIT( callbacks );
static pthread_mutex_t callbacks_lock = PTHREAD_MUTEX_INITIALIZER;

void queue_vtable_callback( struct w_steam_iface *w_iface, enum callback_type type, uint64_t arg0, uint64_t arg1, uint64_t arg2 )
{
    struct callback_entry *entry;
    uint32_t size = 0;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = type;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.call_iface_vtable.iface = w_iface;
    entry->callback.call_iface_vtable.arg0 = arg0;
    entry->callback.call_iface_vtable.arg1 = arg1;
    entry->callback.call_iface_vtable.arg2 = arg2;

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

void queue_vtable_callback_0_server_responded( struct w_steam_iface *w_iface, gameserveritem_t_105 *server )
{
    uint32_t size = sizeof(*server);
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = CALL_IFACE_VTABLE_0_SERVER_RESPONDED;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.server_responded.iface = w_iface;
    entry->callback.server_responded.server[0] = *server;

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

void queue_vtable_callback_0_add_player_to_list( struct w_steam_iface *w_iface, const char *pchName, int nScore, float flTimePlayed )
{
    uint32_t name_size = strlen( pchName ) + 1, size = name_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = CALL_IFACE_VTABLE_0_ADD_PLAYER_TO_LIST;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.add_player_to_list.iface = w_iface;
    entry->callback.add_player_to_list.score = nScore;
    entry->callback.add_player_to_list.time_played = flTimePlayed;
    memcpy( (char *)entry->callback.add_player_to_list.name, pchName, name_size );

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

void queue_vtable_callback_0_rules_responded( struct w_steam_iface *w_iface, const char *pchRule, const char *pchValue )
{
    uint32_t rule_size = strlen( pchRule ) + 1, value_size = strlen( pchValue ) + 1, size = rule_size + value_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = CALL_IFACE_VTABLE_0_RULES_RESPONDED;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.rules_responded.iface = w_iface;
    memcpy( (char *)entry->callback.rules_responded.rule_and_value, pchRule, rule_size );
    memcpy( (char *)entry->callback.rules_responded.rule_and_value + rule_size, pchValue, value_size );

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

static w_FSteamNetworkingSocketsDebugOutput w_steam_networking_socket_debug_output;
static void u_steam_networking_socket_debug_output( uint32_t nType, const char *pszMsg )
{
    uint32_t msg_size = strlen( pszMsg ) + 1, size = msg_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = SOCKETS_DEBUG_OUTPUT;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.sockets_debug_output.pfnFunc = w_steam_networking_socket_debug_output;
    entry->callback.sockets_debug_output.type = nType;
    memcpy( (char *)entry->callback.sockets_debug_output.msg, pszMsg, msg_size );

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

void queue_cdecl_func_callback( w_cdecl_func func, void *data, uint32_t data_size )
{
    uint32_t size = data_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = CALL_CDECL_FUNC_DATA;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.call_cdecl_func_data.pFunc = func;
    memcpy( (char *)entry->callback.call_cdecl_func_data.data, data, data_size );

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

u_FSteamNetworkingSocketsDebugOutput manual_convert_SetDebugOutputFunction_pfnFunc( w_FSteamNetworkingSocketsDebugOutput w_func )
{
    w_steam_networking_socket_debug_output = w_func;
    return &u_steam_networking_socket_debug_output;
}

static w_SteamAPIWarningMessageHook_t w_steam_api_warning_message_hook;
static void u_steam_api_warning_message_hook( int severity, const char *msg )
{
    uint32_t msg_size = strlen( msg ) + 1, size = msg_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)malloc( size ))) return;

    entry->callback.type = WARNING_MESSAGE_HOOK;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.warning_message_hook.pFunction = w_steam_api_warning_message_hook;
    entry->callback.warning_message_hook.severity = severity;
    memcpy( (char *)entry->callback.warning_message_hook.msg, msg, msg_size );

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

u_SteamAPIWarningMessageHook_t manual_convert_SetWarningMessageHook_pFunction( w_SteamAPIWarningMessageHook_t w_func )
{
    w_steam_api_warning_message_hook = w_func;
    return &u_steam_api_warning_message_hook;
}

static uint32_t U_CDECL u_steam_api_check_callback_registered( int32_t v )
{
    return 1;
}

u_SteamAPI_CheckCallbackRegistered_t manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( w_SteamAPI_CheckCallbackRegistered_t w_func )
{
    FIXME("not implemented!\n");
    return &u_steam_api_check_callback_registered;
}

static uint32_t U_CDECL u_steam_api_check_callback_registered_156( int32_t v )
{
    return 1;
}

u_SteamAPI_CheckCallbackRegistered_t_156 manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func_156( w_SteamAPI_CheckCallbackRegistered_t_156 w_func )
{
    FIXME("not implemented!\n");
    return &u_steam_api_check_callback_registered_156;
}

static void U_CDECL u_steam_api_post_api_result_in_process( uint64_t a, void *b, uint32_t c, int d )
{
}

u_SteamAPI_PostAPIResultInProcess_t manual_convert_Set_SteamAPI_CPostAPIResultInProcess_func( w_SteamAPI_PostAPIResultInProcess_t w_func )
{
    FIXME("not implemented!\n");
    return &u_steam_api_post_api_result_in_process;
}

u_SteamAPI_PostAPIResultInProcess_t manual_convert_Remove_SteamAPI_CPostAPIResultInProcess_func( w_SteamAPI_PostAPIResultInProcess_t w_func )
{
    FIXME("not implemented!\n");
    return &u_steam_api_post_api_result_in_process;
}

static void U_CDECL u_void_steam_api_post_api_result_in_process(void)
{
}

u_void_SteamAPI_PostAPIResultInProcess_t manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( w_void_SteamAPI_PostAPIResultInProcess_t w_func )
{
    FIXME("not implemented!\n");
    return &u_void_steam_api_post_api_result_in_process;
}

u_void_SteamAPI_PostAPIResultInProcess_t manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( w_void_SteamAPI_PostAPIResultInProcess_t w_func )
{
    FIXME("not implemented!\n");
    return &u_void_steam_api_post_api_result_in_process;
}

NTSTATUS ISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess( void *args )
{
    struct ISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params = (struct ISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *)args;
    struct u_ISteamClient_SteamClient020 *iface = (struct u_ISteamClient_SteamClient020 *)params->linux_side;
    uint32_t (*U_CDECL lin_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func_156( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( lin_func );
    return 0;
}

NTSTATUS ISteamClient_SteamClient021_Set_SteamAPI_CCheckCallbackRegisteredInProcess( void *args )
{
    struct ISteamClient_SteamClient021_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params = (struct ISteamClient_SteamClient021_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *)args;
    struct u_ISteamClient_SteamClient021 *iface = (struct u_ISteamClient_SteamClient021 *)params->linux_side;
    uint32_t (*U_CDECL lin_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func_156( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( lin_func );
    return 0;
}

NTSTATUS steamclient_next_callback( void *args )
{
    struct steamclient_next_callback_params *params = (struct steamclient_next_callback_params *)args;
    uint32_t capacity = params->size;
    struct list *ptr;

    pthread_mutex_lock( &callbacks_lock );
    if ((ptr = list_head( &callbacks )))
    {
        struct callback_entry *entry = LIST_ENTRY( ptr, struct callback_entry, entry );

        params->size = entry->callback.size;
        if (params->size <= capacity)
        {
            memcpy( params->callback, &entry->callback, params->size );
            list_remove( &entry->entry );
            free( entry );
        }
    }
    pthread_mutex_unlock( &callbacks_lock );

    params->_ret = !!ptr;
    return 0;
}

static void *(*p_CreateInterface)( const char *name, int *return_code );
static int8_t (*p_Steam_BGetCallback)( int32_t a, u_CallbackMsg_t *b, int32_t *c );
static int8_t (*p_Steam_GetAPICallResult)( int32_t, uint64_t, void *, int, int, int8_t * );
static int8_t (*p_Steam_FreeLastCallback)( int32_t );
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
        free( u_callback );
    }

    return 0;
}

NTSTATUS steamclient_init( void *args )
{
    struct steamclient_init_params *params = (struct steamclient_init_params *)args;
    char path[PATH_MAX], resolved_path[PATH_MAX];
    static void *steamclient;

    g_tmppath = params->g_tmppath;

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

    TRACE( "Loaded host steamclient from %s\n", debugstr_a(path) );
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

#define IS_ABSOLUTE( x ) (*x == '/' || *x == '\\' || (*x && *(x + 1) == ':'))

static void collapse_path( WCHAR *path, UINT mark )
{
    WCHAR *p, *next;

    /* convert every / into a \ */
    for (p = path; *p; p++) if (*p == '/') *p = '\\';

    /* collapse duplicate backslashes */
    next = path + std::max( 1u, mark );
    for (p = next; *p; p++) if (*p != '\\' || next[-1] != '\\') *next++ = *p;
    *next = 0;

    p = path + mark;
    while (*p)
    {
        if (*p == '.')
        {
            switch(p[1])
            {
            case '\\': /* .\ component */
                next = p + 2;
                memmove( p, next, (wcslen(next) + 1) * sizeof(WCHAR) );
                continue;
            case 0:  /* final . */
                if (p > path + mark) p--;
                *p = 0;
                continue;
            case '.':
                if (p[2] == '\\')  /* ..\ component */
                {
                    next = p + 3;
                    if (p > path + mark)
                    {
                        p--;
                        while (p > path + mark && p[-1] != '\\') p--;
                    }
                    memmove( p, next, (wcslen(next) + 1) * sizeof(WCHAR) );
                    continue;
                }
                else if (!p[2])  /* final .. */
                {
                    if (p > path + mark)
                    {
                        p--;
                        while (p > path + mark && p[-1] != '\\') p--;
                        if (p > path + mark) p--;
                    }
                    *p = 0;
                    continue;
                }
                break;
            }
        }
        /* skip to the next component */
        while (*p && *p != '\\') p++;
        if (*p == '\\')
        {
            /* remove last dot in previous dir name */
            if (p > path + mark && p[-1] == '.') memmove( p-1, p, (wcslen(p) + 1) * sizeof(WCHAR) );
            else p++;
        }
    }

    /* remove trailing spaces and dots (yes, Windows really does that, don't ask) */
    while (p > path + mark && (p[-1] == ' ' || p[-1] == '.')) p--;
    *p = 0;
}

static char *get_unix_file_name( const WCHAR *path )
{
    UNICODE_STRING nt_name;
    OBJECT_ATTRIBUTES attr;
    NTSTATUS status;
    ULONG size = 256;
    char *buffer;

    nt_name.Buffer = (WCHAR *)path;
    nt_name.MaximumLength = nt_name.Length = lstrlenW( path ) * sizeof(WCHAR);
    InitializeObjectAttributes( &attr, &nt_name, 0, 0, NULL );
    for (;;)
    {
        if (!(buffer = (char *)malloc( size ))) return NULL;
        status = wine_nt_to_unix_file_name( &attr, buffer, &size, FILE_OPEN_IF );
        if (status != STATUS_BUFFER_TOO_SMALL) break;
        free( buffer );
    }
    if (status && status != STATUS_NO_SUCH_FILE)
    {
        free( buffer );
        return NULL;
    }
    return buffer;
}

char *steamclient_dos_to_unix_path( const char *src, int is_url )
{
    static const char file_prot[] = "file://";
    char buffer[4096], *dst = buffer;
    uint32_t len;

    TRACE( "src %s, is_url %u\n", debugstr_a(src), is_url );

    if (!src) return NULL;

    *dst = 0;
    if (!*src) goto done;

    if (is_url)
    {
        if (strncmp( src, file_prot, 7 ) != 0)
        {
            strcpy( dst, src );
            goto done;
        }

        src += 7;
        memcpy( dst, file_prot, sizeof(file_prot) );
        dst += 7;
    }

    if (IS_ABSOLUTE( src ))
    {
        /* absolute path, use wine conversion */
        WCHAR srcW[PATH_MAX] = {'\\', '?', '?', '\\', 0};
        char *unix_path;
        uint32_t r;

        if (is_url) while (*src == '/') ++src;
        r = ntdll_umbstowcs( src, -1, srcW + 4, PATH_MAX - 4 );
        if (r == 0) unix_path = NULL;
        else
        {
            collapse_path( srcW, 4 );
            unix_path = get_unix_file_name( srcW );
        }

        if (!unix_path)
        {
            WARN( "Unable to convert DOS filename to unix: %s\n", src );
            goto done;
        }

        lstrcpynA( dst, unix_path, PATH_MAX );
        free( unix_path );
    }
    else
    {
        /* relative path, just fix up backslashes */
        const char *s;
        char *d;

        for (s = src, d = dst; *s; ++s, ++d)
        {
            if (*s == '\\') *d = '/';
            else *d = *s;
        }

        *d = 0;
    }

done:
    len = strlen( buffer ) + 1;
    if (!(dst = (char *)malloc( len ))) return NULL;
    memcpy( dst, buffer, len );

    TRACE( "-> %s\n", debugstr_a(dst) );
    return dst;
}

void steamclient_free_path( char *path )
{
    free( path );
}

const char **steamclient_dos_to_unix_path_array( const char **src )
{
    size_t len;
    const char **s;
    char **out, **o;
    WCHAR scratch[PATH_MAX] = {'\\', '?', '?', '\\', 0};

    TRACE( "src %p\n", src );

    if (!src) return NULL;

    len = sizeof(char *); /* NUL */
    for (s = src; *s; ++s) len += sizeof(char *);

    out = (char **)malloc( len );

    for (s = src, o = out; *s; ++s, ++o)
    {
        TRACE( "  src[%zu] %s\n", s - src, debugstr_a(*s) );
        if (IS_ABSOLUTE( *s ))
        {
            ntdll_umbstowcs( *s, -1, scratch + 4, PATH_MAX - 4 );
            collapse_path( scratch, 4 );
            *o = get_unix_file_name( scratch );
        }
        else
        {
            const char *r;
            char *l;
            *o = (char *)malloc( strlen( *s ) + 1 );
            for (r = *s, l = *o; *r; ++l, ++r)
            {
                if (*r == '\\') *l = '/';
                else *l = *r;
            }
            *l = 0;
        }
        TRACE( "  -> %s\n", debugstr_a(*o) );
    }

    *o = NULL;

    TRACE( "  -> %p\n", out );
    return (const char **)out;
}

void steamclient_free_path_array( const char **path_array )
{
    const char **path;
    if (!path_array) return;
    for (path = path_array; *path; path++) free( *(char **)path );
    free( path_array );
}

/* Returns:
 *  - if successful, the number of bytes written to dst, including the NULL terminator;
 *  - 0 if failed;
 *  - PATH_MAX if insufficient output buffer (TODO: should be actual required length including NULL terminator). */
unsigned int steamclient_unix_path_to_dos_path( bool api_result, const char *src, char *dst, uint32_t dst_bytes, int is_url )
{
    static const char file_prot[] = "file://";
    NTSTATUS status;
    ULONG size = 0;
    uint32_t r = 0;
    WCHAR *dosW;

    TRACE( "api_result %u, src %s, dst %p, dst_bytes %u is_url %u\n", api_result, debugstr_a(src), dst, dst_bytes, is_url );

    if (!src || !*src || !api_result || !dst || !dst_bytes)
    {
        if (dst && dst_bytes) *dst = 0;
        return api_result ? PATH_MAX : 0;
    }

    if (is_url)
    {
        /* convert only file: URLs */
        if (strncmp( src, file_prot, 7 ))
        {
            r = strlen( src ) + 1;
            if (r > dst_bytes) *dst = 0;
            else memmove( dst, src, r );
            return r;
        }
        if (dst_bytes < sizeof(file_prot))
        {
            *dst = 0;
            return PATH_MAX;
        }
        memmove( dst, src, 7 );
        src += 7;
        dst += 7;
        dst_bytes -= 7;
    }

    status = wine_unix_to_nt_file_name( src, NULL, &size );
    if (status != STATUS_BUFFER_TOO_SMALL)
    {
        WARN( "Unable to convert unix filename to DOS: %s.\n", debugstr_a(src) );
        *dst = 0;
        return 0;
    }

    dosW = (WCHAR *)malloc( size * sizeof(WCHAR) );
    status = wine_unix_to_nt_file_name( src, dosW, &size );
    if (!status) r = ntdll_wcstoumbs( dosW, size, dst, dst_bytes, FALSE );
    else *dst = 0;
    free( dosW );

    if (!strncmp( dst, "\\??\\", 4 ))
    {
        memmove( dst, dst + 4, r - 4 );
        r -= 4;
    }

    TRACE( "-> dst %s, r %u\n", debugstr_a(dst), r );
    return r;
}

static const struct callback_def *find_first_callback_def_by_id( int id )
{
    unsigned int l, r, m;

    l = 0;
    r = callback_data_size;
    while (l < r)
    {
        m = (l + r) /2;
        if (callback_data[m].id == id)
        {
            while (m && callback_data[m - 1].id == id) --m;
            return &callback_data[m];
        }
        if (id < callback_data[m].id) r = m;
        else                          l = m + 1;
    }
    return NULL;
}

void *alloc_callback_wtou( int id, void *callback, int *callback_len )
{
    const struct callback_def *c, *end, *best;

    if (!(c = find_first_callback_def_by_id( id ))) return callback;

    end = callback_data + callback_data_size;
    best = NULL;
    while (c != end && c->id == id)
    {
        if (c->w_callback_len == *callback_len)
        {
            best = c;
            break;
        }
        if (!best && *callback_len >= c->w_callback_len) best = c;
        ++c;
    }

    if (!best)
    {
        ERR( "len %d is too small for callback %d, using default.\n", *callback_len, id );
        best = find_first_callback_def_by_id( id );
    }
    if (best->w_callback_len != *callback_len)
        WARN( "Found len %d for id %d, len %d.\n", best->w_callback_len, id, *callback_len );
    *callback_len = best->u_callback_len;
    return malloc( *callback_len );
}

void convert_callback_utow(int id, void *u_callback, int u_callback_len, void *w_callback, int w_callback_len)
{
    const struct callback_def *c, *end, *best;

    if (!(c = find_first_callback_def_by_id( id )))
    {
        memcpy( w_callback, u_callback, u_callback_len );
        return;
    }

    end = callback_data + callback_data_size;
    best = NULL;
    while (c != end && c->id == id)
    {
        if (c->w_callback_len == w_callback_len && c->u_callback_len == u_callback_len)
        {
            best = c;
            break;
        }
        if ((!best || best->w_callback_len > w_callback_len)
             && c->u_callback_len == u_callback_len && c->w_callback_len <= w_callback_len)
            best = c;
        if (!best && c->u_callback_len == u_callback_len)
            best = c;
        ++c;
    }
    if (!best)
    {
        ERR( "Could not find id %d, u_callback_len %d, w_callback_len %d.\n", id, u_callback_len, w_callback_len );
        best = find_first_callback_def_by_id( id );
    }

    if (best->w_callback_len != w_callback_len || best->u_callback_len != u_callback_len)
        WARN( "Found len %d, %d for id %d, len %d, %d.\n", best->w_callback_len, best->u_callback_len,
              id, w_callback_len, u_callback_len );

    if (best->conv_w_from_u) best->conv_w_from_u( w_callback, u_callback );
    else                     memcpy( w_callback, u_callback, u_callback_len );
}

void callback_message_utow( const u_CallbackMsg_t *u_msg, w_CallbackMsg_t *w_msg )
{
    const struct callback_def *c, *end;
    int len = u_msg->m_cubParam;

    if ((c = find_first_callback_def_by_id( u_msg->m_iCallback )))
    {
        end = callback_data + callback_data_size;
        while (c != end && c->id == u_msg->m_iCallback)
        {
            if (c->u_callback_len == u_msg->m_cubParam)
            {
                len = c->w_callback_len;
                break;
            }
            ++c;
        }
        if (c == end || c->id != u_msg->m_iCallback)
        {
            ERR( "Unix len %d not found for callback %d.\n", u_msg->m_cubParam, u_msg->m_iCallback );
            len = find_first_callback_def_by_id( u_msg->m_iCallback )->w_callback_len;
        }
    }

    w_msg->m_hSteamUser = u_msg->m_hSteamUser;
    w_msg->m_iCallback = u_msg->m_iCallback;
    w_msg->m_cubParam = len;
}
