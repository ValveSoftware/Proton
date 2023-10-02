#include "steamclient_structs.h"

#include <stdlib.h>

#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.hpp"
#include "cppISteamNetworkingMessages_SteamNetworkingMessages002.hpp"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets002.hpp"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets004.hpp"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets006.hpp"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets008.hpp"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets009.hpp"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets012.hpp"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils003.hpp"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils004.hpp"

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

void unix_networking_messages_receive_144( uint32_t count, w_SteamNetworkingMessage_t_144 **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_144 );
        w_SteamNetworkingMessage_t_144 *w_msg = &message->w_msg_144;
        u_SteamNetworkingMessage_t_144 *u_msg = message->u_msg_144;

        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_144 = NULL;
    }
}

/* ISteamNetworkingSockets_SteamNetworkingSockets002 */

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
}

/* ISteamNetworkingSockets_SteamNetworkingSockets004 */

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_144( params->_ret, u_msgs, params->ppOutMessages );
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

void unix_networking_messages_receive_147( uint32_t count, w_SteamNetworkingMessage_t_147 **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_147 );
        w_SteamNetworkingMessage_t_147 *w_msg = &message->w_msg_147;
        u_SteamNetworkingMessage_t_147 *u_msg = message->u_msg_147;

        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_147 = NULL;
    }
}

static void U_STDCALL u_SteamNetworkingMessage_t_147_FreeData( u_SteamNetworkingMessage_t_147 *msg )
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

void unix_networking_message_release_147( w_SteamNetworkingMessage_t_147 *w_msg )
{
    struct networking_message *message = CONTAINING_RECORD( w_msg, struct networking_message, w_msg_147 );
    u_SteamNetworkingMessage_t_147 *u_msg = message->u_msg_147;

    if (!message->u_msg_147) return;
    u_msg->m_pfnRelease( u_msg );
    message->u_msg_147 = NULL;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets006 */

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
}

/* ISteamNetworkingSockets_SteamNetworkingSockets008 */

void cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
}

/* ISteamNetworkingSockets_SteamNetworkingSockets009 */

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_147( params->_ret, u_msgs, params->ppOutMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msgs[params->nMessages];
    send_messages_wtou_147( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
}

/* ISteamNetworkingUtils_SteamNetworkingUtils003 */

void cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_msg = iface->AllocateMessage( params->cbAllocateBuffer );
    if (u_msg) receive_messages_utow_147( 1, &u_msg, &params->_ret );
}

typedef void (*CDECL win_FnSteamNetConnectionStatusChanged)( w_SteamNetConnectionStatusChangedCallback_t_151 * );
static win_FnSteamNetConnectionStatusChanged win_SteamNetConnectionStatusChanged;
static void lin_SteamNetConnectionStatusChanged( u_SteamNetConnectionStatusChangedCallback_t_151 *u_dat )
{
    win_FnSteamNetConnectionStatusChanged fn = win_SteamNetConnectionStatusChanged;
    if (fn)
    {
        w_SteamNetConnectionStatusChangedCallback_t_151 w_dat = *u_dat;
        fn( &w_dat );
    }
}

typedef void (*CDECL win_FnSteamNetAuthenticationStatusChanged)( SteamNetAuthenticationStatus_t * );
static win_FnSteamNetAuthenticationStatusChanged win_SteamNetAuthenticationStatusChanged;
static void lin_SteamNetAuthenticationStatusChanged( SteamNetAuthenticationStatus_t *dat )
{
    win_FnSteamNetAuthenticationStatusChanged fn = win_SteamNetAuthenticationStatusChanged;
    if (fn) fn( dat );
}

typedef void (*CDECL win_FnSteamRelayNetworkStatusChanged)( SteamRelayNetworkStatus_t * );
static win_FnSteamRelayNetworkStatusChanged win_SteamRelayNetworkStatusChanged;
static void lin_SteamRelayNetworkStatusChanged( SteamRelayNetworkStatus_t *dat )
{
    win_FnSteamRelayNetworkStatusChanged fn = win_SteamRelayNetworkStatusChanged;
    if (fn) fn( dat );
}

typedef void (*CDECL win_FnSteamNetworkingMessagesSessionRequest)( SteamNetworkingMessagesSessionRequest_t_151 * );
static win_FnSteamNetworkingMessagesSessionRequest win_SteamNetworkingMessagesSessionRequest;
static void lin_SteamNetworkingMessagesSessionRequest( SteamNetworkingMessagesSessionRequest_t_151 *dat )
{
    win_FnSteamNetworkingMessagesSessionRequest fn = win_SteamNetworkingMessagesSessionRequest;
    if (fn) fn( dat );
}

