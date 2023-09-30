#include "unix_private.h"

extern "C" {
#define SDKVER_157
#define SDK_VERSION 1500
#include "steamclient_manual_common.h"
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets009.hpp"
#include "cppISteamNetworkingMessages_SteamNetworkingMessages002.hpp"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils003.hpp"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, u_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, u_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *params )
{
#define MAX_SEND_MESSAGES 64
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets009 *)params->linux_side;
    /* use the stack to avoid heap allocation */
    u_SteamNetworkingMessage_t_147 *lin_msgs[MAX_SEND_MESSAGES];
    int i;

    if (params->nMessages > MAX_SEND_MESSAGES)
    {
        /* if we ever hit this, increase MAX_SEND_MESSAGES appropriately */
        FIXME( "Trying to send %u messages, which is more than %u! Will break up into pieces.\n",
               params->nMessages, MAX_SEND_MESSAGES );
    }

    while (params->nMessages)
    {
        for (i = 0; i < params->nMessages && i < MAX_SEND_MESSAGES; ++i)
            lin_msgs[i] = (u_SteamNetworkingMessage_t_147 *)network_message_win_to_lin( params->pMessages[i] );

        iface->SendMessages( i, lin_msgs, params->pOutMessageNumberOrResult );

        params->nMessages -= i;
        params->pMessages += i;
        if (params->pOutMessageNumberOrResult) params->pOutMessageNumberOrResult += i;
    }
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params *params )
{
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    u_SteamNetworkingMessage_t_153a *u_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnChannel( params->nLocalChannel, u_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, u_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

typedef void (*CDECL win_FnSteamNetConnectionStatusChanged)( w_SteamNetConnectionStatusChangedCallback_t_151 * );
static win_FnSteamNetConnectionStatusChanged win_SteamNetConnectionStatusChanged;
static void lin_SteamNetConnectionStatusChanged( u_SteamNetConnectionStatusChangedCallback_t_151 *u_dat )
{
    win_FnSteamNetConnectionStatusChanged fn = win_SteamNetConnectionStatusChanged;
    if (fn)
    {
        w_SteamNetConnectionStatusChangedCallback_t_151 w_dat = *u_dat;
        fn(&w_dat);
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

void cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage_params *params )
{
    struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface = (struct u_ISteamNetworkingUtils_SteamNetworkingUtils003 *)params->linux_side;
    u_SteamNetworkingMessage_t_147 *u_ret = iface->AllocateMessage( params->cbAllocateBuffer );
    params->_ret = (w_SteamNetworkingMessage_t_147 *)network_message_lin_to_win( u_ret );
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
