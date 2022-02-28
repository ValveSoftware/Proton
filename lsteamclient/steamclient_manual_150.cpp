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

#include "queue.h"

/***** manual struct converter for SteamNetworkingMessage_t *****/

struct msg_wrapper {
    struct winSteamNetworkingMessage_t_150 win_msg;
    struct SteamNetworkingMessage_t *lin_msg;

    void (*orig_FreeData)(SteamNetworkingMessage_t *);

    SLIST_ENTRY(msg_wrapper) entry;
};

static SLIST_HEAD(free_msgs_head, msg_wrapper) free_msgs = SLIST_HEAD_INITIALIZER(free_msgs);
static CRITICAL_SECTION free_msgs_lock = { NULL, -1, 0, 0, 0, 0 };

static void __attribute__((ms_abi)) win_FreeData(struct winSteamNetworkingMessage_t_150 *win_msg)
{
    struct msg_wrapper *msg = CONTAINING_RECORD(win_msg, struct msg_wrapper, win_msg);
    TRACE("%p\n", msg);
    if(msg->orig_FreeData)
    {
        msg->lin_msg->m_pData = msg->win_msg.m_pData;
        msg->orig_FreeData(msg->lin_msg);
    }
}

static void __attribute__((ms_abi)) win_Release(struct winSteamNetworkingMessage_t_150 *win_msg)
{
    struct msg_wrapper *msg = CONTAINING_RECORD(win_msg, struct msg_wrapper, win_msg);
    TRACE("%p\n", msg);
    msg->lin_msg->m_pfnRelease(msg->lin_msg);
    msg->lin_msg = NULL;
    msg->orig_FreeData = NULL;
    EnterCriticalSection(&free_msgs_lock);
    SLIST_INSERT_HEAD(&free_msgs, msg, entry);
    LeaveCriticalSection(&free_msgs_lock);
}

static void lin_FreeData(struct SteamNetworkingMessage_t *lin_msg)
{
    struct msg_wrapper *msg = (struct msg_wrapper *)lin_msg->m_pData; /* ! see assignment, below */
    TRACE("%p\n", msg);
    if(msg->win_msg.m_pfnFreeData)
        ((void (__attribute__((ms_abi))*)(struct winSteamNetworkingMessage_t_150 *))msg->win_msg.m_pfnFreeData)(&msg->win_msg);
}

static struct msg_wrapper *clone_msg(struct SteamNetworkingMessage_t *lin_msg)
{
    struct msg_wrapper *msg;

    EnterCriticalSection(&free_msgs_lock);

    msg = SLIST_FIRST(&free_msgs);

    if(!msg){
        int n;
        /* allocs can be pricey, so alloc in blocks */
#define MSGS_PER_BLOCK 16
        struct msg_wrapper *msgs = (struct msg_wrapper *)HeapAlloc(GetProcessHeap(), 0, sizeof(struct msg_wrapper) * MSGS_PER_BLOCK);
        for(n = 1; n < MSGS_PER_BLOCK; ++n)
            SLIST_INSERT_HEAD(&free_msgs, &msgs[n], entry);
        msg = &msgs[0];
    }else
        SLIST_REMOVE_HEAD(&free_msgs, entry);

    LeaveCriticalSection(&free_msgs_lock);

    msg->lin_msg = lin_msg;

    msg->win_msg.m_pData = msg->lin_msg->m_pData;
    msg->win_msg.m_cbSize = msg->lin_msg->m_cbSize;
    msg->win_msg.m_conn = msg->lin_msg->m_conn;
    msg->win_msg.m_identityPeer = msg->lin_msg->m_identityPeer;
    msg->win_msg.m_nConnUserData = msg->lin_msg->m_nConnUserData;
    msg->win_msg.m_usecTimeReceived= msg->lin_msg->m_usecTimeReceived;
    msg->win_msg.m_nMessageNumber = msg->lin_msg->m_nMessageNumber;
    msg->win_msg.m_pfnFreeData = (void*)win_FreeData;
    msg->win_msg.m_pfnRelease = (void*)win_Release;
    msg->win_msg.m_nChannel = msg->lin_msg->m_nChannel;
    msg->win_msg.m_nFlags = msg->lin_msg->m_nFlags;
    msg->win_msg.m_nUserData = msg->lin_msg->m_nUserData;

    msg->orig_FreeData = msg->lin_msg->m_pfnFreeData;
    msg->lin_msg->m_pfnFreeData = lin_FreeData;
    /* ! store the wrapper here and restore the original pointer from win_msg before calling orig_FreeData */
    msg->lin_msg->m_pData = msg;

    return msg;
}

void lin_to_win_struct_SteamNetworkingMessage_t_150(int n_messages, struct SteamNetworkingMessage_t **l, struct winSteamNetworkingMessage_t_150 **w, int max_messages)
{
    int i;

    if(n_messages > 0)
        TRACE("%u %p %p\n", n_messages, l, w);

    for(i = 0; i < n_messages; ++i)
    {
        struct msg_wrapper *msg;

        msg = clone_msg(l[i]);

        w[i] = &msg->win_msg;

        TRACE("done with %u, returned wrapper %p\n", i, msg);
    }

    for(; i < max_messages; ++i)
        w[i] = NULL;
}

int cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection(
        void *linux_side, HSteamNetConnection hConn,
        winSteamNetworkingMessage_t_150 **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnConnection(hConn, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t_150(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

int cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup(
        void *linux_side, HSteamNetPollGroup hPollGroup,
        winSteamNetworkingMessage_t_150 **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnPollGroup(hPollGroup, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t_150(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
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
        {
            struct msg_wrapper *msg = CONTAINING_RECORD(pMessages[i], struct msg_wrapper, win_msg);
            lin_msgs[i] = msg->lin_msg;

            lin_msgs[i]->m_pData = msg->win_msg.m_pData;
            lin_msgs[i]->m_cbSize = msg->win_msg.m_cbSize;
            lin_msgs[i]->m_conn = msg->win_msg.m_conn;
            lin_msgs[i]->m_identityPeer = msg->win_msg.m_identityPeer;
            lin_msgs[i]->m_nConnUserData = msg->win_msg.m_nConnUserData;
            lin_msgs[i]->m_usecTimeReceived= msg->win_msg.m_usecTimeReceived;
            lin_msgs[i]->m_nMessageNumber = msg->win_msg.m_nMessageNumber;
            lin_msgs[i]->m_nChannel = msg->win_msg.m_nChannel;
            lin_msgs[i]->m_nFlags = msg->win_msg.m_nFlags;
            lin_msgs[i]->m_nUserData = msg->win_msg.m_nUserData;
        }

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
    lin_to_win_struct_SteamNetworkingMessage_t_150(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
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
