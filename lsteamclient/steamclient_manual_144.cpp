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
#include "steamworks_sdk_144/steam_api.h"
#include "steamworks_sdk_144/isteamnetworkingsockets.h"
#include "steamworks_sdk_144/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_144
#include "struct_converters.h"

#include "queue.h"

/***** manual struct converter for SteamNetworkingMessage_t *****/

struct msg_wrapper {
    struct winSteamNetworkingMessage_t_144 win_msg;
    struct SteamNetworkingMessage_t *lin_msg;

    void (*orig_FreeData)(SteamNetworkingMessage_t *);

    SLIST_ENTRY(msg_wrapper) entry;
};

static SLIST_HEAD(free_msgs_head, msg_wrapper) free_msgs = SLIST_HEAD_INITIALIZER(free_msgs);
static CRITICAL_SECTION free_msgs_lock = { NULL, -1, 0, 0, 0, 0 };

static void __attribute__((ms_abi)) win_FreeData(struct winSteamNetworkingMessage_t_144 *win_msg)
{
    struct msg_wrapper *msg = CONTAINING_RECORD(win_msg, struct msg_wrapper, win_msg);
    TRACE("%p\n", msg);
    if(msg->orig_FreeData)
    {
        msg->lin_msg->m_pData = msg->win_msg.m_pData;
        msg->orig_FreeData(msg->lin_msg);
    }
}

static void __attribute__((ms_abi)) win_Release(struct winSteamNetworkingMessage_t_144 *win_msg)
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
        ((void (__attribute__((ms_abi))*)(struct winSteamNetworkingMessage_t_144 *))msg->win_msg.m_pfnFreeData)(&msg->win_msg);
}

void lin_to_win_struct_SteamNetworkingMessage_t_144(int n_messages, struct SteamNetworkingMessage_t **l, struct winSteamNetworkingMessage_t_144 **w, int max_messages)
{
    int i;

    if(n_messages > 0)
        TRACE("%u %p %p\n", n_messages, l, w);

    for(i = 0; i < n_messages; ++i)
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

        msg->lin_msg = l[i];

        msg->win_msg.m_pData = msg->lin_msg->m_pData;
        msg->win_msg.m_cbSize = msg->lin_msg->m_cbSize;
        msg->win_msg.m_conn = msg->lin_msg->m_conn;
        msg->win_msg.m_sender = msg->lin_msg->m_sender;
        msg->win_msg.m_nConnUserData = msg->lin_msg->m_nConnUserData;
        msg->win_msg.m_usecTimeReceived= msg->lin_msg->m_usecTimeReceived;
        msg->win_msg.m_nMessageNumber = msg->lin_msg->m_nMessageNumber;
        msg->win_msg.m_pfnFreeData = (void*)win_FreeData;
        msg->win_msg.m_pfnRelease = (void*)win_Release;
        msg->win_msg.m_nChannel = msg->lin_msg->m_nChannel;
        msg->win_msg.m___nPadDummy = msg->lin_msg->m___nPadDummy;

        msg->orig_FreeData = msg->lin_msg->m_pfnFreeData;
        msg->lin_msg->m_pfnFreeData = lin_FreeData;
        /* ! store the wrapper here and restore the original pointer from win_msg before calling orig_FreeData */
        msg->lin_msg->m_pData = msg;

        w[i] = &msg->win_msg;
        TRACE("done with %u, returned wrapper %p\n", i, msg);
    }

    for(; i < max_messages; ++i)
        w[i] = NULL;
}

int cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection(
        void *linux_side, HSteamNetConnection hConn,
        winSteamNetworkingMessage_t_144 **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnConnection(hConn, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t_144(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

int cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket(
        void *linux_side, HSteamListenSocket hSocket,
        winSteamNetworkingMessage_t_144 **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnListenSocket(hSocket, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t_144(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

}
