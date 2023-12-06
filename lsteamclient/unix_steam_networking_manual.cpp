#include "unix_private.h"

#include <stdlib.h>

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

static void receive_messages_utow_144( uint32_t count, u_SteamNetworkingMessage_t_144 **u_msgs,
                                       w_SteamNetworkingMessage_t_144 **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_144 );
        w_SteamNetworkingMessage_t_144 *w_msg = &message->w_msg_144;
        u_SteamNetworkingMessage_t_144 *u_msg = u_msgs[i];
        message->u_msg_144 = u_msg;

        w_msg->m_cbSize = u_msg->m_cbSize;
        w_msg->m_conn = u_msg->m_conn;
        w_msg->m_sender = u_msg->m_sender;
        w_msg->m_nConnUserData = u_msg->m_nConnUserData;
        w_msg->m_usecTimeReceived = u_msg->m_usecTimeReceived;
        w_msg->m_nMessageNumber = u_msg->m_nMessageNumber;
        w_msg->m_nChannel = u_msg->m_nChannel;
    }
}

NTSTATUS steamclient_networking_messages_receive_144( void *args )
{
    struct steamclient_networking_messages_receive_144_params *params = (struct steamclient_networking_messages_receive_144_params *)args;
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( params->w_msgs[i], struct networking_message, w_msg_144 );
        w_SteamNetworkingMessage_t_144 *w_msg = &message->w_msg_144;
        u_SteamNetworkingMessage_t_144 *u_msg = message->u_msg_144;

        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_144 = NULL;
    }

    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets002 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets004 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

static void receive_messages_utow_147( uint32_t count, u_SteamNetworkingMessage_t_147 **u_msgs,
                                       w_SteamNetworkingMessage_t_147 **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_147 );
        w_SteamNetworkingMessage_t_147 *w_msg = &message->w_msg_147;
        u_SteamNetworkingMessage_t_147 *u_msg = u_msgs[i];
        message->u_msg_147 = u_msg;

        w_msg->m_cbSize = u_msg->m_cbSize;
        w_msg->m_conn = u_msg->m_conn;
        w_msg->m_identityPeer = u_msg->m_identityPeer;
        w_msg->m_nConnUserData = u_msg->m_nConnUserData;
        w_msg->m_usecTimeReceived = u_msg->m_usecTimeReceived;
        w_msg->m_nMessageNumber = u_msg->m_nMessageNumber;
        w_msg->m_nChannel = u_msg->m_nChannel;
        w_msg->m_nFlags = u_msg->m_nFlags;
        w_msg->m_nUserData = u_msg->m_nUserData;
    }
}

NTSTATUS steamclient_networking_messages_receive_147( void *args )
{
    struct steamclient_networking_messages_receive_147_params *params = (struct steamclient_networking_messages_receive_147_params *)args;
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( params->w_msgs[i], struct networking_message, w_msg_147 );
        w_SteamNetworkingMessage_t_147 *w_msg = &message->w_msg_147;
        u_SteamNetworkingMessage_t_147 *u_msg = message->u_msg_147;

        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_147 = NULL;
    }

    return 0;
}

static void U_CDECL u_SteamNetworkingMessage_t_147_FreeData( u_SteamNetworkingMessage_t_147 *msg )
{
    free( msg->m_pData );
    msg->m_pData = NULL;
}

static void send_messages_wtou_147( uint32_t count, w_SteamNetworkingMessage_t_147 *const *w_msgs,
                                    u_SteamNetworkingMessage_t_147 **u_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_147 );
        w_SteamNetworkingMessage_t_147 *w_msg = &message->w_msg_147;
        u_SteamNetworkingMessage_t_147 *u_msg = message->u_msg_147;

        if (!u_msg->m_pData)
        {
            u_msg->m_pData = malloc( w_msg->m_cbSize );
            u_msg->m_pfnFreeData = u_SteamNetworkingMessage_t_147_FreeData;
        }

        memcpy( u_msg->m_pData, w_msg->m_pData, w_msg->m_cbSize );
        u_msg->m_cbSize = w_msg->m_cbSize;
        u_msg->m_conn = w_msg->m_conn;
        u_msg->m_identityPeer = w_msg->m_identityPeer;
        u_msg->m_nConnUserData = w_msg->m_nConnUserData;
        u_msg->m_usecTimeReceived = w_msg->m_usecTimeReceived;
        u_msg->m_nMessageNumber = w_msg->m_nMessageNumber;
        u_msg->m_nChannel = w_msg->m_nChannel;
        u_msg->m_nFlags = w_msg->m_nFlags;
        u_msg->m_nUserData = w_msg->m_nUserData;

        /* steamclient library takes ownership */
        message->u_msg_147 = NULL;
        u_msgs[i] = u_msg;
    }
}