typedef void (*CDECL win_FnSteamNetworkingMessagesSessionFailed)( SteamNetworkingMessagesSessionFailed_t_151 * );
static win_FnSteamNetworkingMessagesSessionFailed win_SteamNetworkingMessagesSessionFailed;
static void lin_SteamNetworkingMessagesSessionFailed( SteamNetworkingMessagesSessionFailed_t_151 *dat )
{
    win_FnSteamNetworkingMessagesSessionFailed fn = win_SteamNetworkingMessagesSessionFailed;
    if (fn) fn( dat );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    void *lin_fn; /* api requires passing pointer-to-pointer */

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
        if (*(void **)params->pArg == NULL) lin_fn = NULL;                                         \
        else lin_fn = (void *)&lin_##y;                                                            \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, &lin_fn );      \
        if (params->_ret) win_##y = *(win_Fn##y *)params->pArg;                                    \
    }

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

void unix_networking_messages_receive_153a( uint32_t count, w_SteamNetworkingMessage_t_153a **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = CONTAINING_RECORD( w_msgs[i], struct networking_message, w_msg_153a );
        w_SteamNetworkingMessage_t_153a *w_msg = &message->w_msg_153a;
        u_SteamNetworkingMessage_t_153a *u_msg = message->u_msg_153a;

        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg_153a = NULL;
    }
}

static void U_STDCALL u_SteamNetworkingMessage_t_153a_FreeData( u_SteamNetworkingMessage_t_153a *msg )
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

void unix_networking_message_release_153a( w_SteamNetworkingMessage_t_153a *w_msg )
{
    struct networking_message *message = CONTAINING_RECORD( w_msg, struct networking_message, w_msg_153a );
    u_SteamNetworkingMessage_t_153a *u_msg = message->u_msg_153a;

    if (!message->u_msg_153a) return;
    u_msg->m_pfnRelease( u_msg );
    message->u_msg_153a = NULL;
}

/* ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 */

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params *params )
{
    struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct u_ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessages( u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
}

/* ISteamNetworkingMessages_SteamNetworkingMessages002 */

void cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params *params )
{
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnChannel( params->nLocalChannel, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
}

/* ISteamNetworkingSockets_SteamNetworkingSockets012 */

void cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow_153a( params->_ret, u_msgs, params->ppOutMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msgs[params->nMessages];
    send_messages_wtou_153a( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
}

/* ISteamNetworkingUtils_SteamNetworkingUtils004 */

void cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_msg = iface->AllocateMessage( params->cbAllocateBuffer );
    if (u_msg) receive_messages_utow_153a( 1, &u_msg, &params->_ret );
}

typedef void (*CDECL win_FnSteamNetConnectionStatusChanged_153a)( w_SteamNetConnectionStatusChangedCallback_t_153a * );
static win_FnSteamNetConnectionStatusChanged_153a win_SteamNetConnectionStatusChanged_153a;
static void lin_SteamNetConnectionStatusChanged_153a( u_SteamNetConnectionStatusChangedCallback_t_153a *u_dat )
{
    win_FnSteamNetConnectionStatusChanged_153a fn = win_SteamNetConnectionStatusChanged_153a;
    if (fn)
    {
        w_SteamNetConnectionStatusChangedCallback_t_153a w_dat = *u_dat;
        fn( &w_dat );
    }
}

typedef void (*CDECL win_FnSteamNetworkingMessagesSessionFailed_153a)( SteamNetworkingMessagesSessionFailed_t_153a * );
static win_FnSteamNetworkingMessagesSessionFailed_153a win_SteamNetworkingMessagesSessionFailed_153a;
static void lin_SteamNetworkingMessagesSessionFailed_153a( SteamNetworkingMessagesSessionFailed_t_153a *dat )
{
    win_FnSteamNetworkingMessagesSessionFailed_153a fn = win_SteamNetworkingMessagesSessionFailed_153a;
    if (fn) fn( dat );
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    bool ret;
    void *lin_fn; /* api requires passing pointer-to-pointer */

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
        if (*(void **)params->pArg == NULL) lin_fn = NULL;                                         \
        else lin_fn = (void *)&lin_##y;                                                            \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, &lin_fn );      \
        if (params->_ret) win_##y = *(win_Fn##y *)params->pArg;                                    \
    }

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
}
