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
#include "steamworks_sdk_145/steam_api.h"
#include "steamworks_sdk_145/isteamnetworkingsockets.h"
#include "steamworks_sdk_145/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_146
#include "struct_converters.h"

#include "queue.h"

/* forward to 002 implementation */
struct winSteamNetworkingMessage_t_144;
#include "cppISteamNetworkingSockets_SteamNetworkingSockets002.h"

int cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection(
        void *linux_side, HSteamNetConnection hConn,
        winSteamNetworkingMessage_t_146 **ppOutMessages, int nMaxMessages)
{
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection(linux_side, hConn,
            (winSteamNetworkingMessage_t_144**)ppOutMessages, nMaxMessages);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket(
        void *linux_side, HSteamListenSocket hSocket,
        winSteamNetworkingMessage_t_146 **ppOutMessages, int nMaxMessages)
{
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket(linux_side, hSocket,
            (winSteamNetworkingMessage_t_144**)ppOutMessages, nMaxMessages);
}

}
