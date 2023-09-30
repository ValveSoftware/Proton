/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets004.h"

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( params->localAddress );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->ConnectP2P( params->identityRemote, params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, params->pszName );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetQuickConnectionStatus( params->hConn, params->pStats );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pIdentity1, params->pIdentity2 );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetIdentity( params->pIdentity );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->InitAuthentication(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetAuthenticationStatus( params->pDetails );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nVirtualPort, params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( params->identityTarget, params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets004 *)params->linux_side;
    params->_ret = iface->GetGameCoordinatorServerLogin( params->pLoginInfo, params->pcbSignedBlob, params->pBlob );
}

