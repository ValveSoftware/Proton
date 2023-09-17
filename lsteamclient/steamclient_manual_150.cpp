#include "steamclient_private.h"

#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#pragma push_macro("strncpy")
#undef strncpy
#include "steamworks_sdk_150/steam_api.h"
#include "steamworks_sdk_150/isteamnetworkingsockets.h"
#include "steamworks_sdk_150/isteamnetworkingutils.h"
#include "steamworks_sdk_150/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")

extern "C" {
#define SDKVER_150
#include "struct_converters.h"
#include "cb_converters.h"

#define SDK_VERSION 1500
#include "steamclient_manual_common.h"

typedef winSteamNetworkingMessage_t_150 winSteamNetworkingMessage_t_152;
typedef winSteamNetworkingMessage_t_150 winSteamNetworkingMessage_t_158;
typedef struct SteamNetConnectionRealTimeStatus_t SteamNetConnectionRealTimeStatus_t;
#include "cppISteamNetworkingSockets_SteamNetworkingSockets009.h"
#include "cppISteamNetworkingMessages_SteamNetworkingMessages002.h"
#include "cppISteamNetworkingUtils_SteamNetworkingUtils003.h"
#include "cppISteamInput_SteamInput001.h"
#include "cppISteamController_SteamController007.h"
}

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params *params )
{
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params *params )
{
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params *params )
{
#define MAX_SEND_MESSAGES 64
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    /* use the stack to avoid heap allocation */
    struct SteamNetworkingMessage_t *lin_msgs[MAX_SEND_MESSAGES];
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
            lin_msgs[i] = (SteamNetworkingMessage_t *)network_message_win_to_lin( params->pMessages[i] );

        iface->SendMessages( i, lin_msgs, (int64 *)params->pOutMessageNumberOrResult );

        params->nMessages -= i;
        params->pMessages += i;
        if (params->pOutMessageNumberOrResult) params->pOutMessageNumberOrResult += i;
    }
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel_params *params )
{
    ISteamNetworkingMessages *iface = (ISteamNetworkingMessages *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnChannel( params->nLocalChannel, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

#pragma pack( push, 8 )
struct winSteamNetConnectionStatusChangedCallback_t_584 {
    HSteamNetConnection m_hConn;
    SteamNetConnectionInfo_t m_info __attribute__((aligned(8)));
    ESteamNetworkingConnectionState m_eOldState;
}  __attribute__ ((ms_struct));
#pragma pack( pop )

typedef void (*CDECL win_FnSteamNetConnectionStatusChanged)(winSteamNetConnectionStatusChangedCallback_t_584 *);
static win_FnSteamNetConnectionStatusChanged win_SteamNetConnectionStatusChanged;

static void lin_SteamNetConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t *l_dat)
{
    win_FnSteamNetConnectionStatusChanged fn = win_SteamNetConnectionStatusChanged;
    if(fn){
        struct winSteamNetConnectionStatusChangedCallback_t_584 w_dat;
        cb_SteamNetConnectionStatusChangedCallback_t_584(l_dat, &w_dat);
        fn(&w_dat);
    }
}

typedef void (*CDECL win_FnSteamNetAuthenticationStatusChanged)(SteamNetAuthenticationStatus_t *);
win_FnSteamNetAuthenticationStatusChanged win_SteamNetAuthenticationStatusChanged;

void lin_SteamNetAuthenticationStatusChanged(SteamNetAuthenticationStatus_t *dat)
{
    win_FnSteamNetAuthenticationStatusChanged fn = win_SteamNetAuthenticationStatusChanged;
    if(fn)
        fn(dat);
}

typedef void (*CDECL win_FnSteamRelayNetworkStatusChanged)(SteamRelayNetworkStatus_t *);
win_FnSteamRelayNetworkStatusChanged win_SteamRelayNetworkStatusChanged;

void lin_SteamRelayNetworkStatusChanged(SteamRelayNetworkStatus_t *dat)
{
    win_FnSteamRelayNetworkStatusChanged fn = win_SteamRelayNetworkStatusChanged;
    if(fn)
        fn(dat);
}

typedef void (*CDECL win_FnSteamNetworkingMessagesSessionRequest)(SteamNetworkingMessagesSessionRequest_t *);
win_FnSteamNetworkingMessagesSessionRequest win_SteamNetworkingMessagesSessionRequest;

void lin_SteamNetworkingMessagesSessionRequest(SteamNetworkingMessagesSessionRequest_t *dat)
{
    win_FnSteamNetworkingMessagesSessionRequest fn = win_SteamNetworkingMessagesSessionRequest;
    if(fn)
        fn(dat);
}

typedef void (*CDECL win_FnSteamNetworkingMessagesSessionFailed)(SteamNetworkingMessagesSessionFailed_t *);
win_FnSteamNetworkingMessagesSessionFailed win_SteamNetworkingMessagesSessionFailed;

void lin_SteamNetworkingMessagesSessionFailed(SteamNetworkingMessagesSessionFailed_t *dat)
{
    win_FnSteamNetworkingMessagesSessionFailed fn = win_SteamNetworkingMessagesSessionFailed;
    if(fn)
        fn(dat);
}

void cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue_params *params )
{
    ISteamNetworkingUtils *iface = (ISteamNetworkingUtils *)params->linux_side;
    void *lin_fn; /* api requires passing pointer-to-pointer */

    switch (params->eValue)
    {

#define CASE( x, y )                                                                                           \
    case k_ESteamNetworkingConfig_Callback_##x:                                                                \
        if (!params->pArg)                                                                                     \
        {                                                                                                      \
            params->_ret = iface->SetConfigValue( (ESteamNetworkingConfigValue)params->eValue,                  \
                                                 (ESteamNetworkingConfigScope)params->eScopeType,              \
                                                 params->scopeObj,                                             \
                                                 (ESteamNetworkingConfigDataType)params->eDataType, NULL );    \
        }                                                                                                      \
        else                                                                                                   \
        {                                                                                                      \
            if (*(void **)params->pArg == NULL) lin_fn = NULL;                                                 \
            else lin_fn = (void *)&lin_##y;                                                                    \
            params->_ret = iface->SetConfigValue( (ESteamNetworkingConfigValue)params->eValue,                  \
                                                 (ESteamNetworkingConfigScope)params->eScopeType,              \
                                                 params->scopeObj,                                             \
                                                 (ESteamNetworkingConfigDataType)params->eDataType, &lin_fn ); \
            if (params->_ret) win_##y = *(win_Fn##y *)params->pArg;                                             \
        }

        CASE( ConnectionStatusChanged, SteamNetConnectionStatusChanged )
        CASE( AuthStatusChanged, SteamNetAuthenticationStatusChanged )
        CASE( RelayNetworkStatusChanged, SteamRelayNetworkStatusChanged )
        CASE( MessagesSessionRequest, SteamNetworkingMessagesSessionRequest )
        CASE( MessagesSessionFailed, SteamNetworkingMessagesSessionFailed )

#undef CASE

    default:
        params->_ret = iface->SetConfigValue( (ESteamNetworkingConfigValue)params->eValue,
                                             (ESteamNetworkingConfigScope)params->eScopeType, params->scopeObj,
                                             (ESteamNetworkingConfigDataType)params->eDataType,
                                             params->pArg );
    }
}

void cppISteamInput_SteamInput001_GetGlyphForActionOrigin( struct cppISteamInput_SteamInput001_GetGlyphForActionOrigin_params *params )
{
    ISteamInput *iface = (ISteamInput *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( (EInputActionOrigin)params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph( params->eOrigin, params->_ret );
}

void cppISteamInput_SteamInput001_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput001_GetGlyphForXboxOrigin_params *params )
{
    ISteamInput *iface = (ISteamInput *)params->linux_side;
    params->_ret = iface->GetGlyphForXboxOrigin( (EXboxOrigin)params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph_xbox( params->eOrigin, params->_ret );
}

void cppISteamController_SteamController007_GetGlyphForActionOrigin( struct cppISteamController_SteamController007_GetGlyphForActionOrigin_params *params )
{
    ISteamController *iface = (ISteamController *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( (EControllerActionOrigin)params->eOrigin );
    params->_ret = steamclient_isteamcontroller_getglyph( params->eOrigin, params->_ret );
}

void cppISteamController_SteamController007_GetGlyphForXboxOrigin( struct cppISteamController_SteamController007_GetGlyphForXboxOrigin_params *params )
{
    ISteamController *iface = (ISteamController *)params->linux_side;
    params->_ret = iface->GetGlyphForXboxOrigin( (EXboxOrigin)params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph_xbox( params->eOrigin, params->_ret );
}