static void networking_message_release_147( w_SteamNetworkingMessage_t_147 *w_msg )
{
    struct networking_message *message = CONTAINING_RECORD( w_msg, struct networking_message, w_msg_147 );
    u_SteamNetworkingMessage_t_147 *u_msg = message->u_msg_147;

    if (!message->u_msg_147) return;
    u_msg->m_pfnRelease( u_msg );
    message->u_msg_147 = NULL;
}

NTSTATUS steamclient_networking_message_release_147( void *args )
{
    struct steamclient_networking_message_release_147_params *params = (struct steamclient_networking_message_release_147_params *)args;
    networking_message_release_147( params->w_msg );
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets006 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets008 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets009 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
    return 0;
}

/* ISteamNetworkingUtils_SteamNetworkingUtils003 */

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msg = iface->AllocateMessage( params->cbAllocateBuffer );
    if (u_msg) receive_messages_utow_147( 1, &u_msg, &params->_ret );
    return 0;
}

static void (*W_CDECL w_SteamNetConnectionStatusChanged)( w_SteamNetConnectionStatusChangedCallback_t_151 * );
static void U_CDECL u_SteamNetConnectionStatusChanged( u_SteamNetConnectionStatusChangedCallback_t_151 *u_dat )
{
    w_SteamNetConnectionStatusChangedCallback_t_151 w_dat = *u_dat;
    if (w_SteamNetConnectionStatusChanged) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetConnectionStatusChanged, &w_dat, sizeof(w_dat) );
}

static void (*W_CDECL w_SteamNetAuthenticationStatusChanged)( SteamNetAuthenticationStatus_t * );
static void U_CDECL u_SteamNetAuthenticationStatusChanged( SteamNetAuthenticationStatus_t *dat )
{
    if (w_SteamNetAuthenticationStatusChanged) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetAuthenticationStatusChanged, dat, sizeof(*dat) );
}

static void (*W_CDECL w_SteamRelayNetworkStatusChanged)( SteamRelayNetworkStatus_t * );
static void U_CDECL u_SteamRelayNetworkStatusChanged( SteamRelayNetworkStatus_t *dat )
{
    if (w_SteamRelayNetworkStatusChanged) queue_cdecl_func_callback( (w_cdecl_func)w_SteamRelayNetworkStatusChanged, dat, sizeof(*dat) );
}

static void (*W_CDECL w_SteamNetworkingMessagesSessionRequest)( SteamNetworkingMessagesSessionRequest_t_151 * );
static void U_CDECL u_SteamNetworkingMessagesSessionRequest( SteamNetworkingMessagesSessionRequest_t_151 *dat )
{
    if (w_SteamNetworkingMessagesSessionRequest) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetworkingMessagesSessionRequest, dat, sizeof(*dat) );
}

static void (*W_CDECL w_SteamNetworkingMessagesSessionFailed)( SteamNetworkingMessagesSessionFailed_t_151 * );
static void U_CDECL u_SteamNetworkingMessagesSessionFailed( SteamNetworkingMessagesSessionFailed_t_151 *dat )
{
    if (w_SteamNetworkingMessagesSessionFailed) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetworkingMessagesSessionFailed, dat, sizeof(*dat) );
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    void *u_fn; /* api requires passing pointer-to-pointer */

    switch (params->eValue)
    {
#define CASE( y )                                                                                  \
    if (!params->pArg)                                                                             \
    {                                                                                              \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, NULL );         \
    }                                                                                              \
    else                                                                                           \
    {                                                                                              \
        if (*(void **)params->pArg == NULL) u_fn = NULL;                                           \
        else u_fn = (void *)&u_##y;                                                                \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, &u_fn );        \
        if (params->_ret) w_##y = *(decltype(w_##y) *)params->pArg;                                \
    }                                                                                              \
    break;

    case 201 /*ConnectionStatusChanged*/: CASE( SteamNetConnectionStatusChanged )
    case 202 /*AuthStatusChanged*/: CASE( SteamNetAuthenticationStatusChanged )
    case 203 /*RelayNetworkStatusChanged*/: CASE( SteamRelayNetworkStatusChanged )
    case 204 /*MessagesSessionRequest*/: CASE( SteamNetworkingMessagesSessionRequest )
    case 205 /*MessagesSessionFailed*/: CASE( SteamNetworkingMessagesSessionFailed )

