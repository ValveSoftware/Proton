#include "ntstatus.h"
#define WIN32_NO_STATUS
#include "unix_private.h"

#include <winnls.h>
#include <pthread.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <unordered_map>
#include <vector>

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

static const struct callback_def *find_first_callback_def_by_id( int id, bool wow64 );

static int callback_len_utow( int cb_id, int u_len, bool wow64 )
{
    const struct callback_def *c, *end;

    if (!(c = find_first_callback_def_by_id( cb_id, wow64 ))) return u_len;

    if (wow64) end = wow64_callback_data + wow64_callback_data_size;
    else end = callback_data + callback_data_size;

    while (c != end && c->id == cb_id)
    {
        if (c->u_callback_len == u_len) return c->w_callback_len;
        ++c;
    }
    ERR( "Unix len %d not found for callback %d.\n", u_len, cb_id );
    return find_first_callback_def_by_id( cb_id, wow64 )->w_callback_len;
}

void queue_vtable_callback( struct w_iface *w_iface, enum callback_type type, uint64_t arg0, uint64_t arg1 )
{
    struct callback_entry *entry;
    uint32_t size = 0;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)calloc( 1, size ))) return;

    entry->callback.type = type;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.call_iface_vtable.iface = w_iface;
    entry->callback.call_iface_vtable.arg0 = arg0;
    entry->callback.call_iface_vtable.arg1 = arg1;

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

void queue_vtable_callback_0_server_responded( struct w_iface *w_iface, gameserveritem_t_105 *server )
{
    uint32_t size = sizeof(*server);
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)calloc( 1, size ))) return;

    entry->callback.type = CALL_IFACE_VTABLE_0_SERVER_RESPONDED;
    size -= offsetof( struct callback_entry, callback );
    entry->callback.size = size;

    entry->callback.server_responded.iface = w_iface;
    entry->callback.server_responded.server[0] = *server;

    pthread_mutex_lock( &callbacks_lock );
    list_add_tail( &callbacks, &entry->entry );
    pthread_mutex_unlock( &callbacks_lock );
}

void queue_vtable_callback_0_add_player_to_list( struct w_iface *w_iface, const char *pchName, int nScore, float flTimePlayed )
{
    uint32_t name_size = strlen( pchName ) + 1, size = name_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)calloc( 1, size ))) return;

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

