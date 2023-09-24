#include "steamclient_private.h"

extern "C" {
#include "win_constructors.h"
#include "cb_converters.h"

#define SDK_VERSION 1531
#include "steamclient_manual_common.h"
}

#pragma push_macro( "__cdecl" )
#undef __cdecl
#pragma push_macro( "strncpy" )
#undef strncpy
#include "cppISteamNetworkingUtils_SteamNetworkingUtils004.hpp"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets012.hpp"
#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.hpp"
typedef struct ScePadTriggerEffectParam { uint8 m_data[120]; } ScePadTriggerEffectParam;
#include "cppISteamInput_SteamInput006.hpp"
#pragma pop_macro( "__cdecl" )
#pragma pop_macro( "strncpy" )

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

/***** manual fn wrapper for ISteamInput::EnableActionEventCallbacks *****/
extern win_SteamInputActionEventCallbackPointer win_EnableActionEventCallbacks;

void cppISteamInput_SteamInput006_EnableActionEventCallbacks( struct cppISteamInput_SteamInput006_EnableActionEventCallbacks_params *params )
{
    struct cppISteamInput_SteamInput006 *iface = (struct cppISteamInput_SteamInput006 *)params->linux_side;
    win_EnableActionEventCallbacks = (win_SteamInputActionEventCallbackPointer)params->pCallback;
    iface->EnableActionEventCallbacks( params->pCallback ? &lin_SteamInputActionEventCallbackPointer : NULL );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup( struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages_params *params )
{
#define MAX_SEND_MESSAGES 64
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
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

        iface->SendMessages( i, lin_msgs, params->pOutMessageNumberOrResult );

        params->nMessages -= i;
        params->pMessages += i;
        if (params->pOutMessageNumberOrResult) params->pOutMessageNumberOrResult += i;
    }
}

/* from winISteamNetworkingFakeUDPPort.c */
typedef struct __winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 {
    void *vtable;
    void *linux_side;
} winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001;

void cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    void *lin_iface = iface->CreateFakeUDPPort( params->idxFakeServerPort );
    if (!lin_iface) params->_ret = NULL;
    else params->_ret = create_winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001( lin_iface );
}

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages_params *params )
{
    struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *iface = (struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessages( lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort( struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort_params *params )
{
    ISteamNetworkingFakeUDPPort *iface = (ISteamNetworkingFakeUDPPort *)params->linux_side;
    winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001
    *win_side = (winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)( char *)params->linux_side -
                offsetof( winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001, linux_side );
    iface->DestroyFakeUDPPort();
    HeapFree(GetProcessHeap(), 0, win_side);
}

#pragma pack( push, 8 )
struct winSteamNetConnectionStatusChangedCallback_t_712 {
    HSteamNetConnection m_hConn;
    SteamNetConnectionInfo_t m_info __attribute__((aligned(8)));
    ESteamNetworkingConnectionState m_eOldState;
}  __attribute__ ((ms_struct));
#pragma pack( pop )

typedef void (*CDECL win_FnSteamNetConnectionStatusChanged)(winSteamNetConnectionStatusChangedCallback_t_712 *);
static win_FnSteamNetConnectionStatusChanged win_SteamNetConnectionStatusChanged;

static void lin_SteamNetConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t *l_dat)
{
    win_FnSteamNetConnectionStatusChanged fn = win_SteamNetConnectionStatusChanged;
    if(fn){
        struct winSteamNetConnectionStatusChangedCallback_t_712 w_dat;
        cb_SteamNetConnectionStatusChangedCallback_t_712(l_dat, &w_dat);
        fn(&w_dat);
    }
}

typedef void (*CDECL win_FnSteamNetAuthenticationStatusChanged)(SteamNetAuthenticationStatus_t *);
extern win_FnSteamNetAuthenticationStatusChanged win_SteamNetAuthenticationStatusChanged;

typedef void (*CDECL win_FnSteamRelayNetworkStatusChanged)(SteamRelayNetworkStatus_t *);
extern win_FnSteamRelayNetworkStatusChanged win_SteamRelayNetworkStatusChanged;

typedef void (*CDECL win_FnSteamNetworkingMessagesSessionRequest)(SteamNetworkingMessagesSessionRequest_t *);
extern win_FnSteamNetworkingMessagesSessionRequest win_SteamNetworkingMessagesSessionRequest;

typedef void (*CDECL win_FnSteamNetworkingMessagesSessionFailed)(SteamNetworkingMessagesSessionFailed_t *);
extern win_FnSteamNetworkingMessagesSessionFailed win_SteamNetworkingMessagesSessionFailed;

extern void lin_SteamNetworkingMessagesSessionRequest(SteamNetworkingMessagesSessionRequest_t *dat);
extern void lin_SteamNetworkingMessagesSessionFailed(SteamNetworkingMessagesSessionFailed_t *dat);
extern void lin_SteamRelayNetworkStatusChanged(SteamRelayNetworkStatus_t *dat);
extern void lin_SteamNetAuthenticationStatusChanged(SteamNetAuthenticationStatus_t *dat);

void cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    bool ret;
    void *lin_fn; /* api requires passing pointer-to-pointer */

    switch (params->eValue)
    {

#define CASE( x, y )                                                                               \
    case k_ESteamNetworkingConfig_Callback_##x:                                                    \
        if (!params->pArg)                                                                         \
        {                                                                                          \
            params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,              \
                                                  params->scopeObj, params->eDataType, NULL );     \
        }                                                                                          \
        else                                                                                       \
        {                                                                                          \
            if (*(void **)params->pArg == NULL) lin_fn = NULL;                                     \
            else lin_fn = (void *)&lin_##y;                                                        \
            params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,              \
                                                  params->scopeObj, params->eDataType, &lin_fn );  \
            if (params->_ret) win_##y = *(win_Fn##y *)params->pArg;                                \
        }

        CASE( ConnectionStatusChanged, SteamNetConnectionStatusChanged )
        CASE( AuthStatusChanged, SteamNetAuthenticationStatusChanged )
        CASE( RelayNetworkStatusChanged, SteamRelayNetworkStatusChanged )
        CASE( MessagesSessionRequest, SteamNetworkingMessagesSessionRequest )
        CASE( MessagesSessionFailed, SteamNetworkingMessagesSessionFailed )

#undef CASE

    default:
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, params->pArg );
    }
}

void cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage( struct cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage_params *params )
{
    struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *iface = (struct cppISteamNetworkingUtils_SteamNetworkingUtils004 *)params->linux_side;
    params->_ret = (winSteamNetworkingMessage_t_158 *)iface->AllocateMessage( params->cbAllocateBuffer );
    params->_ret = (winSteamNetworkingMessage_t_158 *)network_message_lin_to_win( params->_ret );
}

void cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin( struct cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin_params *params )
{
    struct cppISteamInput_SteamInput006 *iface = (struct cppISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetGlyphPNGForActionOrigin( params->eOrigin, params->eSize, params->unFlags );
    params->_ret = steamclient_isteaminput_getglyph_png( params->eOrigin, params->eSize,
                                                        params->unFlags, params->_ret );
}

void cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin( struct cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin_params *params )
{
    struct cppISteamInput_SteamInput006 *iface = (struct cppISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetGlyphSVGForActionOrigin( params->eOrigin, params->unFlags );
    params->_ret = steamclient_isteaminput_getglyph_svg( params->eOrigin, params->unFlags, params->_ret );
}

void cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy( struct cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy_params *params )
{
    struct cppISteamInput_SteamInput006 *iface = (struct cppISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin_Legacy( params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph( params->eOrigin, params->_ret );
}

void cppISteamInput_SteamInput006_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput006_GetGlyphForXboxOrigin_params *params )
{
    struct cppISteamInput_SteamInput006 *iface = (struct cppISteamInput_SteamInput006 *)params->linux_side;
    params->_ret = iface->GetGlyphForXboxOrigin( params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph_xbox( params->eOrigin, params->_ret );
}
