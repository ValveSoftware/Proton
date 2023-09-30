/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( params->localAddress );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( params->address );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nVirtualPort );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->ConnectP2P( params->identityRemote, params->nVirtualPort );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, params->pszName );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetQuickConnectionStatus( params->hConn, params->pStats );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pIdentity1, params->pIdentity2 );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetIdentity( params->pIdentity );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->InitAuthentication(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetAuthenticationStatus( params->pDetails );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nVirtualPort, params->pOutParsedTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( params->identityTarget, params->nVirtualPort );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nVirtualPort );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetGameCoordinatorServerLogin( params->pLoginInfo, params->pcbSignedBlob, params->pBlob );
    return 0;
}

