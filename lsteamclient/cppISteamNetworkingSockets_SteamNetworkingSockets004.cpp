#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_146/steam_api.h"
#include "steamworks_sdk_146/steamnetworkingtypes.h"
#include "steamworks_sdk_146/isteamnetworkingsockets.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_146
#include "struct_converters.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets004.h"
void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateListenSocketIP( (const SteamNetworkingIPAddr *)params->localAddress );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ConnectByIPAddress( (const SteamNetworkingIPAddr *)params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateListenSocketP2P( (int)params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ConnectP2P( (const SteamNetworkingIdentity *)params->identityRemote, (int)params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->AcceptConnection( (HSteamNetConnection)params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CloseConnection( (HSteamNetConnection)params->hPeer, (int)params->nReason, (const char *)params->pszDebug, (bool)params->bEnableLinger );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CloseListenSocket( (HSteamListenSocket)params->hSocket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->SetConnectionUserData( (HSteamNetConnection)params->hPeer, (int64)params->nUserData );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetConnectionUserData( (HSteamNetConnection)params->hPeer );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName_params *params )
{
    ((ISteamNetworkingSockets*)params->linux_side)->SetConnectionName( (HSteamNetConnection)params->hPeer, (const char *)params->pszName );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetConnectionName( (HSteamNetConnection)params->hPeer, (char *)params->pszName, (int)params->nMaxLen );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->SendMessageToConnection( (HSteamNetConnection)params->hConn, (const void *)params->pData, (uint32)params->cbData, (int)params->nSendFlags );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->FlushMessagesOnConnection( (HSteamNetConnection)params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetConnectionInfo( (HSteamNetConnection)params->hConn, (SteamNetConnectionInfo_t *)params->pInfo );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetQuickConnectionStatus( (HSteamNetConnection)params->hConn, (SteamNetworkingQuickConnectionStatus *)params->pStats );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetDetailedConnectionStatus( (HSteamNetConnection)params->hConn, (char *)params->pszBuf, (int)params->cbBuf );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetListenSocketAddress( (HSteamListenSocket)params->hSocket, (SteamNetworkingIPAddr *)params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateSocketPair( (HSteamNetConnection *)params->pOutConnection1, (HSteamNetConnection *)params->pOutConnection2, (bool)params->bUseNetworkLoopback, (const SteamNetworkingIdentity *)params->pIdentity1, (const SteamNetworkingIdentity *)params->pIdentity2 );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetIdentity( (SteamNetworkingIdentity *)params->pIdentity );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->InitAuthentication(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetAuthenticationStatus( (SteamNetAuthenticationStatus_t *)params->pDetails );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ReceivedRelayAuthTicket( (const void *)params->pvTicket, (int)params->cbTicket, (SteamDatagramRelayAuthTicket *)params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->FindRelayAuthTicketForServer( (const SteamNetworkingIdentity *)params->identityGameServer, (int)params->nVirtualPort, (SteamDatagramRelayAuthTicket *)params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ConnectToHostedDedicatedServer( (const SteamNetworkingIdentity *)params->identityTarget, (int)params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetHostedDedicatedServerPort(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetHostedDedicatedServerPOPID(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetHostedDedicatedServerAddress( (SteamDatagramHostedAddress *)params->pRouting );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateHostedDedicatedServerListenSocket( (int)params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin( struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetGameCoordinatorServerLogin( (SteamDatagramGameCoordinatorServerLogin *)params->pLoginInfo, (int *)params->pcbSignedBlob, (void *)params->pBlob );
}

#ifdef __cplusplus
}
#endif
