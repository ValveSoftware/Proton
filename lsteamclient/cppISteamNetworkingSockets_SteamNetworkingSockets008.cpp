#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_149/steam_api.h"
#include "steamworks_sdk_149/steamnetworkingtypes.h"
#include "steamworks_sdk_149/isteamnetworkingsockets.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_149
#include "struct_converters.h"
#include "cppISteamNetworkingSockets_SteamNetworkingSockets008.h"
HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP(void *linux_side, const SteamNetworkingIPAddr *localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamListenSocket _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketIP((const SteamNetworkingIPAddr *)localAddress, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress(void *linux_side, const SteamNetworkingIPAddr *address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectByIPAddress((const SteamNetworkingIPAddr *)address, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P(void *linux_side, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamListenSocket _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateListenSocketP2P((int)nVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P(void *linux_side, const SteamNetworkingIdentity *identityRemote, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectP2P((const SteamNetworkingIdentity *)identityRemote, (int)nVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection(void *linux_side, HSteamNetConnection hConn)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->AcceptConnection((HSteamNetConnection)hConn);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection(void *linux_side, HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CloseConnection((HSteamNetConnection)hPeer, (int)nReason, (const char *)pszDebug, (bool)bEnableLinger);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket(void *linux_side, HSteamListenSocket hSocket)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CloseListenSocket((HSteamListenSocket)hSocket);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData(void *linux_side, HSteamNetConnection hPeer, int64 nUserData)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->SetConnectionUserData((HSteamNetConnection)hPeer, (int64)nUserData);
    return (_ret);
}

int64 cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData(void *linux_side, HSteamNetConnection hPeer)
{
    int64 _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetConnectionUserData((HSteamNetConnection)hPeer);
    return (_ret);
}

void cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName(void *linux_side, HSteamNetConnection hPeer, const char *pszName)
{
    ((ISteamNetworkingSockets*)linux_side)->SetConnectionName((HSteamNetConnection)hPeer, (const char *)pszName);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName(void *linux_side, HSteamNetConnection hPeer, char *pszName, int nMaxLen)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetConnectionName((HSteamNetConnection)hPeer, (char *)pszName, (int)nMaxLen);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection(void *linux_side, HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->SendMessageToConnection((HSteamNetConnection)hConn, (const void *)pData, (uint32)cbData, (int)nSendFlags, (int64 *)pOutMessageNumber);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection(void *linux_side, HSteamNetConnection hConn)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->FlushMessagesOnConnection((HSteamNetConnection)hConn);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo(void *linux_side, HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetConnectionInfo((HSteamNetConnection)hConn, (SteamNetConnectionInfo_t *)pInfo);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus(void *linux_side, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetQuickConnectionStatus((HSteamNetConnection)hConn, (SteamNetworkingQuickConnectionStatus *)pStats);
    return (_ret);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus(void *linux_side, HSteamNetConnection hConn, char *pszBuf, int cbBuf)
{
    int _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetDetailedConnectionStatus((HSteamNetConnection)hConn, (char *)pszBuf, (int)cbBuf);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress(void *linux_side, HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetListenSocketAddress((HSteamListenSocket)hSocket, (SteamNetworkingIPAddr *)address);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair(void *linux_side, HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateSocketPair((HSteamNetConnection *)pOutConnection1, (HSteamNetConnection *)pOutConnection2, (bool)bUseNetworkLoopback, (const SteamNetworkingIdentity *)pIdentity1, (const SteamNetworkingIdentity *)pIdentity2);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity(void *linux_side, SteamNetworkingIdentity *pIdentity)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetIdentity((SteamNetworkingIdentity *)pIdentity);
    return (_ret);
}

ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication(void *linux_side)
{
    ESteamNetworkingAvailability _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->InitAuthentication();
    return (_ret);
}

ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus(void *linux_side, SteamNetAuthenticationStatus_t *pDetails)
{
    ESteamNetworkingAvailability _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetAuthenticationStatus((SteamNetAuthenticationStatus_t *)pDetails);
    return (_ret);
}

HSteamNetPollGroup cppISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup(void *linux_side)
{
    HSteamNetPollGroup _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreatePollGroup();
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup(void *linux_side, HSteamNetPollGroup hPollGroup)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->DestroyPollGroup((HSteamNetPollGroup)hPollGroup);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup(void *linux_side, HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->SetConnectionPollGroup((HSteamNetConnection)hConn, (HSteamNetPollGroup)hPollGroup);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket(void *linux_side, const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ReceivedRelayAuthTicket((const void *)pvTicket, (int)cbTicket, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
    return (_ret);
}

int cppISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer(void *linux_side, const SteamNetworkingIdentity *identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    int _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->FindRelayAuthTicketForServer((const SteamNetworkingIdentity *)identityGameServer, (int)nVirtualPort, (SteamDatagramRelayAuthTicket *)pOutParsedTicket);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer(void *linux_side, const SteamNetworkingIdentity *identityTarget, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectToHostedDedicatedServer((const SteamNetworkingIdentity *)identityTarget, (int)nVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

uint16 cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort(void *linux_side)
{
    uint16 _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPort();
    return (_ret);
}

SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID(void *linux_side)
{
    SteamNetworkingPOPID _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerPOPID();
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress(void *linux_side, SteamDatagramHostedAddress *pRouting)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetHostedDedicatedServerAddress((SteamDatagramHostedAddress *)pRouting);
    return (_ret);
}

HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket(void *linux_side, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamListenSocket _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->CreateHostedDedicatedServerListenSocket((int)nVirtualPort, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

EResult cppISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin(void *linux_side, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)
{
    EResult _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetGameCoordinatorServerLogin((SteamDatagramGameCoordinatorServerLogin *)pLoginInfo, (int *)pcbSignedBlob, (void *)pBlob);
    return (_ret);
}

HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling(void *linux_side, ISteamNetworkingConnectionCustomSignaling *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    HSteamNetConnection _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ConnectP2PCustomSignaling((ISteamNetworkingConnectionCustomSignaling *)pSignaling, (const SteamNetworkingIdentity *)pPeerIdentity, (int)nOptions, (const SteamNetworkingConfigValue_t *)pOptions);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal(void *linux_side, const void *pMsg, int cbMsg, ISteamNetworkingCustomSignalingRecvContext *pContext)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->ReceivedP2PCustomSignal((const void *)pMsg, (int)cbMsg, (ISteamNetworkingCustomSignalingRecvContext *)pContext);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest(void *linux_side, int *pcbBlob, void *pBlob, SteamNetworkingErrMsg *errMsg)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->GetCertificateRequest((int *)pcbBlob, (void *)pBlob, (SteamNetworkingErrMsg *)errMsg);
    return (_ret);
}

bool cppISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate(void *linux_side, const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg *errMsg)
{
    bool _ret;
    _ret = ((ISteamNetworkingSockets*)linux_side)->SetCertificate((const void *)pCertificate, (int)cbCertificate, (SteamNetworkingErrMsg *)errMsg);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
