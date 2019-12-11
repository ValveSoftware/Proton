#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
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
HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP(void *linux_side, const SteamNetworkingIPAddr * localAddress, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketIP((const SteamNetworkingIPAddr *)localAddress, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress(void *linux_side, const SteamNetworkingIPAddr * address, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectByIPAddress((const SteamNetworkingIPAddr *)address, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P(void *linux_side, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketP2P((int)nVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P(void *linux_side, const SteamNetworkingIdentity * identityRemote, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectP2P((const SteamNetworkingIdentity *)identityRemote, (int)nVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection(void *linux_side, HSteamNetConnection hConn)
{
    return ((ISteamNetworkingSockets*)linux_side)->AcceptConnection((HSteamNetConnection)hConn);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection(void *linux_side, HSteamNetConnection hPeer, int nReason, const char * pszDebug, bool bEnableLinger)
{
    return ((ISteamNetworkingSockets*)linux_side)->CloseConnection((HSteamNetConnection)hPeer, (int)nReason, (const char *)pszDebug, (bool)bEnableLinger);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket(void *linux_side, HSteamListenSocket hSocket)
{
    return ((ISteamNetworkingSockets*)linux_side)->CloseListenSocket((HSteamListenSocket)hSocket);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData(void *linux_side, HSteamNetConnection hPeer, int64 nUserData)
{
    return ((ISteamNetworkingSockets*)linux_side)->SetConnectionUserData((HSteamNetConnection)hPeer, (int64)nUserData);
}

int64 cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData(void *linux_side, HSteamNetConnection hPeer)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionUserData((HSteamNetConnection)hPeer);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName(void *linux_side, HSteamNetConnection hPeer, const char * pszName)
{
    ((ISteamNetworkingSockets*)linux_side)->SetConnectionName((HSteamNetConnection)hPeer, (const char *)pszName);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName(void *linux_side, HSteamNetConnection hPeer, char * pszName, int nMaxLen)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionName((HSteamNetConnection)hPeer, (char *)pszName, (int)nMaxLen);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection(void *linux_side, HSteamNetConnection hConn, const void * pData, uint32 cbData, int nSendFlags, int64 * pOutMessageNumber)
{
    return ((ISteamNetworkingSockets*)linux_side)->SendMessageToConnection((HSteamNetConnection)hConn, (const void *)pData, (uint32)cbData, (int)nSendFlags, (int64 *)pOutMessageNumber);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection(void *linux_side, HSteamNetConnection hConn)
{
    return ((ISteamNetworkingSockets*)linux_side)->FlushMessagesOnConnection((HSteamNetConnection)hConn);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo(void *linux_side, HSteamNetConnection hConn, SteamNetConnectionInfo_t * pInfo)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionInfo((HSteamNetConnection)hConn, (SteamNetConnectionInfo_t *)pInfo);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus(void *linux_side, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus * pStats)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetQuickConnectionStatus((HSteamNetConnection)hConn, (SteamNetworkingQuickConnectionStatus *)pStats);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus(void *linux_side, HSteamNetConnection hConn, char * pszBuf, int cbBuf)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetDetailedConnectionStatus((HSteamNetConnection)hConn, (char *)pszBuf, (int)cbBuf);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress(void *linux_side, HSteamListenSocket hSocket, SteamNetworkingIPAddr * address)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetListenSocketAddress((HSteamListenSocket)hSocket, (SteamNetworkingIPAddr *)address);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair(void *linux_side, HSteamNetConnection * pOutConnection1, HSteamNetConnection * pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity * pIdentity1, const SteamNetworkingIdentity * pIdentity2)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateSocketPair((HSteamNetConnection *)pOutConnection1, (HSteamNetConnection *)pOutConnection2, (bool)bUseNetworkLoopback, (const SteamNetworkingIdentity *)pIdentity1, (const SteamNetworkingIdentity *)pIdentity2);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity(void *linux_side, SteamNetworkingIdentity * pIdentity)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetIdentity((SteamNetworkingIdentity *)pIdentity);
}

ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->InitAuthentication();
}

ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus(void *linux_side, SteamNetAuthenticationStatus_t * pDetails)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetAuthenticationStatus((SteamNetAuthenticationStatus_t *)pDetails);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket(void *linux_side, const void * pvTicket, int cbTicket, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    return ((ISteamNetworkingSockets*)linux_side)->ReceivedRelayAuthTicket((const void *)pvTicket, (int)cbTicket, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer(void *linux_side, const SteamNetworkingIdentity * identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    return ((ISteamNetworkingSockets*)linux_side)->FindRelayAuthTicketForServer((const SteamNetworkingIdentity *)identityGameServer, (int)nVirtualPort, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer(void *linux_side, const SteamNetworkingIdentity * identityTarget, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectToHostedDedicatedServer((const SteamNetworkingIdentity *)identityTarget, (int)nVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

uint16 cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPort();
}

SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPOPID();
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress(void *linux_side, SteamDatagramHostedAddress * pRouting)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerAddress((SteamDatagramHostedAddress *)pRouting);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket(void *linux_side, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateHostedDedicatedServerListenSocket((int)nVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin(void *linux_side, SteamDatagramGameCoordinatorServerLogin * pLoginInfo, int * pcbSignedBlob, void * pBlob)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetGameCoordinatorServerLogin((SteamDatagramGameCoordinatorServerLogin *)pLoginInfo, (int *)pcbSignedBlob, (void *)pBlob);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling(void *linux_side, ISteamNetworkingConnectionCustomSignaling * pSignaling, const SteamNetworkingIdentity * pPeerIdentity, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectP2PCustomSignaling((ISteamNetworkingConnectionCustomSignaling *)pSignaling, (const SteamNetworkingIdentity *)pPeerIdentity, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal(void *linux_side, const void * pMsg, int cbMsg, ISteamNetworkingCustomSignalingRecvContext * pContext)
{
    return ((ISteamNetworkingSockets*)linux_side)->ReceivedP2PCustomSignal((const void *)pMsg, (int)cbMsg, (ISteamNetworkingCustomSignalingRecvContext *)pContext);
}

#ifdef __cplusplus
}
#endif