#undef CASE

    default:
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, params->pArg );
    }

    return 0;
}

static void receive_messages_utow_153a( uint32_t count, u_SteamNetworkingMessage_t_153a **u_msgs,
                                        w_SteamNetworkingMessage_t_153a **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_153a );
        w_SteamNetworkingMessage_t_153a *w_msg = &message->w_msg_153a;
        u_SteamNetworkingMessage_t_153a *u_msg = u_msgs[i];
        message->u_msg_153a = u_msg;

        w_msg->m_cbSize = u_msg->m_cbSize;
        w_msg->m_conn = u_msg->m_conn;
        w_msg->m_identityPeer = u_msg->m_identityPeer;
        w_msg->m_nConnUserData = u_msg->m_nConnUserData;
        w_msg->m_usecTimeReceived = u_msg->m_usecTimeReceived;
        w_msg->m_nMessageNumber = u_msg->m_nMessageNumber;
        w_msg->m_nChannel = u_msg->m_nChannel;
        w_msg->m_nFlags = u_msg->m_nFlags;
        w_msg->m_nUserData = u_msg->m_nUserData;
        w_msg->m_idxLane = u_msg->m_idxLane;
    }
}

NTSTATUS steamclient_networking_messages_receive_153a( void *args )
{
    struct steamclient_networking_messages_receive_153a_params *params = (struct steamclient_networking_messages_receive_153a_params *)args;
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( params->w_msgs[i], struct networking_message, w_msg_153a );
        w_SteamNetworkingMessage_t_153a *w_msg = &message->w_msg_153a;
        u_SteamNetworkingMessage_t_153a *u_msg = message->u_msg_153a;

        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_153a = NULL;
    }

    return 0;
}

static void U_CDECL u_SteamNetworkingMessage_t_153a_FreeData( u_SteamNetworkingMessage_t_153a *msg )
{
    free( msg->m_pData );
    msg->m_pData = NULL;
}

static void send_messages_wtou_153a( uint32_t count, w_SteamNetworkingMessage_t_153a *const *w_msgs,
                                     u_SteamNetworkingMessage_t_153a **u_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_153a );
        w_SteamNetworkingMessage_t_153a *w_msg = &message->w_msg_153a;
        u_SteamNetworkingMessage_t_153a *u_msg = message->u_msg_153a;

        if (!u_msg->m_pData)
        {
            u_msg->m_pData = malloc( w_msg->m_cbSize );
            u_msg->m_pfnFreeData = u_SteamNetworkingMessage_t_153a_FreeData;
        }

        memcpy( u_msg->m_pData, w_msg->m_pData, w_msg->m_cbSize );
        u_msg->m_cbSize = w_msg->m_cbSize;
        u_msg->m_conn = w_msg->m_conn;
        u_msg->m_identityPeer = w_msg->m_identityPeer;
        u_msg->m_nConnUserData = w_msg->m_nConnUserData;
        u_msg->m_usecTimeReceived = w_msg->m_usecTimeReceived;
        u_msg->m_nMessageNumber = w_msg->m_nMessageNumber;
        u_msg->m_nChannel = w_msg->m_nChannel;
        u_msg->m_nFlags = w_msg->m_nFlags;
        u_msg->m_nUserData = w_msg->m_nUserData;
        u_msg->m_idxLane = w_msg->m_idxLane;

        /* steamclient library takes ownership */
        message->u_msg_153a = NULL;
        u_msgs[i] = u_msg;
    }
}

static void networking_message_release_153a( w_SteamNetworkingMessage_t_153a *w_msg )
{
    struct networking_message *message = CONTAINING_RECORD( w_msg, struct networking_message, w_msg_153a );
    u_SteamNetworkingMessage_t_153a *u_msg = message->u_msg_153a;

    if (!message->u_msg_153a) return;
    u_msg->m_pfnRelease( u_msg );
    message->u_msg_153a = NULL;
}

