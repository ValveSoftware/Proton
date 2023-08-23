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
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/isteamnetworkingsockets.h"
#include "steamworks_sdk_147/isteamnetworkingutils.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_147
#include "struct_converters.h"

#define SDK_VERSION 1470
#include "steamclient_manual_common.h"

int cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection(
        void *linux_side, HSteamNetConnection hConn,
        winSteamNetworkingMessage_t_147 **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnConnection(hConn, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

int cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket(
        void *linux_side, HSteamListenSocket hSocket,
        winSteamNetworkingMessage_t_147 **ppOutMessages, int nMaxMessages)
{
    SteamNetworkingMessage_t *lin_ppOutMessages[nMaxMessages];
    int retval = ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnListenSocket(hSocket, lin_ppOutMessages, nMaxMessages);
    lin_to_win_struct_SteamNetworkingMessage_t(retval, lin_ppOutMessages, ppOutMessages, nMaxMessages);
    return retval;
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages(
        void *linux_side, int nMessages, winSteamNetworkingMessage_t_147 **pMessages,
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

}
