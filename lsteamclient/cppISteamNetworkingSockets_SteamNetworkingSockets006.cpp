#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#include "steamworks_sdk_147/isteamnetworkingsockets.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets006.h"
void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateListenSocketIP( (const SteamNetworkingIPAddr *)params->localAddress, (int)params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ConnectByIPAddress( (const SteamNetworkingIPAddr *)params->address, (int)params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateListenSocketP2P( (int)params->nVirtualPort, (int)params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ConnectP2P( (const SteamNetworkingIdentity *)params->identityRemote, (int)params->nVirtualPort, (int)params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->AcceptConnection( (HSteamNetConnection)params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CloseConnection( (HSteamNetConnection)params->hPeer, (int)params->nReason, (const char *)params->pszDebug, (bool)params->bEnableLinger );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CloseListenSocket( (HSteamListenSocket)params->hSocket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->SetConnectionUserData( (HSteamNetConnection)params->hPeer, (int64)params->nUserData );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetConnectionUserData( (HSteamNetConnection)params->hPeer );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName_params *params )
{
    ((ISteamNetworkingSockets*)params->linux_side)->SetConnectionName( (HSteamNetConnection)params->hPeer, (const char *)params->pszName );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetConnectionName( (HSteamNetConnection)params->hPeer, (char *)params->pszName, (int)params->nMaxLen );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->SendMessageToConnection( (HSteamNetConnection)params->hConn, (const void *)params->pData, (uint32)params->cbData, (int)params->nSendFlags, (int64 *)params->pOutMessageNumber );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->FlushMessagesOnConnection( (HSteamNetConnection)params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetConnectionInfo( (HSteamNetConnection)params->hConn, (SteamNetConnectionInfo_t *)params->pInfo );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetQuickConnectionStatus( (HSteamNetConnection)params->hConn, (SteamNetworkingQuickConnectionStatus *)params->pStats );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetDetailedConnectionStatus( (HSteamNetConnection)params->hConn, (char *)params->pszBuf, (int)params->cbBuf );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetListenSocketAddress( (HSteamListenSocket)params->hSocket, (SteamNetworkingIPAddr *)params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateSocketPair( (HSteamNetConnection *)params->pOutConnection1, (HSteamNetConnection *)params->pOutConnection2, (bool)params->bUseNetworkLoopback, (const SteamNetworkingIdentity *)params->pIdentity1, (const SteamNetworkingIdentity *)params->pIdentity2 );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetIdentity( (SteamNetworkingIdentity *)params->pIdentity );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->InitAuthentication(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetAuthenticationStatus( (SteamNetAuthenticationStatus_t *)params->pDetails );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ReceivedRelayAuthTicket( (const void *)params->pvTicket, (int)params->cbTicket, (SteamDatagramRelayAuthTicket *)params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->FindRelayAuthTicketForServer( (const SteamNetworkingIdentity *)params->identityGameServer, (int)params->nVirtualPort, (SteamDatagramRelayAuthTicket *)params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ConnectToHostedDedicatedServer( (const SteamNetworkingIdentity *)params->identityTarget, (int)params->nVirtualPort, (int)params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetHostedDedicatedServerPort(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetHostedDedicatedServerPOPID(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetHostedDedicatedServerAddress( (SteamDatagramHostedAddress *)params->pRouting );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateHostedDedicatedServerListenSocket( (int)params->nVirtualPort, (int)params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetGameCoordinatorServerLogin( (SteamDatagramGameCoordinatorServerLogin *)params->pLoginInfo, (int *)params->pcbSignedBlob, (void *)params->pBlob );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ConnectP2PCustomSignaling( (ISteamNetworkingConnectionCustomSignaling *)params->pSignaling, (const SteamNetworkingIdentity *)params->pPeerIdentity, (int)params->nOptions, (const SteamNetworkingConfigValue_t *)params->pOptions );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ReceivedP2PCustomSignal( (const void *)params->pMsg, (int)params->cbMsg, (ISteamNetworkingCustomSignalingRecvContext *)params->pContext );
}

#ifdef __cplusplus
}
#endif