NTSTATUS steamclient_networking_message_release_153a( void *args )
{
    struct steamclient_networking_message_release_153a_params *params = (struct steamclient_networking_message_release_153a_params *)args;
    networking_message_release_153a( params->w_msg );
    return 0;
}

/* ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 */

NTSTATUS ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages( void *args )
{
    struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params *params = (struct ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params *)args;
    struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessages( u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

/* ISteamNetworkingMessages_SteamNetworkingMessages002 */

NTSTATUS ISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel( void *args )
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params *params = (struct ISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params *)args;
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnChannel( params->nLocalChannel, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets012 */

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMessages];
    send_messages_wtou_153a( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
    return 0;
}

/* ISteamNetworkingUtils_SteamNetworkingUtils004 */

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msg = iface->AllocateMessage( params->cbAllocateBuffer );
    if (u_msg) receive_messages_utow_153a( 1, &u_msg, &params->_ret );
    return 0;
}

static void (*W_CDECL w_SteamNetConnectionStatusChanged_153a)( w_SteamNetConnectionStatusChangedCallback_t_153a * );
static void U_CDECL u_SteamNetConnectionStatusChanged_153a( u_SteamNetConnectionStatusChangedCallback_t_153a *u_dat )
{
    w_SteamNetConnectionStatusChangedCallback_t_153a w_dat = *u_dat;
    if (w_SteamNetConnectionStatusChanged_153a) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetConnectionStatusChanged_153a, &w_dat, sizeof(w_dat) );
}

static void (*W_CDECL w_SteamNetworkingMessagesSessionFailed_153a)( SteamNetworkingMessagesSessionFailed_t_153a * );
static void U_CDECL u_SteamNetworkingMessagesSessionFailed_153a( SteamNetworkingMessagesSessionFailed_t_153a *dat )
{
    if (w_SteamNetworkingMessagesSessionFailed_153a) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetworkingMessagesSessionFailed_153a, dat, sizeof(*dat) );
}

NTSTATUS ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue( void *args )
{
    struct ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params *params = (struct ISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params *)args;
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    bool ret;
    void *u_fn; /* api requires passing pointer-to-pointer */

    switch (params->eValue)
    {

#define CASE( y )                                                                                  \
    if (!params->pArg)                                                                             \
    {                                                                                              \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, NULL );         \
    }                                                                                              \
    else                                                                                           \
    {                                                                                              \
        if (*(void **)params->pArg == NULL) u_fn = NULL;                                           \
        else u_fn = (void *)&u_##y;                                                                \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, &u_fn );        \
        if (params->_ret) w_##y = *(decltype(w_##y) *)params->pArg;                                \
    }                                                                                              \
    break;

    case 201 /*ConnectionStatusChanged*/: CASE( SteamNetConnectionStatusChanged_153a )
    case 202 /*AuthStatusChanged*/: CASE( SteamNetAuthenticationStatusChanged )
    case 203 /*RelayNetworkStatusChanged*/: CASE( SteamRelayNetworkStatusChanged )
    case 204 /*MessagesSessionRequest*/: CASE( SteamNetworkingMessagesSessionRequest )
    case 205 /*MessagesSessionFailed*/: CASE( SteamNetworkingMessagesSessionFailed_153a )

#undef CASE

    default:
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, params->pArg );
    }

    return 0;
}

struct SteamMatchmakingServerListResponse_099u : u_ISteamMatchmakingServerListResponse_099u
{
    struct w_steam_iface *w_iface;
    virtual void ServerResponded( int32_t );
    virtual void ServerFailedToRespond( int32_t );
    virtual void RefreshComplete( uint32_t );
};

void SteamMatchmakingServerListResponse_099u::ServerResponded( int32_t iServer )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_0, (intptr_t)iServer, 0, 0 );
}

void SteamMatchmakingServerListResponse_099u::ServerFailedToRespond( int32_t iServer )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1, (intptr_t)iServer, 0, 0 );
}

void SteamMatchmakingServerListResponse_099u::RefreshComplete( uint32_t response )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2, (intptr_t)response, 0, 0 );
}

