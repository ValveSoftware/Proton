#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/isteamnetworkingsockets.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets012.h"
HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP(void *linux_side, const SteamNetworkingIPAddr *localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamListenSocket _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketIP(*localAddress, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress(void *linux_side, const SteamNetworkingIPAddr *address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectByIPAddress(*address, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P(void *linux_side, int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamListenSocket _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketP2P((int)nLocalVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P(void *linux_side, const SteamNetworkingIdentity *identityRemote, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectP2P(*identityRemote, (int)nRemoteVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection(void *linux_side, HSteamNetConnection hConn)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->AcceptConnection((HSteamNetConnection)hConn);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection(void *linux_side, HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CloseConnection((HSteamNetConnection)hPeer, (int)nReason, (const char *)pszDebug, (bool)bEnableLinger);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket(void *linux_side, HSteamListenSocket hSocket)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CloseListenSocket((HSteamListenSocket)hSocket);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData(void *linux_side, HSteamNetConnection hPeer, int64 nUserData)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->SetConnectionUserData((HSteamNetConnection)hPeer, (int64)nUserData);
    return (_ret);
}

int64 cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData(void *linux_side, HSteamNetConnection hPeer)
{
    int64 _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetConnectionUserData((HSteamNetConnection)hPeer);
    return (_ret);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName(void *linux_side, HSteamNetConnection hPeer, const char *pszName)
{
    ((ISteamNetworkingSockets*)linux_side)->SetConnectionName((HSteamNetConnection)hPeer, (const char *)pszName);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName(void *linux_side, HSteamNetConnection hPeer, char *pszName, int nMaxLen)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetConnectionName((HSteamNetConnection)hPeer, (char *)pszName, (int)nMaxLen);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection(void *linux_side, HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->SendMessageToConnection((HSteamNetConnection)hConn, (const void *)pData, (uint32)cbData, (int)nSendFlags, (int64 *)pOutMessageNumber);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection(void *linux_side, HSteamNetConnection hConn)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->FlushMessagesOnConnection((HSteamNetConnection)hConn);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo(void *linux_side, HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetConnectionInfo((HSteamNetConnection)hConn, (SteamNetConnectionInfo_t *)pInfo);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus(void *linux_side, HSteamNetConnection hConn, SteamNetConnectionRealTimeStatus_t *pStatus, int nLanes, SteamNetConnectionRealTimeLaneStatus_t *pLanes)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetConnectionRealTimeStatus((HSteamNetConnection)hConn, (SteamNetConnectionRealTimeStatus_t *)pStatus, (int)nLanes, (SteamNetConnectionRealTimeLaneStatus_t *)pLanes);
    return (_ret);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus(void *linux_side, HSteamNetConnection hConn, char *pszBuf, int cbBuf)
{
    int _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetDetailedConnectionStatus((HSteamNetConnection)hConn, (char *)pszBuf, (int)cbBuf);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress(void *linux_side, HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetListenSocketAddress((HSteamListenSocket)hSocket, (SteamNetworkingIPAddr *)address);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair(void *linux_side, HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateSocketPair((HSteamNetConnection *)pOutConnection1, (HSteamNetConnection *)pOutConnection2, (bool)bUseNetworkLoopback, (const SteamNetworkingIdentity *)pIdentity1, (const SteamNetworkingIdentity *)pIdentity2);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes(void *linux_side, HSteamNetConnection hConn, int nNumLanes, const int *pLanePriorities, const uint16 *pLaneWeights)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConfigureConnectionLanes((HSteamNetConnection)hConn, (int)nNumLanes, (const int *)pLanePriorities, (const uint16 *)pLaneWeights);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity(void *linux_side, SteamNetworkingIdentity *pIdentity)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetIdentity((SteamNetworkingIdentity *)pIdentity);
    return (_ret);
}

ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication(void *linux_side)
{
    ESteamNetworkingAvailability _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->InitAuthentication();
    return (_ret);
}

ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus(void *linux_side, SteamNetAuthenticationStatus_t *pDetails)
{
    ESteamNetworkingAvailability _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetAuthenticationStatus((SteamNetAuthenticationStatus_t *)pDetails);
    return (_ret);
}

HSteamNetPollGroup cppISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup(void *linux_side)
{
    HSteamNetPollGroup _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreatePollGroup();
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup(void *linux_side, HSteamNetPollGroup hPollGroup)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->DestroyPollGroup((HSteamNetPollGroup)hPollGroup);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup(void *linux_side, HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->SetConnectionPollGroup((HSteamNetConnection)hConn, (HSteamNetPollGroup)hPollGroup);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket(void *linux_side, const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ReceivedRelayAuthTicket((const void *)pvTicket, (int)cbTicket, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
    return (_ret);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer(void *linux_side, const SteamNetworkingIdentity *identityGameServer, int nRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    int _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->FindRelayAuthTicketForServer(*identityGameServer, (int)nRemoteVirtualPort, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer(void *linux_side, const SteamNetworkingIdentity *identityTarget, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectToHostedDedicatedServer(*identityTarget, (int)nRemoteVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

uint16 cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort(void *linux_side)
{
    uint16 _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPort();
    return (_ret);
}

SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID(void *linux_side)
{
    SteamNetworkingPOPID _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPOPID();
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress(void *linux_side, SteamDatagramHostedAddress *pRouting)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerAddress((SteamDatagramHostedAddress *)pRouting);
    return (_ret);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket(void *linux_side, int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamListenSocket _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateHostedDedicatedServerListenSocket((int)nLocalVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin(void *linux_side, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetGameCoordinatorServerLogin((SteamDatagramGameCoordinatorServerLogin *)pLoginInfo, (int *)pcbSignedBlob, (void *)pBlob);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling(void *linux_side, ISteamNetworkingConnectionSignaling *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectP2PCustomSignaling((ISteamNetworkingConnectionSignaling *)pSignaling, (const SteamNetworkingIdentity *)pPeerIdentity, (int)nRemoteVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal(void *linux_side, const void *pMsg, int cbMsg, ISteamNetworkingSignalingRecvContext *pContext)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ReceivedP2PCustomSignal((const void *)pMsg, (int)cbMsg, (ISteamNetworkingSignalingRecvContext *)pContext);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest(void *linux_side, int *pcbBlob, void *pBlob, SteamNetworkingErrMsg *errMsg)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetCertificateRequest((int *)pcbBlob, (void *)pBlob, *errMsg);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate(void *linux_side, const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg *errMsg)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->SetCertificate((const void *)pCertificate, (int)cbCertificate, *errMsg);
    return (_ret);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity(void *linux_side, const SteamNetworkingIdentity *pIdentity)
{
    ((ISteamNetworkingSockets*)linux_side)->ResetIdentity((const SteamNetworkingIdentity *)pIdentity);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks(void *linux_side)
{
    ((ISteamNetworkingSockets*)linux_side)->RunCallbacks();
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP(void *linux_side, int nNumPorts)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->BeginAsyncRequestFakeIP((int)nNumPorts);
    return (_ret);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP(void *linux_side, int idxFirstPort, SteamNetworkingFakeIPResult_t *pInfo)
{
    ((ISteamNetworkingSockets*)linux_side)->GetFakeIP((int)idxFirstPort, (SteamNetworkingFakeIPResult_t *)pInfo);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP(void *linux_side, int idxFakePort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamListenSocket _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketP2PFakeIP((int)idxFakePort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection(void *linux_side, HSteamNetConnection hConn, SteamNetworkingIPAddr *pOutAddr)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetRemoteFakeIPForConnection((HSteamNetConnection)hConn, (SteamNetworkingIPAddr *)pOutAddr);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
