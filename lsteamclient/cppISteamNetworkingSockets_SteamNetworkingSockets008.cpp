#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_148a/steam_api.h"
#include "steamworks_sdk_148a/steamnetworkingtypes.h"
#include "steamworks_sdk_148a/isteamnetworkingsockets.h"
#include "steamworks_sdk_148a/isteamnetworkingutils.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_148a
#include "struct_converters.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets008.h"

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP( void *linux_side, const SteamNetworkingIPAddr * localAddress, int nOptions, const SteamNetworkingConfigValue_t * pOptions )
{
	return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketIP( (const SteamNetworkingIPAddr) *localAddress,nOptions,pOptions );
}
HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress( void *linux_side, const SteamNetworkingIPAddr * address, int nOptions, const SteamNetworkingConfigValue_t * pOptions )
{
	return ((ISteamNetworkingSockets*)linux_side)->ConnectByIPAddress( (const SteamNetworkingIPAddr) *address,nOptions,pOptions );
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P( void *linux_side, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions )
{
	return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketP2P( nVirtualPort,nOptions,pOptions );
}
HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P( void *linux_side, const SteamNetworkingIdentity * identityRemote, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions )
{
	return ((ISteamNetworkingSockets*)linux_side)->ConnectP2P( *identityRemote,nVirtualPort,nOptions,pOptions );
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection( void *linux_side, HSteamNetConnection hConn )
{
	return ((ISteamNetworkingSockets*)linux_side)->AcceptConnection( hConn );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection( void *linux_side, HSteamNetConnection hPeer, int nReason, const char * pszDebug, bool bEnableLinger )
{
	return ((ISteamNetworkingSockets*)linux_side)->CloseConnection( hPeer,nReason,pszDebug,bEnableLinger );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket( void *linux_side, HSteamListenSocket hSocket )
{
	return ((ISteamNetworkingSockets*)linux_side)->CloseListenSocket( hSocket );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData( void *linux_side, HSteamNetConnection hPeer, int64 nUserData )
{
	return ((ISteamNetworkingSockets*)linux_side)->SetConnectionUserData( hPeer,nUserData );
}
int64 cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData( void *linux_side, HSteamNetConnection hPeer )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetConnectionUserData( hPeer );
}
void cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName( void *linux_side, HSteamNetConnection hPeer, const char * pszName )
{
	((ISteamNetworkingSockets*)linux_side)->SetConnectionName( hPeer,pszName );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName( void *linux_side, HSteamNetConnection hPeer, char * pszName, int nMaxLen )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetConnectionName( hPeer,pszName,nMaxLen );
}
EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection( void *linux_side, HSteamNetConnection hConn, const void * pData, uint32 cbData, int nSendFlags, int64 * pOutMessageNumber )
{
	return ((ISteamNetworkingSockets*)linux_side)->SendMessageToConnection( hConn,pData,cbData,nSendFlags,pOutMessageNumber );
}
// steamclient_manual_148.cpp
// void cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( void *linux_side, int nMessages, winSteamNetworkingMessage_t_148a *const * pMessages, int64 * pOutMessageNumberOrResult )
// {
// 	((ISteamNetworkingSockets*)linux_side)->SendMessages( nMessages,(SteamNetworkingMessage_t *const *) pMessages,pOutMessageNumberOrResult );
// }
EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection( void *linux_side, HSteamNetConnection hConn )
{
	return ((ISteamNetworkingSockets*)linux_side)->FlushMessagesOnConnection( hConn );
}
// steamclient_manual_148.cpp
// int cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( void *linux_side, HSteamNetConnection hConn, winSteamNetworkingMessage_t_148a ** ppOutMessages, int nMaxMessages )
// {
// 	return ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnConnection( hConn, (SteamNetworkingMessage_t **) ppOutMessages,nMaxMessages );
// }
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo( void *linux_side, HSteamNetConnection hConn, SteamNetConnectionInfo_t * pInfo )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetConnectionInfo( hConn,pInfo );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus( void *linux_side, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus * pStats )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetQuickConnectionStatus( hConn,pStats );
}
int cppISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus( void *linux_side, HSteamNetConnection hConn, char * pszBuf, int cbBuf )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetDetailedConnectionStatus( hConn,pszBuf,cbBuf );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress( void *linux_side, HSteamListenSocket hSocket, SteamNetworkingIPAddr * address )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetListenSocketAddress( hSocket,address );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair( void *linux_side, HSteamNetConnection * pOutConnection1, HSteamNetConnection * pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity * pIdentity1, const SteamNetworkingIdentity * pIdentity2 )
{
	return ((ISteamNetworkingSockets*)linux_side)->CreateSocketPair( pOutConnection1,pOutConnection2,bUseNetworkLoopback,pIdentity1,pIdentity2 );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity( void *linux_side, SteamNetworkingIdentity * pIdentity )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetIdentity( pIdentity );
}
ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication( void *linux_side )
{
	return ((ISteamNetworkingSockets*)linux_side)->InitAuthentication(  );
}
ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus( void *linux_side, SteamNetAuthenticationStatus_t * pDetails )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetAuthenticationStatus( pDetails );
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket( void *linux_side, const void * pvTicket, int cbTicket, SteamDatagramRelayAuthTicket * pOutParsedTicket )
{
	return ((ISteamNetworkingSockets*)linux_side)->ReceivedRelayAuthTicket( pvTicket,cbTicket,pOutParsedTicket );
}
int cppISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer( void *linux_side, const SteamNetworkingIdentity * identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket * pOutParsedTicket )
{
	return ((ISteamNetworkingSockets*)linux_side)->FindRelayAuthTicketForServer( *identityGameServer,nVirtualPort,pOutParsedTicket );
}
HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer( void *linux_side, const SteamNetworkingIdentity * identityTarget, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions )
{
	return ((ISteamNetworkingSockets*)linux_side)->ConnectToHostedDedicatedServer( *identityTarget,nVirtualPort,nOptions,pOptions );
}
uint16 cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort( void *linux_side )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPort(  );
}
SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID( void *linux_side )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPOPID(  );
}
EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress( void *linux_side, SteamDatagramHostedAddress * pRouting )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerAddress( pRouting );
}
HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket( void *linux_side, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions )
{
	return ((ISteamNetworkingSockets*)linux_side)->CreateHostedDedicatedServerListenSocket( nVirtualPort,nOptions,pOptions );
}
EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin( void *linux_side, SteamDatagramGameCoordinatorServerLogin * pLoginInfo, int * pcbSignedBlob, void * pBlob )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetGameCoordinatorServerLogin( pLoginInfo,pcbSignedBlob,pBlob );
}
HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling( void *linux_side, ISteamNetworkingConnectionCustomSignaling * pSignaling, const SteamNetworkingIdentity * pPeerIdentity, int nOptions, const SteamNetworkingConfigValue_t * pOptions )
{
	return ((ISteamNetworkingSockets*)linux_side)->ConnectP2PCustomSignaling( pSignaling,pPeerIdentity,nOptions,pOptions );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal( void *linux_side, const void * pMsg, int cbMsg, ISteamNetworkingCustomSignalingRecvContext * pContext )
{
	return ((ISteamNetworkingSockets*)linux_side)->ReceivedP2PCustomSignal( pMsg,cbMsg,pContext );
}

// New methods
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest( void *linux_side, int * pcbBlob, void * pBlob, SteamNetworkingErrMsg * errMsg )
{
	return ((ISteamNetworkingSockets*)linux_side)->GetCertificateRequest( pcbBlob,pBlob,*errMsg );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate( void *linux_side, const void * pCertificate, int cbCertificate, SteamNetworkingErrMsg * errMsg )
{
	return ((ISteamNetworkingSockets*)linux_side)->SetCertificate( pCertificate,cbCertificate,*errMsg );
}
HSteamNetPollGroup cppISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup( void *linux_side )
{
	return ((ISteamNetworkingSockets*)linux_side)->CreatePollGroup(  );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup( void *linux_side, HSteamNetPollGroup hPollGroup )
{
	return ((ISteamNetworkingSockets*)linux_side)->DestroyPollGroup( hPollGroup );
}
bool cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup( void *linux_side, HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup )
{
	return ((ISteamNetworkingSockets*)linux_side)->SetConnectionPollGroup( hConn,hPollGroup );
}

// @todo define in steamclient_manual_148.cpp
// int cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( void *linux_side, HSteamNetPollGroup hPollGroup, winSteamNetworkingMessage_t_148a ** ppOutMessages, int nMaxMessages )
// {
// 	return ((ISteamNetworkingSockets*)linux_side)->ReceiveMessagesOnPollGroup( hPollGroup,(SteamNetworkingMessage_t **)ppOutMessages,nMaxMessages );
// }

#ifdef __cplusplus
}
#endif