u_ISteamMatchmakingServerListResponse_099u *create_LinuxISteamMatchmakingServerListResponse_099u( void *win )
{
    SteamMatchmakingServerListResponse_099u *ret;

    if (!win) return NULL;

    if (!(ret = new SteamMatchmakingServerListResponse_099u())) return NULL;
    ret->w_iface = (struct w_steam_iface *)win;

    return ret;
}

struct SteamMatchmakingServerListResponse_106 : u_ISteamMatchmakingServerListResponse_106
{
    struct w_steam_iface *w_iface;
    virtual void ServerResponded( void *, int32_t );
    virtual void ServerFailedToRespond( void *, int32_t );
    virtual void RefreshComplete( void *, uint32_t );
};

void SteamMatchmakingServerListResponse_106::ServerResponded( void *hRequest, int32_t iServer )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_0, (intptr_t)hRequest, (intptr_t)iServer, 0 );
}

void SteamMatchmakingServerListResponse_106::ServerFailedToRespond( void *hRequest, int32_t iServer )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1, (intptr_t)hRequest, (intptr_t)iServer, 0 );
}

void SteamMatchmakingServerListResponse_106::RefreshComplete( void *hRequest, uint32_t response )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2, (intptr_t)hRequest, (intptr_t)response, 0 );
}

u_ISteamMatchmakingServerListResponse_106 *create_LinuxISteamMatchmakingServerListResponse_106( void *win )
{
    SteamMatchmakingServerListResponse_106 *ret;

    if (!win) return NULL;

    if (!(ret = new SteamMatchmakingServerListResponse_106())) return NULL;
    ret->w_iface = (struct w_steam_iface *)win;

    return ret;
}

struct SteamMatchmakingPingResponse : u_ISteamMatchmakingPingResponse
{
    struct w_steam_iface *w_iface;
    virtual void ServerResponded( gameserveritem_t_105 * );
    virtual void ServerFailedToRespond(  );
};

void SteamMatchmakingPingResponse::ServerResponded( gameserveritem_t_105 *server )
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_0, (intptr_t)server, 0, 0 );
}

void SteamMatchmakingPingResponse::ServerFailedToRespond(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1, 0, 0, 0 );
}

struct u_ISteamMatchmakingPingResponse *create_LinuxISteamMatchmakingPingResponse( void *win )
{
    SteamMatchmakingPingResponse *ret;

    if (!win) return NULL;
    if (!(ret = new SteamMatchmakingPingResponse())) return NULL;
    ret->w_iface = (struct w_steam_iface *)win;

    return ret;
}

struct SteamMatchmakingPlayersResponse : u_ISteamMatchmakingPlayersResponse
{
    struct w_steam_iface *w_iface;
    virtual void AddPlayerToList( const char *, int32_t, float );
    virtual void PlayersFailedToRespond(  );
    virtual void PlayersRefreshComplete(  );
};

void SteamMatchmakingPlayersResponse::AddPlayerToList(const char *pchName, int nScore, float flTimePlayed)
{
    queue_vtable_callback_0_add_player_to_list( this->w_iface, pchName, nScore, flTimePlayed );
}

void SteamMatchmakingPlayersResponse::PlayersFailedToRespond(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1, 0, 0, 0 );
}

void SteamMatchmakingPlayersResponse::PlayersRefreshComplete(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2, 0, 0, 0 );
}

struct u_ISteamMatchmakingPlayersResponse *create_LinuxISteamMatchmakingPlayersResponse( void *win )
{
    struct SteamMatchmakingPlayersResponse *ret;

    if (!win) return NULL;
    if (!(ret = new SteamMatchmakingPlayersResponse())) return NULL;
    ret->w_iface = (struct w_steam_iface *)win;

    return ret;
}

struct SteamMatchmakingRulesResponse : u_ISteamMatchmakingRulesResponse
{
    struct w_steam_iface *w_iface;
    virtual void RulesResponded( const char *, const char * );
    virtual void RulesFailedToRespond(  );
    virtual void RulesRefreshComplete(  );
};

void SteamMatchmakingRulesResponse::RulesResponded(const char *pchRule, const char *pchValue)
{
    queue_vtable_callback_0_rules_responded( this->w_iface, pchRule, pchValue );
}

