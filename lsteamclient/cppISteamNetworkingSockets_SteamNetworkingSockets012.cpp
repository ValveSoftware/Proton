#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_157/steam_api.h"
#include "steamworks_sdk_157/steamnetworkingtypes.h"
#include "steamworks_sdk_157/isteamnetworkingsockets.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_157
#include "struct_converters.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets012.h"
HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP(void *linux_side, const SteamNetworkingIPAddr * localAddress, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketIP(*localAddress, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress(void *linux_side, const SteamNetworkingIPAddr * address, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectByIPAddress(*address, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P(void *linux_side, int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketP2P((int)nLocalVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P(void *linux_side, const SteamNetworkingIdentity * identityRemote, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectP2P(*identityRemote, (int)nRemoteVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection(void *linux_side, HSteamNetConnection hConn)
{
    return ((ISteamNetworkingSockets*)linux_side)->AcceptConnection((HSteamNetConnection)hConn);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection(void *linux_side, HSteamNetConnection hPeer, int nReason, const char * pszDebug, bool bEnableLinger)
{
    return ((ISteamNetworkingSockets*)linux_side)->CloseConnection((HSteamNetConnection)hPeer, (int)nReason, (const char *)pszDebug, (bool)bEnableLinger);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket(void *linux_side, HSteamListenSocket hSocket)
{
    return ((ISteamNetworkingSockets*)linux_side)->CloseListenSocket((HSteamListenSocket)hSocket);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData(void *linux_side, HSteamNetConnection hPeer, int64 nUserData)
{
    return ((ISteamNetworkingSockets*)linux_side)->SetConnectionUserData((HSteamNetConnection)hPeer, (int64)nUserData);
}

int64 cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData(void *linux_side, HSteamNetConnection hPeer)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionUserData((HSteamNetConnection)hPeer);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName(void *linux_side, HSteamNetConnection hPeer, const char * pszName)
{
    ((ISteamNetworkingSockets*)linux_side)->SetConnectionName((HSteamNetConnection)hPeer, (const char *)pszName);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName(void *linux_side, HSteamNetConnection hPeer, char * pszName, int nMaxLen)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionName((HSteamNetConnection)hPeer, (char *)pszName, (int)nMaxLen);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection(void *linux_side, HSteamNetConnection hConn, const void * pData, uint32 cbData, int nSendFlags, int64 * pOutMessageNumber)
{
    return ((ISteamNetworkingSockets*)linux_side)->SendMessageToConnection((HSteamNetConnection)hConn, (const void *)pData, (uint32)cbData, (int)nSendFlags, (int64 *)pOutMessageNumber);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection(void *linux_side, HSteamNetConnection hConn)
{
    return ((ISteamNetworkingSockets*)linux_side)->FlushMessagesOnConnection((HSteamNetConnection)hConn);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo(void *linux_side, HSteamNetConnection hConn, SteamNetConnectionInfo_t * pInfo)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionInfo((HSteamNetConnection)hConn, (SteamNetConnectionInfo_t *)pInfo);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus(void *linux_side, HSteamNetConnection hConn, SteamNetConnectionRealTimeStatus_t * pStatus, int nLanes, SteamNetConnectionRealTimeLaneStatus_t * pLanes)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetConnectionRealTimeStatus((HSteamNetConnection)hConn, (SteamNetConnectionRealTimeStatus_t *)pStatus, (int)nLanes, (SteamNetConnectionRealTimeLaneStatus_t *)pLanes);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus(void *linux_side, HSteamNetConnection hConn, char * pszBuf, int cbBuf)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetDetailedConnectionStatus((HSteamNetConnection)hConn, (char *)pszBuf, (int)cbBuf);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress(void *linux_side, HSteamListenSocket hSocket, SteamNetworkingIPAddr * address)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetListenSocketAddress((HSteamListenSocket)hSocket, (SteamNetworkingIPAddr *)address);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair(void *linux_side, HSteamNetConnection * pOutConnection1, HSteamNetConnection * pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity * pIdentity1, const SteamNetworkingIdentity * pIdentity2)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateSocketPair((HSteamNetConnection *)pOutConnection1, (HSteamNetConnection *)pOutConnection2, (bool)bUseNetworkLoopback, (const SteamNetworkingIdentity *)pIdentity1, (const SteamNetworkingIdentity *)pIdentity2);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes(void *linux_side, HSteamNetConnection hConn, int nNumLanes, const int * pLanePriorities, const uint16 * pLaneWeights)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConfigureConnectionLanes((HSteamNetConnection)hConn, (int)nNumLanes, (const int *)pLanePriorities, (const uint16 *)pLaneWeights);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity(void *linux_side, SteamNetworkingIdentity * pIdentity)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetIdentity((SteamNetworkingIdentity *)pIdentity);
}

ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->InitAuthentication();
}

ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus(void *linux_side, SteamNetAuthenticationStatus_t * pDetails)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetAuthenticationStatus((SteamNetAuthenticationStatus_t *)pDetails);
}

HSteamNetPollGroup cppISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreatePollGroup();
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup(void *linux_side, HSteamNetPollGroup hPollGroup)
{
    return ((ISteamNetworkingSockets*)linux_side)->DestroyPollGroup((HSteamNetPollGroup)hPollGroup);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup(void *linux_side, HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)
{
    return ((ISteamNetworkingSockets*)linux_side)->SetConnectionPollGroup((HSteamNetConnection)hConn, (HSteamNetPollGroup)hPollGroup);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket(void *linux_side, const void * pvTicket, int cbTicket, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    return ((ISteamNetworkingSockets*)linux_side)->ReceivedRelayAuthTicket((const void *)pvTicket, (int)cbTicket, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer(void *linux_side, const SteamNetworkingIdentity * identityGameServer, int nRemoteVirtualPort, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    return ((ISteamNetworkingSockets*)linux_side)->FindRelayAuthTicketForServer(*identityGameServer, (int)nRemoteVirtualPort, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer(void *linux_side, const SteamNetworkingIdentity * identityTarget, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectToHostedDedicatedServer(*identityTarget, (int)nRemoteVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

uint16 cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPort();
}

SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID(void *linux_side)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPOPID();
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress(void *linux_side, SteamDatagramHostedAddress * pRouting)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerAddress((SteamDatagramHostedAddress *)pRouting);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket(void *linux_side, int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateHostedDedicatedServerListenSocket((int)nLocalVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin(void *linux_side, SteamDatagramGameCoordinatorServerLogin * pLoginInfo, int * pcbSignedBlob, void * pBlob)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetGameCoordinatorServerLogin((SteamDatagramGameCoordinatorServerLogin *)pLoginInfo, (int *)pcbSignedBlob, (void *)pBlob);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling(void *linux_side, ISteamNetworkingConnectionSignaling * pSignaling, const SteamNetworkingIdentity * pPeerIdentity, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->ConnectP2PCustomSignaling((ISteamNetworkingConnectionSignaling *)pSignaling, (const SteamNetworkingIdentity *)pPeerIdentity, (int)nRemoteVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal(void *linux_side, const void * pMsg, int cbMsg, ISteamNetworkingSignalingRecvContext * pContext)
{
    return ((ISteamNetworkingSockets*)linux_side)->ReceivedP2PCustomSignal((const void *)pMsg, (int)cbMsg, (ISteamNetworkingSignalingRecvContext *)pContext);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest(void *linux_side, int * pcbBlob, void * pBlob, SteamNetworkingErrMsg * errMsg)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetCertificateRequest((int *)pcbBlob, (void *)pBlob, *errMsg);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate(void *linux_side, const void * pCertificate, int cbCertificate, SteamNetworkingErrMsg * errMsg)
{
    return ((ISteamNetworkingSockets*)linux_side)->SetCertificate((const void *)pCertificate, (int)cbCertificate, *errMsg);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity(void *linux_side, const SteamNetworkingIdentity * pIdentity)
{
    ((ISteamNetworkingSockets*)linux_side)->ResetIdentity((const SteamNetworkingIdentity *)pIdentity);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks(void *linux_side)
{
    ((ISteamNetworkingSockets*)linux_side)->RunCallbacks();
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP(void *linux_side, int nNumPorts)
{
    return ((ISteamNetworkingSockets*)linux_side)->BeginAsyncRequestFakeIP((int)nNumPorts);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP(void *linux_side, int idxFirstPort, SteamNetworkingFakeIPResult_t * pInfo)
{
    ((ISteamNetworkingSockets*)linux_side)->GetFakeIP((int)idxFirstPort, (SteamNetworkingFakeIPResult_t *)pInfo);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP(void *linux_side, int idxFakePort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    return ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketP2PFakeIP((int)idxFakePort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection(void *linux_side, HSteamNetConnection hConn, SteamNetworkingIPAddr * pOutAddr)
{
    return ((ISteamNetworkingSockets*)linux_side)->GetRemoteFakeIPForConnection((HSteamNetConnection)hConn, (SteamNetworkingIPAddr *)pOutAddr);
}

#ifdef __cplusplus
}
#endif
