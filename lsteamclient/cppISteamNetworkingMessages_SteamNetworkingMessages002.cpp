/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser( void *args )
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser_params *params = (struct ISteamNetworkingMessages_SteamNetworkingMessages002_SendMessageToUser_params *)args;
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->SendMessageToUser( params->identityRemote, params->pubData, params->cubData, params->nSendFlags, params->nRemoteChannel );
    return 0;
}

NTSTATUS ISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser( void *args )
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser_params *params = (struct ISteamNetworkingMessages_SteamNetworkingMessages002_AcceptSessionWithUser_params *)args;
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->AcceptSessionWithUser( params->identityRemote );
    return 0;
}

NTSTATUS ISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser( void *args )
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser_params *params = (struct ISteamNetworkingMessages_SteamNetworkingMessages002_CloseSessionWithUser_params *)args;
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->CloseSessionWithUser( params->identityRemote );
    return 0;
}

NTSTATUS ISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser( void *args )
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser_params *params = (struct ISteamNetworkingMessages_SteamNetworkingMessages002_CloseChannelWithUser_params *)args;
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->CloseChannelWithUser( params->identityRemote, params->nLocalChannel );
    return 0;
}

NTSTATUS ISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo( void *args )
{
    struct ISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo_params *params = (struct ISteamNetworkingMessages_SteamNetworkingMessages002_GetSessionConnectionInfo_params *)args;
    struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *iface = (struct u_ISteamNetworkingMessages_SteamNetworkingMessages002 *)params->linux_side;
    params->_ret = iface->GetSessionConnectionInfo( params->identityRemote, params->pConnectionInfo, params->pQuickStatus );
    return 0;
}

