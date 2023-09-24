#include "steamclient_private.h"

extern "C"
{
#define SDK_VERSION 1440
#include "steamclient_manual_common.h"
}

#pragma push_macro("__cdecl")
#undef __cdecl
#pragma push_macro("strncpy")
#undef strncpy
#include "cppISteamNetworkingSockets_SteamNetworkingSockets002.hpp"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}
