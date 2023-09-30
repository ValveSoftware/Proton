/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworkingMessages_SteamNetworkingMessages002.h"

void cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser_params *params )
{
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->SendMessageToUser( params->identityRemote, params->pubData, params->cubData, params->nSendFlags, params->nRemoteChannel );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser_params *params )
{
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->AcceptSessionWithUser( params->identityRemote );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser_params *params )
{
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->CloseSessionWithUser( params->identityRemote );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser_params *params )
{
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->CloseChannelWithUser( params->identityRemote, params->nLocalChannel );
}

void cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo( struct cppISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo_params *params )
{
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->GetSessionConnectionInfo( params->identityRemote, params->pConnectionInfo, params->pQuickStatus );
}

