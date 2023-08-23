extern "C" {
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);
}

#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_150/steam_api.h"
#include "steamworks_sdk_150/isteamnetworkingsockets.h"
#include "steamworks_sdk_150/isteamnetworkingutils.h"
#include "steamworks_sdk_150/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_150
#include "struct_converters.h"
#include "cb_converters.h"

#define SDK_VERSION 1500
#include "steamclient_manual_common.h"

int cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection(
        void *linux_side, HSteamNetConnection hConn,
        winSteamNetworkingMessage_t_150 **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnConnection(hConn, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

int cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup(
        void *linux_side, HSteamNetPollGroup hPollGroup,
        winSteamNetworkingMessage_t_150 **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnPollGroup(hPollGroup, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

void cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages(
        void *linux_side, int nMessages, winSteamNetworkingMessage_t_150 **pMessages,
        int64 *pOutMessageNumberOrResult)
{
#define MAX_SEND_MESSAGES 64
    /* use the stack to avoid heap allocation */
    struct SteamNetworkingMessage_t *lin_msgs[MAX_SEND_MESSAGES];
    int i;

    if (nMessages > MAX_SEND_MESSAGES)
    {
        /* if we ever hit this, increase MAX_SEND_MESSAGES appropriately */
        FIXME("Trying to send %u messages, which is more than %u! Will break up into pieces.\n", nMessages, MAX_SEND_MESSAGES);
    }

    while(nMessages)
    {
        for(i = 0; i < nMessages && i < MAX_SEND_MESSAGES; ++i)
            lin_msgs[i] = (SteamNetworkingMessage_t *)network_message_win_to_lin(pMessages[i]);

        ((ISteamNetworkingSockets*)linux_side)->SendMessages(i, lin_msgs, pOutMessageNumberOrResult);

        nMessages -= i;
        pMessages += i;
        if(pOutMessageNumberOrResult)
            pOutMessageNumberOrResult += i;
    }
}

int cppISteamNetworkingMessages_SteamNetworkingMessages002_ReceiveMessagesOnChannel(
        void *linux_side, int nLocalChannel,
        winSteamNetworkingMessage_t_150 ** ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingMessages*)linux_side)->ReceiveMessagesOnChannel(nLocalChannel, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
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

bool cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue(void *linux_side,
        ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType,
        intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)
{
    bool ret;
    void *lin_fn; /* api requires passing pointer-to-pointer */

    switch(eValue){

#define CASE(x, y) \
    case k_ESteamNetworkingConfig_Callback_##x: \
        if(!pArg){ \
            ret = ((ISteamNetworkingUtils*)linux_side)->SetConfigValue(eValue, eScopeType, scopeObj, eDataType, NULL); \
        }else{ \
            if(*(void **)pArg == NULL) \
                lin_fn = NULL; \
            else \
                lin_fn = (void *)&lin_##y; \
            ret = ((ISteamNetworkingUtils*)linux_side)->SetConfigValue(eValue, eScopeType, scopeObj, eDataType, &lin_fn); \
            if(ret) \
                win_##y = *(win_Fn##y*)pArg; \
        } \
        return ret;

    CASE(ConnectionStatusChanged,       SteamNetConnectionStatusChanged)
    CASE(AuthStatusChanged,             SteamNetAuthenticationStatusChanged)
    CASE(RelayNetworkStatusChanged,     SteamRelayNetworkStatusChanged)
    CASE(MessagesSessionRequest,        SteamNetworkingMessagesSessionRequest)
    CASE(MessagesSessionFailed,         SteamNetworkingMessagesSessionFailed)

#undef CASE

    default:
        return ((ISteamNetworkingUtils*)linux_side)->SetConfigValue((ESteamNetworkingConfigValue)eValue, (ESteamNetworkingConfigScope)eScopeType, (intptr_t)scopeObj, (ESteamNetworkingConfigDataType)eDataType, (const void *)pArg);
    }
}

const char * cppISteamInput_SteamInput001_GetGlyphForActionOrigin(void *linux_side, EInputActionOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphForActionOrigin((EInputActionOrigin)eOrigin);
    return steamclient_isteaminput_getglyph(eOrigin, path_result);
}

const char * cppISteamInput_SteamInput001_GetGlyphForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphForXboxOrigin((EXboxOrigin)eOrigin);
    return steamclient_isteaminput_getglyph_xbox(eOrigin, path_result);
}

const char * cppISteamController_SteamController007_GetGlyphForActionOrigin(void *linux_side, EControllerActionOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamController*)linux_side)->GetGlyphForActionOrigin((EControllerActionOrigin)eOrigin);
    return steamclient_isteamcontroller_getglyph(eOrigin, path_result);
}

const char * cppISteamController_SteamController007_GetGlyphForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamController*)linux_side)->GetGlyphForXboxOrigin((EXboxOrigin)eOrigin);
    return steamclient_isteaminput_getglyph_xbox(eOrigin, path_result);
}

}
