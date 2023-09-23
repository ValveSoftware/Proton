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
HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP(void *linux_side, const SteamNetworkingIPAddr *localAddress)
{
    HSteamListenSocket _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketIP((const SteamNetworkingIPAddr *)localAddress);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress(void *linux_side, const SteamNetworkingIPAddr *address)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectByIPAddress((const SteamNetworkingIPAddr *)address);
    return (_ret);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P(void *linux_side, int nVirtualPort)
{
    HSteamListenSocket _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketP2P((int)nVirtualPort);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P(void *linux_side, const SteamNetworkingIdentity *identityRemote, int nVirtualPort)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectP2P((const SteamNetworkingIdentity *)identityRemote, (int)nVirtualPort);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection(void *linux_side, HSteamNetConnection hConn)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->AcceptConnection((HSteamNetConnection)hConn);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection(void *linux_side, HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CloseConnection((HSteamNetConnection)hPeer, (int)nReason, (const char *)pszDebug, (bool)bEnableLinger);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket(void *linux_side, HSteamListenSocket hSocket)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CloseListenSocket((HSteamListenSocket)hSocket);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData(void *linux_side, HSteamNetConnection hPeer, int64 nUserData)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->SetConnectionUserData((HSteamNetConnection)hPeer, (int64)nUserData);
    return (_ret);
}

int64 cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData(void *linux_side, HSteamNetConnection hPeer)
{
    int64 _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetConnectionUserData((HSteamNetConnection)hPeer);
    return (_ret);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName(void *linux_side, HSteamNetConnection hPeer, const char *pszName)
{
    ((ISteamNetworkingSockets*)linux_side)->SetConnectionName((HSteamNetConnection)hPeer, (const char *)pszName);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName(void *linux_side, HSteamNetConnection hPeer, char *pszName, int nMaxLen)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetConnectionName((HSteamNetConnection)hPeer, (char *)pszName, (int)nMaxLen);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection(void *linux_side, HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->SendMessageToConnection((HSteamNetConnection)hConn, (const void *)pData, (uint32)cbData, (int)nSendFlags);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection(void *linux_side, HSteamNetConnection hConn)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->FlushMessagesOnConnection((HSteamNetConnection)hConn);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo(void *linux_side, HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetConnectionInfo((HSteamNetConnection)hConn, (SteamNetConnectionInfo_t *)pInfo);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus(void *linux_side, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetQuickConnectionStatus((HSteamNetConnection)hConn, (SteamNetworkingQuickConnectionStatus *)pStats);
    return (_ret);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus(void *linux_side, HSteamNetConnection hConn, char *pszBuf, int cbBuf)
{
    int _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetDetailedConnectionStatus((HSteamNetConnection)hConn, (char *)pszBuf, (int)cbBuf);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress(void *linux_side, HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetListenSocketAddress((HSteamListenSocket)hSocket, (SteamNetworkingIPAddr *)address);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair(void *linux_side, HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateSocketPair((HSteamNetConnection *)pOutConnection1, (HSteamNetConnection *)pOutConnection2, (bool)bUseNetworkLoopback, (const SteamNetworkingIdentity *)pIdentity1, (const SteamNetworkingIdentity *)pIdentity2);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity(void *linux_side, SteamNetworkingIdentity *pIdentity)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetIdentity((SteamNetworkingIdentity *)pIdentity);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket(void *linux_side, const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ReceivedRelayAuthTicket((const void *)pvTicket, (int)cbTicket, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
    return (_ret);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer(void *linux_side, const SteamNetworkingIdentity *identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    int _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->FindRelayAuthTicketForServer((const SteamNetworkingIdentity *)identityGameServer, (int)nVirtualPort, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer(void *linux_side, const SteamNetworkingIdentity *identityTarget, int nVirtualPort)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectToHostedDedicatedServer((const SteamNetworkingIdentity *)identityTarget, (int)nVirtualPort);
    return (_ret);
}

uint16 cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort(void *linux_side)
{
    uint16 _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPort();
    return (_ret);
}

SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID(void *linux_side)
{
    SteamNetworkingPOPID _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPOPID();
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress(void *linux_side, SteamDatagramHostedAddress *pRouting)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerAddress((SteamDatagramHostedAddress *)pRouting);
    return (_ret);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket(void *linux_side, int nVirtualPort)
{
    HSteamListenSocket _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateHostedDedicatedServerListenSocket((int)nVirtualPort);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