void queue_vtable_callback_0_rules_responded( struct w_iface *w_iface, const char *pchRule, const char *pchValue )
{
    uint32_t rule_size = strlen( pchRule ) + 1, value_size = strlen( pchValue ) + 1, size = rule_size + value_size;
    struct callback_entry *entry;

    size += sizeof(struct callback_entry);
    if (!(entry = (struct callback_entry *)calloc( 1, size ))) return;

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
    if (!(entry = (struct callback_entry *)calloc( 1, size ))) return;

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
    if (!(entry = (struct callback_entry *)calloc( 1, size ))) return;

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
    if (!(entry = (struct callback_entry *)calloc( 1, size ))) return;

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

template< typename Iface, typename Params >
static NTSTATUS ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess( Iface *iface, Params *params, bool wow64 )
{
    uint32_t (*U_CDECL lin_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func_156( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( lin_func );
    return 0;
}

LSTEAMCLIENT_UNIX_IMPL( ISteamClient, SteamClient020, Set_SteamAPI_CCheckCallbackRegisteredInProcess );
LSTEAMCLIENT_UNIX_IMPL( ISteamClient, SteamClient021, Set_SteamAPI_CCheckCallbackRegisteredInProcess );
LSTEAMCLIENT_UNIX_IMPL( ISteamClient, SteamClient023, Set_SteamAPI_CCheckCallbackRegisteredInProcess );

template< typename Params >
static NTSTATUS steamclient_next_callback( Params *params, bool wow64 )
{
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

template< typename Params >
static NTSTATUS steamclient_Steam_BGetCallback( Params *params, bool wow64 )
{
    u_CallbackMsg_t *u_msg, u_msg_tmp;
    auto *w_msg = &*params->w_msg;

    if (!p_Steam_BGetCallback( params->pipe, &u_msg_tmp, params->ignored ))
        params->_ret = false;
    else
    {
        u_msg = new u_CallbackMsg_t(u_msg_tmp);
        TRACE( "id %d, u_size %d.\n", u_msg->m_iCallback, u_msg->m_cubParam );
        w_msg->m_hSteamUser = u_msg->m_hSteamUser;
        w_msg->m_iCallback = u_msg->m_iCallback;
        w_msg->m_cubParam = callback_len_utow( u_msg->m_iCallback, u_msg->m_cubParam, false );
        params->cookie = (UINT_PTR)u_msg;
        params->_ret = true;
    }

    return 0;
}

template< typename Params >
static NTSTATUS steamclient_callback_message_receive( Params *params, bool wow64 )
{
    u_CallbackMsg_t *u_msg = (u_CallbackMsg_t *)(UINT_PTR)params->cookie;
    auto *w_msg = &*params->w_msg;

    if (!u_msg) return 0;

    convert_callback_utow( u_msg->m_iCallback, (void *)u_msg->m_pubParam,
                           u_msg->m_cubParam, (void *)w_msg->m_pubParam,
                           w_msg->m_cubParam, false );
    if (w_msg->m_iCallback == 703 /* SteamAPICallCompleted_t::k_iCallback */)
    {
        SteamAPICallCompleted_t_137 *c = (SteamAPICallCompleted_t_137 *)u_msg->m_pubParam;
        SteamAPICallCompleted_t_137 *w = (SteamAPICallCompleted_t_137 *)(uint8_t *)w_msg->m_pubParam;

        if (sizeof(SteamAPICallCompleted_t_137) == w_msg->m_cubParam)
        {
            int len;

            len = callback_len_utow( c->m_iCallback, c->m_cubParam, false );
            TRACE( "SteamAPICallCompleted_t id %d, size %d -> %d.\n", c->m_iCallback, c->m_cubParam, len );
            w->m_cubParam = len;
        }
        else
        {
            WARN( "Unexpected SteamAPICallCompleted_t callback size %d, not doing API callback size conversion.", w_msg->m_cubParam );
        }
    }

    delete u_msg;
    return 0;
}

template< typename Params >
static NTSTATUS steamclient_Steam_FreeLastCallback( Params *params, bool wow64 )
{
    params->_ret = p_Steam_FreeLastCallback( params->pipe );
    return 0;
}

template< typename Params >
static NTSTATUS steamclient_Steam_GetAPICallResult( Params *params, bool wow64 )
{
    int u_callback_len = params->w_callback_len;
    void *u_callback;

    if (!(u_callback = alloc_callback_wtou( params->id, params->w_callback, &u_callback_len, false ))) return false;

    params->_ret = p_Steam_GetAPICallResult( params->pipe, params->call, u_callback, u_callback_len,
                                             params->id, params->failed );

    if (params->_ret && u_callback != params->w_callback)
    {
        convert_callback_utow( params->id, u_callback, u_callback_len, params->w_callback, params->w_callback_len, false );
        free( u_callback );
    }

    return 0;
}

static UINT asciiz_to_unicode( WCHAR *dst, const char *src )
{
    WCHAR *p = dst;
    while ((*p++ = *src++));
    return (p - dst) * sizeof(WCHAR);
}

static BOOL set_reg_value( HANDLE hkey, const WCHAR *name, UINT type, const void *value, DWORD count )
{
    unsigned short name_size = name ? lstrlenW( name ) * sizeof(WCHAR) : 0;
    UNICODE_STRING nameW = { name_size, name_size, (WCHAR *)name };
    return !NtSetValueKey( hkey, &nameW, 0, type, value, count );
}

static void set_reg_ascii_dword( HANDLE hkey, const char *name, DWORD value )
{
    WCHAR nameW[64], valueW[128];
    asciiz_to_unicode( nameW, name );
    set_reg_value( hkey, nameW, REG_DWORD, &value, sizeof(value) );
}

static void set_reg_ascii_str( HANDLE hkey, const char *name, const char *value )
{
    size_t len = strlen( value ) + 1;
    WCHAR nameW[64], *valueW;

    if (!(valueW = (WCHAR *)malloc( len * sizeof(*valueW) ))) return;
    asciiz_to_unicode( valueW, value );
    asciiz_to_unicode( nameW, name );
    set_reg_value( hkey, nameW, REG_SZ, valueW, len * sizeof(*valueW) );
    free( valueW );
}

static void set_reg_ascii_wstr( HANDLE hkey, const char *name, const WCHAR *valueW )
{
    size_t len = lstrlenW( valueW ) + 1;
    WCHAR nameW[64];

    asciiz_to_unicode( nameW, name );
    set_reg_value( hkey, nameW, REG_SZ, valueW, len * sizeof(*valueW) );
}

static inline void init_unicode_string( UNICODE_STRING *str, const WCHAR *data )
{
    str->Length = wcslen( data ) * sizeof(WCHAR);
    str->MaximumLength = str->Length + sizeof(WCHAR);
    str->Buffer = (WCHAR *)data;
}

static NTSTATUS open_hkcu_key( const char *path, HANDLE *key )
{
    NTSTATUS status;
    char buffer[256];
    WCHAR bufferW[256];
    DWORD_PTR sid_data[(sizeof(TOKEN_USER) + SECURITY_MAX_SID_SIZE) / sizeof(DWORD_PTR)];
    DWORD i, len = sizeof(sid_data);
    SID *sid;
    UNICODE_STRING name;
    OBJECT_ATTRIBUTES attr;

    status = NtQueryInformationToken( GetCurrentThreadEffectiveToken(), TokenUser, sid_data, len, &len );
    if (status) return status;

    sid = (SID *)((TOKEN_USER *)sid_data)->User.Sid;
    len = snprintf( buffer, sizeof(buffer), "\\Registry\\User\\S-%u-%u", sid->Revision,
                   (int)MAKELONG( MAKEWORD( sid->IdentifierAuthority.Value[5], sid->IdentifierAuthority.Value[4] ),
                                  MAKEWORD( sid->IdentifierAuthority.Value[3], sid->IdentifierAuthority.Value[2] )));
    for (i = 0; i < sid->SubAuthorityCount; i++)
        len += snprintf( buffer + len, sizeof(buffer) - len, "-%u", (int)sid->SubAuthority[i] );
    len += snprintf( buffer + len, sizeof(buffer) - len, "\\%s", path );

    asciiz_to_unicode( bufferW, buffer );
    init_unicode_string( &name, bufferW );
    InitializeObjectAttributes( &attr, &name, OBJ_CASE_INSENSITIVE, 0, NULL );
    return NtCreateKey( key, KEY_ALL_ACCESS, &attr, 0, NULL, 0, NULL );
}

/* requires steam API to be initialized */
static void setup_steam_registry( u_ISteamClient_SteamClient017 *client, int pipe, int user )
{
    static const int system_locale_appids[] =
    {
        1284210 /* Guild Wars 2 */
    };

    const char *ui_lang, *language, *languages, *locale = NULL;
    u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *apps;
    u_ISteamUtils_SteamUtils009 *utils;
    unsigned int appid, status;
    char buf[256];
    HANDLE key;
    int i;

    utils = (u_ISteamUtils_SteamUtils009 *)client->GetISteamUtils( pipe, "SteamUtils009" );
    ui_lang = utils->GetSteamUILanguage();
    TRACE( "UI language: %s\n", debugstr_a(ui_lang) );

    if ((status = open_hkcu_key( "Software\\Valve\\Steam", &key )))
        ERR( "Could not create key, status %#x\n", status );
    else
    {
        set_reg_ascii_str( key, "language", ui_lang );
        NtClose( key );
    }

    appid = utils->GetAppID();
    TRACE( "appid: %u\n", appid );

    if ((status = open_hkcu_key( "Software\\Valve\\Steam\\Apps", &key )))
        ERR( "Could not create key, status %#x\n", status );
    else
        NtClose( key );

    sprintf( buf, "Software\\Valve\\Steam\\Apps\\%u", appid );
    if ((status = open_hkcu_key( buf, &key ))) ERR( "Could not create key, status %#x\n", status );
    else
    {
        DWORD value;
        value = 1;
        set_reg_ascii_dword( key, "Installed", value );
        set_reg_ascii_dword( key, "Running", value );
        value = 0;
        set_reg_ascii_dword( key, "Updating", value );
        NtClose( key );
    }

    apps = (u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)client->GetISteamApps( user, pipe, "STEAMAPPS_INTERFACE_VERSION008" );
    language = apps->GetCurrentGameLanguage();
    languages = apps->GetAvailableGameLanguages();
    TRACE( "Game language %s, available %s\n", debugstr_a(language), debugstr_a(languages) );

    if (!strchr( languages, ',' )) /* If there is a list of languages then respect that */
    {
        for (i = 0; language && i < ARRAY_SIZE(system_locale_appids); i++)
        {
            if (system_locale_appids[i] == appid)
            {
                TRACE( "Not changing system locale for application %i\n", appid );
                language = NULL;
            }
        }
    }

    if (!language) locale = NULL;
    else if (!strcmp( language, "arabic" )) locale = "ar_001.UTF-8";
    else if (!strcmp( language, "bulgarian" )) locale = "bg_BG.UTF-8";
    else if (!strcmp( language, "schinese" )) locale = "zh_CN.UTF-8";
    else if (!strcmp( language, "tchinese" )) locale = "zh_TW.UTF-8";
    else if (!strcmp( language, "czech" )) locale = "cs_CZ.UTF-8";
    else if (!strcmp( language, "danish" )) locale = "da_DK.UTF-8";
    else if (!strcmp( language, "dutch" )) locale = "nl_NL.UTF-8";
    else if (!strcmp( language, "english" )) locale = "en_US.UTF-8";
    else if (!strcmp( language, "finnish" )) locale = "fi_FI.UTF-8";
    else if (!strcmp( language, "french" )) locale = "fr_FR.UTF-8";
    else if (!strcmp( language, "german" )) locale = "de_DE.UTF-8";
    else if (!strcmp( language, "greek" )) locale = "el_GR.UTF-8";
    else if (!strcmp( language, "hungarian" )) locale = "hu_HU.UTF-8";
    else if (!strcmp( language, "italian" )) locale = "it_IT.UTF-8";
    else if (!strcmp( language, "japanese" )) locale = "ja_JP.UTF-8";
    else if (!strcmp( language, "koreana" )) locale = "ko_KR.UTF-8";
    else if (!strcmp( language, "norwegian" )) locale = "nb_NO.UTF-8";
    else if (!strcmp( language, "polish" )) locale = "pl_PL.UTF-8";
    else if (!strcmp( language, "portuguese" )) locale = "pt_PT.UTF-8";
    else if (!strcmp( language, "brazilian" )) locale = "pt_BR.UTF-8";
    else if (!strcmp( language, "romanian" )) locale = "ro_RO.UTF-8";
    else if (!strcmp( language, "russian" )) locale = "ru_RU.UTF-8";
    else if (!strcmp( language, "spanish" )) locale = "es_ES.UTF-8";
    else if (!strcmp( language, "latam" )) locale = "es_419.UTF-8";
    else if (!strcmp( language, "swedish" )) locale = "sv_SE.UTF-8";
    else if (!strcmp( language, "thai" )) locale = "th_TH.UTF-8";
    else if (!strcmp( language, "turkish" )) locale = "tr_TR.UTF-8";
    else if (!strcmp( language, "ukrainian" )) locale = "uk_UA.UTF-8";
    else if (!strcmp( language, "vietnamese" )) locale = "vi_VN.UTF-8";
    else FIXME( "Unsupported game language %s\n", debugstr_a(language) );

    /* HACK: Bug 23597 Granado Espada Japan (1219160) launcher needs Japanese locale to display correctly */
    if (appid == 1219160) locale = "ja_JP.UTF-8";

    if (locale)
    {
        FIXME( "Game language %s, defaulting LC_CTYPE / LC_MESSAGES to %s.\n", debugstr_a(language), locale );
        setenv( "LC_CTYPE", locale, FALSE );
        setenv( "LC_MESSAGES", locale, FALSE );
    }
}

/* requires steam API to be initialized */
static void setup_battleye_bridge( u_ISteamClient_SteamClient017 *client, int pipe, int user )
{
    u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *apps;
    const unsigned int be_runtime_appid = 1161040;
    char path[2048];
    int error;

    apps = (u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)client->GetISteamApps( user, pipe, "STEAMAPPS_INTERFACE_VERSION008" );
    if (!apps->BIsAppInstalled( be_runtime_appid )) return;
    if (!apps->GetAppInstallDir( be_runtime_appid, path, sizeof(path) )) return;
    TRACE( "Found battleye runtime at %s\n", path );
    setenv( "PROTON_BATTLEYE_RUNTIME", path, 1 );
}

static void setup_eac_bridge( u_ISteamClient_SteamClient017 *client, int pipe, int user )
{
    u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *apps;
    const unsigned int eac_runtime_appid = 1826330;
    char path[2048];
    int error;

    apps = (u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)client->GetISteamApps( user, pipe, "STEAMAPPS_INTERFACE_VERSION008" );
    if (!apps->BIsAppInstalled( eac_runtime_appid )) return;
    if (!apps->GetAppInstallDir( eac_runtime_appid, path, sizeof(path) )) return;
    TRACE( "Found easyanticheat runtime at %s\n", path );
    setenv( "PROTON_EAC_RUNTIME", path, 1 );
}

static void setup_proton_voice_files( u_ISteamClient_SteamClient017 *client, int pipe, int user )
{
    u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *apps;
    const unsigned int eac_runtime_appid = 3086180;
    char path[2048];
    int error;

    apps = (u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)client->GetISteamApps( user, pipe, "STEAMAPPS_INTERFACE_VERSION008" );
    if (!apps->BIsAppInstalled( eac_runtime_appid )) return;
    if (!apps->GetAppInstallDir( eac_runtime_appid, path, sizeof(path) )) return;
    TRACE( "Found proton voice files at %s\n", path );
    setenv( "PROTON_VOICE_FILES", path, 1 );
}

static void setup_proton_soundfonts( u_ISteamClient_SteamClient017 *client, int pipe, int user )
{
    static const WCHAR PROTON_SOUNDFILES_FILES_W[] = u"PROTON_SOUNDFONT_FILES";
    static const WCHAR SF2_NAME[] = u"FluidR3_GM.sf2";
    u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *apps;
    const unsigned int soundfonts_appid = 3368180;
    std::vector<WCHAR> dos_path{};
    OBJECT_ATTRIBUTES attr;
    ULONG nt_path_len = 0;
    char unix_path[2048];
    UNICODE_STRING name;
    NTSTATUS status;
    char *path_end;
    HANDLE gm_key;

    apps = (u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)client->GetISteamApps( user, pipe, "STEAMAPPS_INTERFACE_VERSION008" );
    if (!apps->BIsAppInstalled( soundfonts_appid )) return;
    if (!apps->GetAppInstallDir( soundfonts_appid, unix_path, sizeof(unix_path) )) return;

    WINE_TRACE( "Found Proton Soundfont at %s\n", unix_path );

    if ((status = wine_unix_to_nt_file_name( unix_path, NULL, &nt_path_len )) != STATUS_BUFFER_TOO_SMALL)
    {
        WINE_ERR( "Failed to convert unix path to NT: %lx\n", status );
        return;
    }
    nt_path_len += ARRAYSIZE(SF2_NAME);
    dos_path = std::vector<WCHAR>(nt_path_len);
    if ((status = wine_unix_to_nt_file_name( unix_path, dos_path.data(), &nt_path_len )))
    {
        WINE_ERR( "Failed to convert unix path to NT: %x\n", status );
        return;
    }
    dos_path[nt_path_len - 1] = u'\\';
    wcscpy( dos_path.data() + nt_path_len, SF2_NAME );

    WINE_TRACE( "GM file path %s\n", wine_dbgstr_w(dos_path.data()) );

    init_unicode_string( &name, u"\\Registry\\Machine\\Software\\Microsoft\\DirectMusic" );
    InitializeObjectAttributes( &attr, &name, OBJ_CASE_INSENSITIVE, 0, NULL );
    if ((status = NtCreateKey( &gm_key, KEY_ALL_ACCESS, &attr, 0, NULL, 0, NULL )))
    {
        WINE_ERR( "Failed to open DirectMusic key: %x\n", status );
        return;
    }

    set_reg_ascii_wstr( gm_key, "GMFilePath", dos_path.data() );
    NtClose( gm_key );

    init_unicode_string( &name, u"\\Registry\\Machine\\Software\\Wow6432Node\\Microsoft\\DirectMusic" );
    if ((status = NtCreateKey( &gm_key, KEY_ALL_ACCESS | KEY_WOW64_32KEY, &attr, 0, NULL, 0, NULL)))
    {
        WINE_ERR( "Failed to open DirectMusic key (32 bit): %x\n", status);
        return;
    }
    set_reg_ascii_wstr( gm_key, "GMFilePath", dos_path.data() );
    NtClose( gm_key );
}

template< typename Params >
static NTSTATUS steamclient_init_registry( Params *params, bool wow64 )
{
    u_ISteamClient_SteamClient017 *client;
    int pipe, user, error;

    client = (u_ISteamClient_SteamClient017 *)p_CreateInterface( "SteamClient017", &error );
    if (!(pipe = client->CreateSteamPipe()) || !(user = client->ConnectToGlobalUser( pipe )))
    {
        ERR( "Failed to connect to Steam\n" );
        if (pipe) client->BReleaseSteamPipe( pipe );
        return 0;
    }

    setup_steam_registry( client, pipe, user );
    setup_battleye_bridge( client, pipe, user );
    setup_eac_bridge( client, pipe, user );
    setup_proton_voice_files( client, pipe, user );
    setup_proton_soundfonts( client, pipe, user );

    client->BReleaseSteamPipe( pipe );
    return 0;
}

template< typename Params >
static NTSTATUS steamclient_init( Params *params, bool wow64 )
{
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
#if defined(__x86_64__)
#define STEAM_ARCH "64"
#elif defined(__i386__)
#define STEAM_ARCH "32"
#elif defined(__aarch64__)
#define STEAM_ARCH "arm64"
#else
#error Unknown target architecture
#endif

    snprintf( path, PATH_MAX, "%s/.steam/sdk" STEAM_ARCH "/steamclient.so", getenv( "HOME" ) );
#undef STEAM_ARCH

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

namespace std
{
template<> struct hash< struct u_buffer >
{
    using argument_type = struct u_buffer;
    using result_type = std::size_t;
    result_type operator()( argument_type const& buf ) const { return buf.ptr; }
};
}

static pthread_mutex_t buffer_cache_lock = PTHREAD_MUTEX_INITIALIZER;
static std::unordered_map< struct u_buffer, void * > buffer_cache;

template< typename Params >
static NTSTATUS steamclient_get_unix_buffer( Params *params, bool wow64 )
{
    struct cache_entry *entry;
    struct rb_entry *ptr;

    pthread_mutex_lock( &buffer_cache_lock );
    auto iter = buffer_cache.find( params->buf );
    if (iter != buffer_cache.end()) params->ptr = iter->second;
    else
    {
        memcpy( params->ptr, (char *)params->buf, params->buf.len );
        buffer_cache[params->buf] = params->ptr;
    }
    pthread_mutex_unlock( &buffer_cache_lock );

    return 0;
}

template< typename Params >
static NTSTATUS steamclient_CreateInterface( Params *params, bool wow64 )
{
    params->_ret = p_CreateInterface( params->name, params->return_code );
    return 0;
}

template< typename Params >
static NTSTATUS steamclient_Steam_ReleaseThreadLocalMemory( Params *params, bool wow64 )
{
    p_Steam_ReleaseThreadLocalMemory( params->thread_exit );
    return 0;
}

template< typename Params >
static NTSTATUS steamclient_Steam_IsKnownInterface( Params *params, bool wow64 )
{
    params->_ret = p_Steam_IsKnownInterface( params->version );
    return 0;
}

template< typename Params >
static NTSTATUS steamclient_Steam_NotifyMissingInterface( Params *params, bool wow64 )
{
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

static unsigned char hexdigit( WCHAR c )
{
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return 0xff;
}

static void url_unescape( WCHAR *s )
{
    unsigned int i, len;
    unsigned char c, d1, d2;

    len = wcslen( s );
    if (len < 3) return;
    for (i = 0; i < len - 3; ++i)
    {
        if (s[i] != '%') continue;
        if ((d1 = hexdigit( s[i + 1] )) == 0xff || (d2 = hexdigit( s[i + 2] )) == 0xff)
        {
            ERR( "Invalid escape %s.\n", debugstr_wn( s, 3 ) );
            continue;
        }
        s[i] = d1 * 0x10 + d2;
        len -= 2;
        memmove( &s[i + 1], &s[i + 3], (len - i) * sizeof(*s) );
    }
}

char *steamclient_dos_to_unix_path( const char *src, int is_url )
{
    static const char file_prot[] = "file://";
    char buffer[4096], *dst = buffer;
    int file_part_len;
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
        char *unix_path = NULL;
        const char *p;
        uint32_t r;

        if (is_url) while (*src == '/') ++src;
        if (is_url && (p = strpbrk( src, "#?" ))) file_part_len = p - src;
        else                                      file_part_len = strlen( src );
        r = ntdll_umbstowcs( src, file_part_len, srcW + 4, PATH_MAX - 4 - 1 );
        if (r)
        {
            srcW[4 + file_part_len] = 0;
            if (is_url) url_unescape( srcW + 4 );
            collapse_path( srcW, 4 );
            unix_path = get_unix_file_name( srcW );
        }

        if (!unix_path)
        {
            ERR( "Unable to convert DOS filename to unix: %s\n", src );
            goto done;
        }

        lstrcpynA( dst, unix_path, sizeof(buffer) - (dst - buffer) );
        free( unix_path );
        if (is_url)
        {
            len = strlen( buffer ) + strlen( src ) - file_part_len;
            if (len + 1 > sizeof(buffer))
            {
                ERR( "Buffer is too short.\n", src );
                goto done;
            }
            strcat( dst, src + file_part_len );
        }
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
            ntdll_umbstowcs( *s, strlen( *s ) + 1, scratch + 4, PATH_MAX - 4 );
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

const char **wow64_steamclient_dos_to_unix_path_array( ptr32< const char ** > src_array )
{
    ptr32< const char * > *ptr = src_array, *end = src_array;
    const char **array, **ret;

    while (*end) end++;
    array = new const char *[end - ptr + 1];
    for (end = ptr; *end; end++) array[end - ptr] = *end;

    ret = steamclient_dos_to_unix_path_array( array );

    delete array;
    return ret;
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

static const struct callback_def *find_first_callback_def_by_id( int id, bool wow64 )
{
    const struct callback_def *data;
    unsigned int l, r, m;

    if (wow64) r = wow64_callback_data_size;
    else r = callback_data_size;
    if (wow64) data = wow64_callback_data;
    else data = callback_data;

    l = 0;
    while (l < r)
    {
        m = (l + r) /2;
        if (data[m].id == id)
        {
            while (m && data[m - 1].id == id) --m;
            return &data[m];
        }
        if (id < data[m].id) r = m;
        else                 l = m + 1;
    }
    return NULL;
}

void *alloc_callback_wtou( int id, void *callback, int *callback_len, bool wow64 )
{
    const struct callback_def *c, *end, *best;

    if (!(c = find_first_callback_def_by_id( id, wow64 ))) return callback;

    if (wow64) end = wow64_callback_data + wow64_callback_data_size;
    else end = callback_data + callback_data_size;

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
        best = find_first_callback_def_by_id( id, wow64 );
    }
    if (best->w_callback_len != *callback_len)
        WARN( "Found len %d for id %d, len %d.\n", best->w_callback_len, id, *callback_len );
    *callback_len = best->u_callback_len;
    return malloc( *callback_len );
}

void convert_callback_utow( int id, void *u_callback, int u_callback_len, void *w_callback, int w_callback_len, bool wow64 )
{
    const struct callback_def *c, *end, *best;

    if (!(c = find_first_callback_def_by_id( id, wow64 )))
    {
        memcpy( w_callback, u_callback, u_callback_len );
        return;
    }

    if (wow64) end = wow64_callback_data + wow64_callback_data_size;
    else end = callback_data + callback_data_size;

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
        best = find_first_callback_def_by_id( id, wow64 );
    }

    if (best->w_callback_len != w_callback_len || best->u_callback_len != u_callback_len)
        WARN( "Found len %d, %d for id %d, len %d, %d.\n", best->w_callback_len, best->u_callback_len,
              id, w_callback_len, u_callback_len );

    if (best->conv_w_from_u) best->conv_w_from_u( w_callback, u_callback );
    else                     memcpy( w_callback, u_callback, u_callback_len );
}

#if defined(__x86_64__) || defined(__aarch64__)
#define STEAMCLIENT_UNIX_WOW64_FUNC( name ) \
    NTSTATUS wow64_ ## name( void *args ) { return name( (struct wow64_ ## name ## _params *)args, true ); }
#else
#define STEAMCLIENT_UNIX_WOW64_FUNC( name )
#endif

#define STEAMCLIENT_UNIX_FUNC( name ) \
    NTSTATUS name( void *args ) { return name( (struct name ## _params *)args, false ); } \
    STEAMCLIENT_UNIX_WOW64_FUNC( name )

STEAMCLIENT_UNIX_FUNC( steamclient_init )
STEAMCLIENT_UNIX_FUNC( steamclient_init_registry )
STEAMCLIENT_UNIX_FUNC( steamclient_next_callback )
STEAMCLIENT_UNIX_FUNC( steamclient_get_unix_buffer )
STEAMCLIENT_UNIX_FUNC( steamclient_CreateInterface )
STEAMCLIENT_UNIX_FUNC( steamclient_Steam_GetAPICallResult )
STEAMCLIENT_UNIX_FUNC( steamclient_Steam_BGetCallback )
STEAMCLIENT_UNIX_FUNC( steamclient_callback_message_receive )
STEAMCLIENT_UNIX_FUNC( steamclient_Steam_FreeLastCallback )
STEAMCLIENT_UNIX_FUNC( steamclient_Steam_ReleaseThreadLocalMemory )
STEAMCLIENT_UNIX_FUNC( steamclient_Steam_IsKnownInterface )
STEAMCLIENT_UNIX_FUNC( steamclient_Steam_NotifyMissingInterface )

#if defined(__x86_64__) || defined(__aarch64__)

struct buf32
{
    uint32_t pos32;
    char *pos;

    buf32() : pos(g_tmppath), pos32( (uint32_t)(UINT_PTR)g_tmppath ) {}

    template< typename T > void append_str( ptr32< T* >& dst, const char *src )
    {
        size_t len = strlen( src ) + 1;

        if (g_tmppath + TEMP_PATH_BUFFER_LENGTH - pos < len) return;
        memcpy( pos, src, len );
        pos += len;

        dst.value = pos32;
        pos32 += len;
    }

    void append_path( ptr32< const char * >& dst, const char *src )
    {
        size_t len;

        steamclient_unix_path_to_dos_path( 1, src, pos, g_tmppath + TEMP_PATH_BUFFER_LENGTH - pos, 1 );
        len = strlen( pos ) + 1;
        pos += len;

        dst.value = pos32;
        pos32 += len;
    }
};

u64_CallbackMsg_t::operator w32_CallbackMsg_t() const
{
    w32_CallbackMsg_t ret;
    ret.m_hSteamUser = this->m_hSteamUser;
    ret.m_iCallback = this->m_iCallback;
    /*ret.m_pubParam = this->m_pubParam;*/
    ret.m_cubParam = this->m_cubParam;
    return ret;
}

u64_HTML_ChangedTitle_t::operator w32_HTML_ChangedTitle_t() const
{
    w32_HTML_ChangedTitle_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_str( ret.pchTitle, this->pchTitle );
    return ret;
}

u64_HTML_ComboNeedsPaint_t::operator w32_HTML_ComboNeedsPaint_t() const
{
    w32_HTML_ComboNeedsPaint_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_str( ret.pBGRA, this->pBGRA );
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    return ret;
}

u64_HTML_FileOpenDialog_t::operator w32_HTML_FileOpenDialog_t() const
{
    w32_HTML_FileOpenDialog_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_str( ret.pchTitle, this->pchTitle );
    buf.append_path( ret.pchInitialFile, this->pchInitialFile );
    return ret;
}

u64_HTML_FinishedRequest_t::operator w32_HTML_FinishedRequest_t() const
{
    w32_HTML_FinishedRequest_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_path( ret.pchURL, this->pchURL );
    buf.append_str( ret.pchPageTitle, this->pchPageTitle );
    return ret;
}

u64_HTML_JSAlert_t::operator w32_HTML_JSAlert_t() const
{
    w32_HTML_JSAlert_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_str( ret.pchMessage, this->pchMessage );
    return ret;
}

u64_HTML_JSConfirm_t::operator w32_HTML_JSConfirm_t() const
{
    w32_HTML_JSConfirm_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_str( ret.pchMessage, this->pchMessage );
    return ret;
}

u64_HTML_LinkAtPosition_t::operator w32_HTML_LinkAtPosition_t() const
{
    w32_HTML_LinkAtPosition_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    ret.x = this->x;
    ret.y = this->y;
    buf.append_path( ret.pchURL, this->pchURL );
    ret.bInput = this->bInput;
    ret.bLiveLink = this->bLiveLink;
    return ret;
}

u64_HTML_NeedsPaint_t::operator w32_HTML_NeedsPaint_t() const
{
    w32_HTML_NeedsPaint_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_str( ret.pBGRA, this->pBGRA );
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    ret.unUpdateX = this->unUpdateX;
    ret.unUpdateY = this->unUpdateY;
    ret.unUpdateWide = this->unUpdateWide;
    ret.unUpdateTall = this->unUpdateTall;
    ret.unScrollX = this->unScrollX;
    ret.unScrollY = this->unScrollY;
    ret.flPageScale = this->flPageScale;
    ret.unPageSerial = this->unPageSerial;
    return ret;
}

u64_HTML_NewWindow_t_132x::operator w32_HTML_NewWindow_t_132x() const
{
    w32_HTML_NewWindow_t_132x ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_path( ret.pchURL, this->pchURL );
    ret.unX = this->unX;
    ret.unY = this->unY;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    ret.unNewWindow_BrowserHandle_IGNORE = this->unNewWindow_BrowserHandle_IGNORE;
    return ret;
}

u64_HTML_NewWindow_t_130x::operator w32_HTML_NewWindow_t_130x() const
{
    w32_HTML_NewWindow_t_130x ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_path( ret.pchURL, this->pchURL );
    ret.unX = this->unX;
    ret.unY = this->unY;
    ret.unWide = this->unWide;
    ret.unTall = this->unTall;
    return ret;
}

u64_HTML_OpenLinkInNewTab_t::operator w32_HTML_OpenLinkInNewTab_t() const
{
    w32_HTML_OpenLinkInNewTab_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_path( ret.pchURL, this->pchURL );
    return ret;
}

u64_HTML_ShowToolTip_t::operator w32_HTML_ShowToolTip_t() const
{
    w32_HTML_ShowToolTip_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_str( ret.pchMsg, this->pchMsg );
    return ret;
}

u64_HTML_StartRequest_t::operator w32_HTML_StartRequest_t() const
{
    w32_HTML_StartRequest_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_path( ret.pchURL, this->pchURL );
    buf.append_str( ret.pchTarget, this->pchTarget );
    buf.append_str( ret.pchPostData, this->pchPostData );
    ret.bIsRedirect = this->bIsRedirect;
    return ret;
}

u64_HTML_StatusText_t::operator w32_HTML_StatusText_t() const
{
    w32_HTML_StatusText_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_str( ret.pchMsg, this->pchMsg );
    return ret;
}

u64_HTML_URLChanged_t::operator w32_HTML_URLChanged_t() const
{
    w32_HTML_URLChanged_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_path( ret.pchURL, this->pchURL );
    buf.append_str( ret.pchPostData, this->pchPostData );
    ret.bIsRedirect = this->bIsRedirect;
    buf.append_str( ret.pchPageTitle, this->pchPageTitle );
    ret.bNewNavigation = this->bNewNavigation;
    return ret;
}

u64_HTML_UpdateToolTip_t::operator w32_HTML_UpdateToolTip_t() const
{
    w32_HTML_UpdateToolTip_t ret;
    struct buf32 buf;

    ret.unBrowserHandle = this->unBrowserHandle;
    buf.append_str( ret.pchMsg, this->pchMsg );
    return ret;
}

u64_RemoteStorageDownloadUGCResult_t_123::operator w32_RemoteStorageDownloadUGCResult_t_123() const
{
    w32_RemoteStorageDownloadUGCResult_t_123 ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}

u64_RemoteStorageDownloadUGCResult_t_116x::operator w32_RemoteStorageDownloadUGCResult_t_116x() const
{
    w32_RemoteStorageDownloadUGCResult_t_116x ret;
    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    ret.m_pchFileName = this->m_pchFileName;
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}

u64_RemoteStorageDownloadUGCResult_t_111x::operator w32_RemoteStorageDownloadUGCResult_t_111x() const
{
    w32_RemoteStorageDownloadUGCResult_t_111x ret;
    struct buf32 buf;

    ret.m_eResult = this->m_eResult;
    ret.m_hFile = this->m_hFile;
    ret.m_nAppID = this->m_nAppID;
    ret.m_nSizeInBytes = this->m_nSizeInBytes;
    buf.append_str( ret.m_pchFileName, this->m_pchFileName );
    ret.m_ulSteamIDOwner = this->m_ulSteamIDOwner;
    return ret;
}

w64_SteamParamStringArray_t::w64_SteamParamStringArray_t( w32_SteamParamStringArray_t const& w32 )
    : m_nNumStrings(w32.m_nNumStrings)
{
    uint32_t count = m_nNumStrings;
    m_ppStrings = new const char *[count];
    while (count--) m_ppStrings[count] = w32.m_ppStrings[count];
}

w64_SteamParamStringArray_t::w64_SteamParamStringArray_t( w64_SteamParamStringArray_t const& w64 )
    : m_nNumStrings(w64.m_nNumStrings)
{
    m_ppStrings = new const char *[m_nNumStrings];
    memcpy( m_ppStrings, w64.m_ppStrings, sizeof(*m_ppStrings) * m_nNumStrings );
}

w64_SteamParamStringArray_t::~w64_SteamParamStringArray_t()
{
    delete[] m_ppStrings;
}
#endif
