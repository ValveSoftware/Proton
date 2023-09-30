/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( params->localAddress, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( params->address, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nLocalVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->ConnectP2P( params->identityRemote, params->nRemoteVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, params->pszName );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags, params->pOutMessageNumber );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetConnectionRealTimeStatus( params->hConn, params->pStatus, params->nLanes, params->pLanes );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pIdentity1, params->pIdentity2 );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->ConfigureConnectionLanes( params->hConn, params->nNumLanes, params->pLanePriorities, params->pLaneWeights );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetIdentity( params->pIdentity );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->InitAuthentication(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetAuthenticationStatus( params->pDetails );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->CreatePollGroup(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->DestroyPollGroup( params->hPollGroup );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->SetConnectionPollGroup( params->hConn, params->hPollGroup );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nRemoteVirtualPort, params->pOutParsedTicket );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( params->identityTarget, params->nRemoteVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nLocalVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetGameCoordinatorServerLogin( params->pLoginInfo, params->pcbSignedBlob, params->pBlob );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->ConnectP2PCustomSignaling( params->pSignaling, params->pPeerIdentity, params->nRemoteVirtualPort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, params->pContext );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetCertificateRequest( params->pcbBlob, params->pBlob, params->errMsg );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->SetCertificate( params->pCertificate, params->cbCertificate, params->errMsg );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    iface->ResetIdentity( params->pIdentity );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    iface->RunCallbacks(  );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->BeginAsyncRequestFakeIP( params->nNumPorts );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    iface->GetFakeIP( params->idxFirstPort, params->pInfo );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2PFakeIP( params->idxFakePort, params->nOptions, params->pOptions );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->GetRemoteFakeIPForConnection( params->hConn, params->pOutAddr );
    return 0;
}

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets012 *)params->linux_side;
    params->_ret = iface->CreateFakeUDPPort( params->idxFakeServerPort );
    return 0;
}

