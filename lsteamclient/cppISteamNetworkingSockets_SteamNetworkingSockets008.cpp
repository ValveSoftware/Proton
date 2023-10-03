/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( params->localAddress, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( params->address, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->ConnectP2P( params->identityRemote, params->nVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, params->pszName );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags, params->pOutMessageNumber );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetQuickConnectionStatus( params->hConn, params->pStats );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pIdentity1, params->pIdentity2 );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetIdentity( params->pIdentity );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->InitAuthentication(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetAuthenticationStatus( params->pDetails );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->CreatePollGroup(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->DestroyPollGroup( params->hPollGroup );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->SetConnectionPollGroup( params->hConn, params->hPollGroup );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nVirtualPort, params->pOutParsedTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( params->identityTarget, params->nVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetGameCoordinatorServerLogin( params->pLoginInfo, params->pcbSignedBlob, params->pBlob );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->GetCertificateRequest( params->pcbBlob, params->pBlob, params->errMsg );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets008 *)params->linux_side;
    params->_ret = iface->SetCertificate( params->pCertificate, params->cbCertificate, params->errMsg );
    return 0;
}

