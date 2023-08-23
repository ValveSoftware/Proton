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
#include "steamworks_sdk_153a/steam_api.h"
#include "steamworks_sdk_153a/isteamnetworkingsockets.h"
#include "steamworks_sdk_153a/isteamnetworkingutils.h"
#include "steamworks_sdk_153a/steamnetworkingtypes.h"
#include "steamworks_sdk_153a/steamnetworkingfakeip.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_153a
#include "struct_converters.h"
#include "cb_converters.h"
#include "win_constructors.h"

#define SDK_VERSION 1531
#include "steamclient_manual_common.h"

/***** manual fn wrapper for ISteamInput::EnableActionEventCallbacks *****/
extern win_SteamInputActionEventCallbackPointer win_EnableActionEventCallbacks;

void cppISteamInput_SteamInput006_EnableActionEventCallbacks(void *linux_side, win_SteamInputActionEventCallbackPointer pCallback)
{
    win_EnableActionEventCallbacks = pCallback;
    ((ISteamInput*)linux_side)->EnableActionEventCallbacks(pCallback ? &lin_SteamInputActionEventCallbackPointer : NULL);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection(
        void *linux_side, HSteamNetConnection hConn,
        winSteamNetworkingMessage_t_153a **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnConnection(hConn, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

int cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup(
        void *linux_side, HSteamNetPollGroup hPollGroup,
        winSteamNetworkingMessage_t_153a **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnPollGroup(hPollGroup, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages(
        void *linux_side, int nMessages, winSteamNetworkingMessage_t_153a **pMessages,
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

/* from winISteamNetworkingFakeUDPPort.c */
typedef struct __winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 {
    void *vtable;
    void *linux_side;
} winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001;

void *cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort(void *linux_side, int idxFakeServerPort)
{
    ISteamNetworkingFakeUDPPort *lin_iface = ((ISteamNetworkingSockets*)linux_side)->CreateFakeUDPPort(idxFakeServerPort);
    if(!lin_iface)
        return NULL;
    return create_winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001(lin_iface);
}

int cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_ReceiveMessages(void *linux_side, winSteamNetworkingMessage_t_153a ** ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingFakeUDPPort*)linux_side)->ReceiveMessages(lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

void cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort(void *linux_side)
{
    winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *win_side =
        (winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 *)
        (char *)linux_side - offsetof(winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001, linux_side);
    ((ISteamNetworkingFakeUDPPort*)linux_side)->DestroyFakeUDPPort();
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

bool cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue(void *linux_side,
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

SteamNetworkingMessage_t *cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage(
        void *linux_side, int cbAllocateBuffer)
{
    SteamNetworkingMessage_t *retval = ((ISteamNetworkingUtils*)linux_side)->AllocateMessage(cbAllocateBuffer);

    return (SteamNetworkingMessage_t *)network_message_lin_to_win(retval);
}

const char * cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin(void *linux_side, EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphPNGForActionOrigin((EInputActionOrigin)eOrigin, eSize, unFlags);
    return steamclient_isteaminput_getglyph_png(eOrigin, eSize, unFlags, path_result);
}

const char * cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin(void *linux_side, EInputActionOrigin eOrigin, uint32 unFlags)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphSVGForActionOrigin((EInputActionOrigin)eOrigin, unFlags);
    return steamclient_isteaminput_getglyph_svg(eOrigin, unFlags, path_result);
}

const char * cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy(void *linux_side, EInputActionOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphForActionOrigin_Legacy((EInputActionOrigin)eOrigin);
    return steamclient_isteaminput_getglyph(eOrigin, path_result);
}

const char * cppISteamInput_SteamInput006_GetGlyphForXboxOrigin(void *linux_side, EXboxOrigin eOrigin)
{
    const char *path_result;
    path_result = ((ISteamInput*)linux_side)->GetGlyphForXboxOrigin((EXboxOrigin)eOrigin);
    return steamclient_isteaminput_getglyph_xbox(eOrigin, path_result);
}

}
