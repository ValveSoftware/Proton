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
#include "steamworks_sdk_148a/steam_api.h"
#include "steamworks_sdk_148a/isteamnetworkingsockets.h"
#include "steamworks_sdk_148a/isteamnetworkingutils.h"
#include "steamworks_sdk_148a/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_148a
#include "struct_converters.h"

#include "queue.h"

/***** manual struct converter for SteamNetworkingMessage_t *****/

struct msg_wrapper {
    struct winSteamNetworkingMessage_t_148a win_msg;
    struct SteamNetworkingMessage_t *lin_msg;

    void (*orig_FreeData)(SteamNetworkingMessage_t *);

    SLIST_ENTRY(msg_wrapper) entry;
};

static SLIST_HEAD(free_msgs_head, msg_wrapper) free_msgs = SLIST_HEAD_INITIALIZER(free_msgs);
static CRITICAL_SECTION free_msgs_lock = { NULL, -1, 0, 0, 0, 0 };

static void __attribute__((ms_abi)) win_FreeData(struct winSteamNetworkingMessage_t_148a *win_msg)
{
    struct msg_wrapper *msg = CONTAINING_RECORD(win_msg, struct msg_wrapper, win_msg);
    TRACE("%p\n", msg);
    if(msg->orig_FreeData)
    {
        msg->lin_msg->m_pData = msg->win_msg.m_pData;
        msg->orig_FreeData(msg->lin_msg);
    }
}

static void __attribute__((ms_abi)) win_Release(struct winSteamNetworkingMessage_t_148a *win_msg)
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
        ((void (__attribute__((ms_abi))*)(struct winSteamNetworkingMessage_t_148a *))msg->win_msg.m_pfnFreeData)(&msg->win_msg);
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

void lin_to_win_struct_SteamNetworkingMessage_t_148a(int n_messages, struct SteamNetworkingMessage_t **l, struct winSteamNetworkingMessage_t_148a **w, int max_messages)
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

int cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection(
        void *linux_side, HSteamNetConnection hConn,
        winSteamNetworkingMessage_t_148a **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnConnection(hConn, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t_148a(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

// Removed.
// int cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnListenSocket(
//         void *linux_side, HSteamListenSocket hSocket,
//         winSteamNetworkingMessage_t_148a **ppOutMessages, int nMaxMessages)
// {
//     SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
//     int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnListenSocket(hSocket, lin_ppOutMessages, nMaxMessages);
//     lin_to_win_struct_SteamNetworkingMessage_t_148a(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
//     return retval;
// }

void cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages(
        void *linux_side, int nMessages, winSteamNetworkingMessage_t_148a **pMessages,
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

// @todo Implement manual override
int cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( void *linux_side, HSteamNetPollGroup hPollGroup, winSteamNetworkingMessage_t_148a ** ppOutMessages, int nMaxMessages )
{
	return ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnPollGroup( hPollGroup,(SteamNetworkingMessage_t **)ppOutMessages,nMaxMessages );
}

}
