#include "unix_private.h"

extern "C"
{
#define SDK_VERSION 1440
#include "steamclient_manual_common.h"
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets002.hpp"

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, u_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    u_SteamNetworkingMessage_t_144 *u_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, u_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}