void SteamMatchmakingRulesResponse::RulesFailedToRespond(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_1, 0, 0, 0 );
}

void SteamMatchmakingRulesResponse::RulesRefreshComplete(void)
{
    queue_vtable_callback( this->w_iface, CALL_IFACE_VTABLE_2, 0, 0, 0 );
}

struct u_ISteamMatchmakingRulesResponse *create_LinuxISteamMatchmakingRulesResponse( void *win )
{
    SteamMatchmakingRulesResponse *ret;

    if (!win) return NULL;
    if (!(ret = new SteamMatchmakingRulesResponse())) return NULL;
    ret->w_iface = (struct w_steam_iface *)win;

    return ret;
}

struct u_ISteamNetworkingConnectionCustomSignaling *create_LinuxISteamNetworkingConnectionCustomSignaling( void *win )
{
    FIXME( "not implemented!\n" );
    return NULL;
}

struct u_ISteamNetworkingCustomSignalingRecvContext *create_LinuxISteamNetworkingCustomSignalingRecvContext( void *win )
{
    FIXME( "not implemented!\n" );
    return NULL;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_099u *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );
    iface->RequestInternetServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_099u *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );
    iface->RequestLANServerList( params->iApp, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_099u *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );
    iface->RequestFriendsServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_099u *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );
    iface->RequestFavoritesServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_099u *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );
    iface->RequestHistoryServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_099u *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_099u( params->pRequestServersResponse );
    iface->RequestSpectatorServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_PingServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingPingResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPingResponse( params->pRequestServersResponse );
    params->_ret = iface->PingServer( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingPlayersResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPlayersResponse( params->pRequestServersResponse );
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers001 *)params->linux_side;
    u_ISteamMatchmakingRulesResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingRulesResponse( params->pRequestServersResponse );
    params->_ret = iface->ServerRules( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_106 *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_106( params->pRequestServersResponse );
    params->_ret = iface->RequestInternetServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_106 *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_106( params->pRequestServersResponse );
    params->_ret = iface->RequestLANServerList( params->iApp, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_106 *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_106( params->pRequestServersResponse );
    params->_ret = iface->RequestFriendsServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_106 *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_106( params->pRequestServersResponse );
    params->_ret = iface->RequestFavoritesServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_106 *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_106( params->pRequestServersResponse );
    params->_ret = iface->RequestHistoryServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingServerListResponse_106 *u_pRequestServersResponse = create_LinuxISteamMatchmakingServerListResponse_106( params->pRequestServersResponse );
    params->_ret = iface->RequestSpectatorServerList( params->iApp, params->ppchFilters, params->nFilters, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_PingServer_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingPingResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPingResponse( params->pRequestServersResponse );
    params->_ret = iface->PingServer( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingPlayersResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingPlayersResponse( params->pRequestServersResponse );
    params->_ret = iface->PlayerDetails( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules( void *args )
{
    struct ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *params = (struct ISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules_params *)args;
    struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *iface = (struct u_ISteamMatchmakingServers_SteamMatchMakingServers002 *)params->linux_side;
    u_ISteamMatchmakingRulesResponse *u_pRequestServersResponse = create_LinuxISteamMatchmakingRulesResponse( params->pRequestServersResponse );
    params->_ret = iface->ServerRules( params->unIP, params->usPort, u_pRequestServersResponse );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_ISteamNetworkingConnectionCustomSignaling *u_pSignaling = create_LinuxISteamNetworkingConnectionCustomSignaling( params->pSignaling );
    params->_ret = iface->ConnectP2PCustomSignaling( u_pSignaling, params->pPeerIdentity, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_ISteamNetworkingCustomSignalingRecvContext *u_pContext = create_LinuxISteamNetworkingCustomSignalingRecvContext( params->pContext );
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, u_pContext );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_ISteamNetworkingConnectionCustomSignaling *u_pSignaling = create_LinuxISteamNetworkingConnectionCustomSignaling( params->pSignaling );
    params->_ret = iface->ConnectP2PCustomSignaling( u_pSignaling, params->pPeerIdentity, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_ISteamNetworkingCustomSignalingRecvContext *u_pContext = create_LinuxISteamNetworkingCustomSignalingRecvContext( params->pContext );
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, u_pContext );
    return 0;
}
