#include "steam_defs.h"
#include "steamworks_sdk_144/steam_api.h"
#include "steamworks_sdk_144/steamnetworkingtypes.h"
#include "steamclient_private.h"
extern "C" {
#define SDKVER_144
#include "struct_converters.h"

#include "windows.h"
#include "queue.h"

/***** manual struct converter for SteamNetworkingMessage_t *****/

struct msg_wrapper {
    struct winSteamNetworkingMessage_t_144 win_msg;
    struct SteamNetworkingMessage_t *lin_msg;

    void (*orig_FreeData)(SteamNetworkingMessage_t *);

    SLIST_ENTRY(msg_wrapper) entry;
};

SLIST_HEAD(free_msgs_head, msg_wrapper) free_msgs = SLIST_HEAD_INITIALIZER(free_msgs);
CRITICAL_SECTION free_msgs_lock = { NULL, -1, 0, 0, 0, 0 };

void CDECL win_FreeData(struct winSteamNetworkingMessage_t_144 *win_msg)
{
    struct msg_wrapper *msg = CONTAINING_RECORD(win_msg, struct msg_wrapper, win_msg);
    if(msg->orig_FreeData)
        msg->orig_FreeData(msg->lin_msg);
}

void CDECL win_Release(struct winSteamNetworkingMessage_t_144 *win_msg)
{
    struct msg_wrapper *msg = CONTAINING_RECORD(win_msg, struct msg_wrapper, win_msg);
    msg->lin_msg->m_pfnRelease(msg->lin_msg);
    msg->lin_msg = NULL;
    EnterCriticalSection(&free_msgs_lock);
    SLIST_INSERT_HEAD(&free_msgs, msg, entry);
    LeaveCriticalSection(&free_msgs_lock);
}

void lin_FreeData(struct SteamNetworkingMessage_t *lin_msg)
{
    struct msg_wrapper *msg = CONTAINING_RECORD(lin_msg, struct msg_wrapper, lin_msg);
    if(msg->win_msg.m_pfnFreeData)
        ((void (*)(struct winSteamNetworkingMessage_t_144 *))msg->win_msg.m_pfnFreeData)(&msg->win_msg);
}

void win_to_lin_struct_SteamNetworkingMessage_t_144(struct winSteamNetworkingMessage_t_144 **w, struct SteamNetworkingMessage_t **l)
{
    /* it's an output param, do nothing. */
}

void lin_to_win_struct_SteamNetworkingMessage_t_144(int n_messages, struct SteamNetworkingMessage_t **l, struct winSteamNetworkingMessage_t_144 **w)
{
    int i;
    for(i = 0; i < n_messages; ++i)
    {
        struct msg_wrapper *msg;

        EnterCriticalSection(&free_msgs_lock);

        msg = SLIST_FIRST(&free_msgs);

        if(!msg){
            /* allocs can be pricey, so alloc in blocks */
#define MSGS_PER_BLOCK 16
            struct msg_wrapper *msgs = (struct msg_wrapper *)HeapAlloc(GetProcessHeap(), 0, sizeof(struct msg_wrapper) * MSGS_PER_BLOCK);
            for(i = 1; i < MSGS_PER_BLOCK; ++i)
                SLIST_INSERT_HEAD(&free_msgs, &msg[i], entry);
            msg = &msgs[0];
        }else
            SLIST_REMOVE_HEAD(&free_msgs, entry);

        LeaveCriticalSection(&free_msgs_lock);

        msg->lin_msg = l[i];

        msg->orig_FreeData = msg->lin_msg->m_pfnFreeData;
        msg->lin_msg->m_pfnFreeData = lin_FreeData;

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

        w[i] = &msg->win_msg;
    }
}

}
