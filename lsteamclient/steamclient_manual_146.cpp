#include "steamclient_private.h"

#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#pragma push_macro("strncpy")
#undef strncpy
#include "steamworks_sdk_146/steam_api.h"
#include "steamworks_sdk_146/isteamnetworkingsockets.h"
#include "steamworks_sdk_146/isteamnetworkingutils.h"
#include "steamworks_sdk_146/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")

extern "C" {
#define SDKVER_146
#include "struct_converters.h"

#define SDK_VERSION 1460
#include "steamclient_manual_common.h"

#include "cppISteamNetworkingSockets_SteamNetworkingSockets004.h"
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params *params )
{
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params *params )
{
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}
