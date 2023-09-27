#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_144/steam_api.h"
#include "steamworks_sdk_144/steamnetworkingtypes.h"
#include "steamworks_sdk_144/isteamnetworkingsockets.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_144
#include "struct_converters.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets002.h"
void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateListenSocketIP( (const SteamNetworkingIPAddr *)params->localAddress );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ConnectByIPAddress( (const SteamNetworkingIPAddr *)params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateListenSocketP2P( (int)params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ConnectP2P( (const SteamNetworkingIdentity *)params->identityRemote, (int)params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->AcceptConnection( (HSteamNetConnection)params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CloseConnection( (HSteamNetConnection)params->hPeer, (int)params->nReason, (const char *)params->pszDebug, (bool)params->bEnableLinger );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CloseListenSocket( (HSteamListenSocket)params->hSocket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->SetConnectionUserData( (HSteamNetConnection)params->hPeer, (int64)params->nUserData );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetConnectionUserData( (HSteamNetConnection)params->hPeer );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName_params *params )
{
    ((ISteamNetworkingSockets*)params->linux_side)->SetConnectionName( (HSteamNetConnection)params->hPeer, (const char *)params->pszName );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetConnectionName( (HSteamNetConnection)params->hPeer, (char *)params->pszName, (int)params->nMaxLen );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->SendMessageToConnection( (HSteamNetConnection)params->hConn, (const void *)params->pData, (uint32)params->cbData, (int)params->nSendFlags );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->FlushMessagesOnConnection( (HSteamNetConnection)params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetConnectionInfo( (HSteamNetConnection)params->hConn, (SteamNetConnectionInfo_t *)params->pInfo );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetQuickConnectionStatus( (HSteamNetConnection)params->hConn, (SteamNetworkingQuickConnectionStatus *)params->pStats );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetDetailedConnectionStatus( (HSteamNetConnection)params->hConn, (char *)params->pszBuf, (int)params->cbBuf );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetListenSocketAddress( (HSteamListenSocket)params->hSocket, (SteamNetworkingIPAddr *)params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateSocketPair( (HSteamNetConnection *)params->pOutConnection1, (HSteamNetConnection *)params->pOutConnection2, (bool)params->bUseNetworkLoopback, (const SteamNetworkingIdentity *)params->pIdentity1, (const SteamNetworkingIdentity *)params->pIdentity2 );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetIdentity( (SteamNetworkingIdentity *)params->pIdentity );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ReceivedRelayAuthTicket( (const void *)params->pvTicket, (int)params->cbTicket, (SteamDatagramRelayAuthTicket *)params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->FindRelayAuthTicketForServer( (const SteamNetworkingIdentity *)params->identityGameServer, (int)params->nVirtualPort, (SteamDatagramRelayAuthTicket *)params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->ConnectToHostedDedicatedServer( (const SteamNetworkingIdentity *)params->identityTarget, (int)params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetHostedDedicatedServerPort(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetHostedDedicatedServerPOPID(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->GetHostedDedicatedServerAddress( (SteamDatagramHostedAddress *)params->pRouting );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket_params *params )
{
    params->_ret = ((ISteamNetworkingSockets*)params->linux_side)->CreateHostedDedicatedServerListenSocket( (int)params->nVirtualPort );
}

#ifdef __cplusplus
}
#endif
