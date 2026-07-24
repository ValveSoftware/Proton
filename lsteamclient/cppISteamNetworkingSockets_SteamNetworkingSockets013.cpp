/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_AcceptConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_AcceptConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_AcceptConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->AcceptConnection( params->hConn );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_AcceptConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_AcceptConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_AcceptConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->AcceptConnection( params->hConn );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_CloseConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_CloseConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_CloseConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CloseConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CloseConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CloseConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_CloseListenSocket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_CloseListenSocket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_CloseListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->CloseListenSocket( params->hSocket );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CloseListenSocket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CloseListenSocket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CloseListenSocket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->CloseListenSocket( params->hSocket );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionUserData( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionUserData_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionUserData( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionUserData_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionUserData( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionUserData_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionUserData_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    iface->SetConnectionName( params->hPeer, params->pszName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionName( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionName_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    iface->SetConnectionName( params->hPeer, params->pszName );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionName( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionName_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionName( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionName_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionName_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_SendMessageToConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_SendMessageToConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_SendMessageToConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags, params->pOutMessageNumber );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SendMessageToConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SendMessageToConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SendMessageToConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags, params->pOutMessageNumber );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_FlushMessagesOnConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_FlushMessagesOnConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_FlushMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_FlushMessagesOnConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_FlushMessagesOnConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_FlushMessagesOnConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionInfo( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionInfo_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionInfo_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionInfo( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionInfo_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionInfo_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionRealTimeStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionRealTimeStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionRealTimeStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetConnectionRealTimeStatus( params->hConn, params->pStatus, params->nLanes, params->pLanes );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionRealTimeStatus( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionRealTimeStatus_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetConnectionRealTimeStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetConnectionRealTimeStatus( params->hConn, params->pStatus, params->nLanes, params->pLanes );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetDetailedConnectionStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetDetailedConnectionStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetDetailedConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetDetailedConnectionStatus( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetDetailedConnectionStatus_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetDetailedConnectionStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetListenSocketAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetListenSocketAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetListenSocketAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetListenSocketAddress( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetListenSocketAddress_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetListenSocketAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_CreateSocketPair( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_CreateSocketPair_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_CreateSocketPair_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pPeerIdentity1, params->pPeerIdentity2 );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CreateSocketPair( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CreateSocketPair_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CreateSocketPair_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pPeerIdentity1, params->pPeerIdentity2 );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_ConfigureConnectionLanes( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_ConfigureConnectionLanes_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_ConfigureConnectionLanes_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->ConfigureConnectionLanes( params->hConn, params->nNumLanes, params->pLanePriorities, params->pLaneWeights );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ConfigureConnectionLanes( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ConfigureConnectionLanes_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ConfigureConnectionLanes_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->ConfigureConnectionLanes( params->hConn, params->nNumLanes, params->pLanePriorities, params->pLaneWeights );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetIdentity( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetIdentity_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetIdentity( params->pIdentity );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetIdentity( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetIdentity_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetIdentity( params->pIdentity );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_InitAuthentication( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_InitAuthentication_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_InitAuthentication_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->InitAuthentication(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_InitAuthentication( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_InitAuthentication_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_InitAuthentication_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->InitAuthentication(  );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetAuthenticationStatus( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetAuthenticationStatus_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetAuthenticationStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetAuthenticationStatus( params->pDetails );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetAuthenticationStatus( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetAuthenticationStatus_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetAuthenticationStatus_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetAuthenticationStatus( params->pDetails );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_CreatePollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_CreatePollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_CreatePollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->CreatePollGroup(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CreatePollGroup( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CreatePollGroup_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CreatePollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->CreatePollGroup(  );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_DestroyPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_DestroyPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_DestroyPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->DestroyPollGroup( params->hPollGroup );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_DestroyPollGroup( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_DestroyPollGroup_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_DestroyPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->DestroyPollGroup( params->hPollGroup );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionPollGroup( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionPollGroup_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->SetConnectionPollGroup( params->hConn, params->hPollGroup );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionPollGroup( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionPollGroup_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetConnectionPollGroup_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->SetConnectionPollGroup( params->hConn, params->hPollGroup );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedRelayAuthTicket( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedRelayAuthTicket_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedRelayAuthTicket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedRelayAuthTicket( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedRelayAuthTicket_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedRelayAuthTicket_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_FindRelayAuthTicketForServer( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_FindRelayAuthTicketForServer_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_FindRelayAuthTicketForServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nRemoteVirtualPort, params->pOutParsedTicket );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_FindRelayAuthTicketForServer( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_FindRelayAuthTicketForServer_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_FindRelayAuthTicketForServer_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nRemoteVirtualPort, params->pOutParsedTicket );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPort( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPort_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPort( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPort_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPOPID( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPOPID_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPOPID_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPOPID( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPOPID_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerPOPID_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerAddress( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerAddress_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerAddress( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerAddress_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetHostedDedicatedServerAddress_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetGameCoordinatorServerLogin( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetGameCoordinatorServerLogin_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetGameCoordinatorServerLogin_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetGameCoordinatorServerLogin( params->pLoginInfo, params->pcbSignedBlob, params->pBlob );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetGameCoordinatorServerLogin( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetGameCoordinatorServerLogin_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetGameCoordinatorServerLogin_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetGameCoordinatorServerLogin( params->pLoginInfo, params->pcbSignedBlob, params->pBlob );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedP2PCustomSignal( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedP2PCustomSignal_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, params->pContext );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedP2PCustomSignal( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedP2PCustomSignal_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ReceivedP2PCustomSignal_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, params->pContext );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetCertificateRequest( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetCertificateRequest_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetCertificateRequest_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetCertificateRequest( params->pcbBlob, params->pBlob, params->errMsg );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetCertificateRequest( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetCertificateRequest_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetCertificateRequest_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetCertificateRequest( params->pcbBlob, params->pBlob, params->errMsg );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_SetCertificate( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_SetCertificate_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_SetCertificate_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->SetCertificate( params->pCertificate, params->cbCertificate, params->errMsg );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetCertificate( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetCertificate_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_SetCertificate_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->SetCertificate( params->pCertificate, params->cbCertificate, params->errMsg );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_ResetIdentity( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_ResetIdentity_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_ResetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    iface->ResetIdentity( params->pIdentity );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ResetIdentity( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ResetIdentity_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_ResetIdentity_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    iface->ResetIdentity( params->pIdentity );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_RunCallbacks( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_RunCallbacks_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_RunCallbacks_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    iface->RunCallbacks(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_RunCallbacks( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_RunCallbacks_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_RunCallbacks_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    iface->RunCallbacks(  );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_BeginAsyncRequestFakeIP( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_BeginAsyncRequestFakeIP_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_BeginAsyncRequestFakeIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->BeginAsyncRequestFakeIP( params->nNumPorts );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_BeginAsyncRequestFakeIP( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_BeginAsyncRequestFakeIP_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_BeginAsyncRequestFakeIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->BeginAsyncRequestFakeIP( params->nNumPorts );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetFakeIP( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetFakeIP_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetFakeIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    iface->GetFakeIP( params->idxFirstPort, params->pInfo );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetFakeIP( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetFakeIP_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetFakeIP_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    iface->GetFakeIP( params->idxFirstPort, params->pInfo );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_GetRemoteFakeIPForConnection( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetRemoteFakeIPForConnection_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_GetRemoteFakeIPForConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetRemoteFakeIPForConnection( params->hConn, params->pOutAddr );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetRemoteFakeIPForConnection( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetRemoteFakeIPForConnection_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_GetRemoteFakeIPForConnection_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->GetRemoteFakeIPForConnection( params->hConn, params->pOutAddr );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSockets_SteamNetworkingSockets013_CreateFakeUDPPort( void *args )
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets013_CreateFakeUDPPort_params *params = (struct ISteamNetworkingSockets_SteamNetworkingSockets013_CreateFakeUDPPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->CreateFakeUDPPort( params->idxFakeServerPort );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CreateFakeUDPPort( void *args )
{
    struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CreateFakeUDPPort_params *params = (struct wow64_ISteamNetworkingSockets_SteamNetworkingSockets013_CreateFakeUDPPort_params *)args;
    struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *iface = (struct u_ISteamNetworkingSockets_SteamNetworkingSockets013 *)params->u_iface;
    params->_ret = iface->CreateFakeUDPPort( params->idxFakeServerPort );
    return 0;
}
#endif

