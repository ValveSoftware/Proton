/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets006.h"

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( params->localAddress, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( params->address, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nVirtualPort, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ConnectP2P( params->identityRemote, params->nVirtualPort, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, params->pszName );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags, params->pOutMessageNumber );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetQuickConnectionStatus( params->hConn, params->pStats );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pIdentity1, params->pIdentity2 );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetIdentity( params->pIdentity );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->InitAuthentication(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetAuthenticationStatus( params->pDetails );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nVirtualPort, params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( params->identityTarget, params->nVirtualPort, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nVirtualPort, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    params->_ret = iface->GetGameCoordinatorServerLogin( params->pLoginInfo, params->pcbSignedBlob, params->pBlob );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_ISteamNetworkingConnectionCustomSignaling *u_pSignaling = create_LinuxISteamNetworkingConnectionCustomSignaling( params->pSignaling, "ISteamNetworkingSockets_SteamNetworkingSockets006" );
    params->_ret = iface->ConnectP2PCustomSignaling( u_pSignaling, params->pPeerIdentity, params->nOptions, params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params *params )
{
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets006 *)params->linux_side;
    u_ISteamNetworkingCustomSignalingRecvContext *u_pContext = create_LinuxISteamNetworkingCustomSignalingRecvContext( params->pContext, "ISteamNetworkingSockets_SteamNetworkingSockets006" );
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, u_pContext );
}

