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

struct cppISteamNetworkingSockets_SteamNetworkingSockets002
{
#ifdef __cplusplus
    virtual uint32_t CreateListenSocketIP( const SteamNetworkingIPAddr * ) = 0;
    virtual uint32_t ConnectByIPAddress( const SteamNetworkingIPAddr * ) = 0;
    virtual uint32_t CreateListenSocketP2P( int32_t ) = 0;
    virtual uint32_t ConnectP2P( const SteamNetworkingIdentity *, int32_t ) = 0;
    virtual uint32_t AcceptConnection( uint32_t ) = 0;
    virtual bool CloseConnection( uint32_t, int32_t, const char *, bool ) = 0;
    virtual bool CloseListenSocket( uint32_t ) = 0;
    virtual bool SetConnectionUserData( uint32_t, int64_t ) = 0;
    virtual int64_t GetConnectionUserData( uint32_t ) = 0;
    virtual void SetConnectionName( uint32_t, const char * ) = 0;
    virtual bool GetConnectionName( uint32_t, char *, int32_t ) = 0;
    virtual uint32_t SendMessageToConnection( uint32_t, const void *, uint32_t, int32_t ) = 0;
    virtual uint32_t FlushMessagesOnConnection( uint32_t ) = 0;
    virtual int32_t ReceiveMessagesOnConnection( uint32_t, SteamNetworkingMessage_t **, int32_t ) = 0;
    virtual int32_t ReceiveMessagesOnListenSocket( uint32_t, SteamNetworkingMessage_t **, int32_t ) = 0;
    virtual bool GetConnectionInfo( uint32_t, SteamNetConnectionInfo_t * ) = 0;
    virtual bool GetQuickConnectionStatus( uint32_t, SteamNetworkingQuickConnectionStatus * ) = 0;
    virtual int32_t GetDetailedConnectionStatus( uint32_t, char *, int32_t ) = 0;
    virtual bool GetListenSocketAddress( uint32_t, SteamNetworkingIPAddr * ) = 0;
    virtual bool CreateSocketPair( uint32_t *, uint32_t *, bool, const SteamNetworkingIdentity *, const SteamNetworkingIdentity * ) = 0;
    virtual bool GetIdentity( SteamNetworkingIdentity * ) = 0;
    virtual bool ReceivedRelayAuthTicket( const void *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual int32_t FindRelayAuthTicketForServer( const SteamNetworkingIdentity *, int32_t, SteamDatagramRelayAuthTicket * ) = 0;
    virtual uint32_t ConnectToHostedDedicatedServer( const SteamNetworkingIdentity *, int32_t ) = 0;
    virtual uint16_t GetHostedDedicatedServerPort(  ) = 0;
    virtual uint32_t GetHostedDedicatedServerPOPID(  ) = 0;
    virtual bool GetHostedDedicatedServerAddress( SteamDatagramHostedAddress * ) = 0;
    virtual uint32_t CreateHostedDedicatedServerListenSocket( int32_t ) = 0;
    virtual ~cppISteamNetworkingSockets_SteamNetworkingSockets002(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->CreateListenSocketIP( params->localAddress );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->ConnectByIPAddress( params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->CreateListenSocketP2P( params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->ConnectP2P( params->identityRemote, params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->AcceptConnection( params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->CloseConnection( params->hPeer, params->nReason, params->pszDebug, params->bEnableLinger );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->CloseListenSocket( params->hSocket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->SetConnectionUserData( params->hPeer, params->nUserData );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->GetConnectionUserData( params->hPeer );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    iface->SetConnectionName( params->hPeer, params->pszName );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->GetConnectionName( params->hPeer, params->pszName, params->nMaxLen );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->SendMessageToConnection( params->hConn, params->pData, params->cbData, params->nSendFlags );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->FlushMessagesOnConnection( params->hConn );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->GetConnectionInfo( params->hConn, params->pInfo );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->GetQuickConnectionStatus( params->hConn, params->pStats );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->GetDetailedConnectionStatus( params->hConn, params->pszBuf, params->cbBuf );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->GetListenSocketAddress( params->hSocket, params->address );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->CreateSocketPair( params->pOutConnection1, params->pOutConnection2, params->bUseNetworkLoopback, params->pIdentity1, params->pIdentity2 );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->GetIdentity( params->pIdentity );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->ReceivedRelayAuthTicket( params->pvTicket, params->cbTicket, params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->FindRelayAuthTicketForServer( params->identityGameServer, params->nVirtualPort, params->pOutParsedTicket );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->ConnectToHostedDedicatedServer( params->identityTarget, params->nVirtualPort );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPort(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerPOPID(  );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->GetHostedDedicatedServerAddress( params->pRouting );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket_params *params )
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *iface = (struct cppISteamNetworkingSockets_SteamNetworkingSockets002 *)params->linux_side;
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nVirtualPort );
}

#ifdef __cplusplus
}
#endif
