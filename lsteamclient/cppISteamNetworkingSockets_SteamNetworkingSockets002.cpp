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
HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP(void *linux_side, const SteamNetworkingIPAddr * localAddress)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketIP((const SteamNetworkingIPAddr *)localAddress);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress(void *linux_side, const SteamNetworkingIPAddr * address)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectByIPAddress((const SteamNetworkingIPAddr *)address);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P(void *linux_side, int nVirtualPort)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketP2P((int)nVirtualPort);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P(void *linux_side, const SteamNetworkingIdentity * identityRemote, int nVirtualPort)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectP2P((const SteamNetworkingIdentity *)identityRemote, (int)nVirtualPort);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection(void *linux_side, HSteamNetConnection hConn)
{
    return ((ISteamNetworkingSockets*)linux_side)->AcceptConnection((HSteamNetConnection)hConn);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection(void *linux_side, HSteamNetConnection hPeer, int nReason, const char * pszDebug, bool bEnableLinger)
{
    return ((ISteamNetworkingSockets*)linux_side)->CloseConnection((HSteamNetConnection)hPeer, (int)nReason, (const char *)pszDebug, (bool)bEnableLinger);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket(void *linux_side, HSteamListenSocket hSocket)
{
    return ((ISteamNetworkingSockets*)linux_side)->CloseListenSocket((HSteamListenSocket)hSocket);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData(void *linux_side, HSteamNetConnection hPeer, int64 nUserData)
{
    return ((ISteamNetworkingSockets*)linux_side)->SetConnectionUserData((HSteamNetConnection)hPeer, (int64)nUserData);
}

int64 cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData(void *linux_side, HSteamNetConnection hPeer)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionUserData((HSteamNetConnection)hPeer);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName(void *linux_side, HSteamNetConnection hPeer, const char * pszName)
{
    ((ISteamNetworkingSockets*)linux_side)->SetConnectionName((HSteamNetConnection)hPeer, (const char *)pszName);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName(void *linux_side, HSteamNetConnection hPeer, char * pszName, int nMaxLen)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionName((HSteamNetConnection)hPeer, (char *)pszName, (int)nMaxLen);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection(void *linux_side, HSteamNetConnection hConn, const void * pData, uint32 cbData, int nSendFlags)
{
    return ((ISteamNetworkingSockets*)linux_side)->SendMessageToConnection((HSteamNetConnection)hConn, (const void *)pData, (uint32)cbData, (int)nSendFlags);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection(void *linux_side, HSteamNetConnection hConn)
{
    return ((ISteamNetworkingSockets*)linux_side)->FlushMessagesOnConnection((HSteamNetConnection)hConn);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo(void *linux_side, HSteamNetConnection hConn, SteamNetConnectionInfo_t * pInfo)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionInfo((HSteamNetConnection)hConn, (SteamNetConnectionInfo_t *)pInfo);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus(void *linux_side, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus * pStats)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetQuickConnectionStatus((HSteamNetConnection)hConn, (SteamNetworkingQuickConnectionStatus *)pStats);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus(void *linux_side, HSteamNetConnection hConn, char * pszBuf, int cbBuf)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetDetailedConnectionStatus((HSteamNetConnection)hConn, (char *)pszBuf, (int)cbBuf);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress(void *linux_side, HSteamListenSocket hSocket, SteamNetworkingIPAddr * address)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetListenSocketAddress((HSteamListenSocket)hSocket, (SteamNetworkingIPAddr *)address);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair(void *linux_side, HSteamNetConnection * pOutConnection1, HSteamNetConnection * pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity * pIdentity1, const SteamNetworkingIdentity * pIdentity2)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateSocketPair((HSteamNetConnection *)pOutConnection1, (HSteamNetConnection *)pOutConnection2, (bool)bUseNetworkLoopback, (const SteamNetworkingIdentity *)pIdentity1, (const SteamNetworkingIdentity *)pIdentity2);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity(void *linux_side, SteamNetworkingIdentity * pIdentity)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetIdentity((SteamNetworkingIdentity *)pIdentity);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket(void *linux_side, const void * pvTicket, int cbTicket, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    return ((ISteamNetworkingSockets*)linux_side)->ReceivedRelayAuthTicket((const void *)pvTicket, (int)cbTicket, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer(void *linux_side, const SteamNetworkingIdentity * identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    return ((ISteamNetworkingSockets*)linux_side)->FindRelayAuthTicketForServer((const SteamNetworkingIdentity *)identityGameServer, (int)nVirtualPort, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer(void *linux_side, const SteamNetworkingIdentity * identityTarget, int nVirtualPort)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectToHostedDedicatedServer((const SteamNetworkingIdentity *)identityTarget, (int)nVirtualPort);
}

uint16 cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPort();
}

SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPOPID();
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress(void *linux_side, SteamDatagramHostedAddress * pRouting)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerAddress((SteamDatagramHostedAddress *)pRouting);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket(void *linux_side, int nVirtualPort)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateHostedDedicatedServerListenSocket((int)nVirtualPort);
}

#ifdef __cplusplus
}
#endif
