/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingSockets_SteamNetworkingSockets008.h"

typedef struct __winISteamNetworkingSockets_SteamNetworkingSockets008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingSockets_SteamNetworkingSockets008;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP, 16)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, const SteamNetworkingIPAddr * localAddress, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP(_this->linux_side, localAddress, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress, 16)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, const SteamNetworkingIPAddr * address, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress(_this->linux_side, address, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P, 16)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P(_this->linux_side, nVirtualPort, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P, 20)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, const SteamNetworkingIdentity * identityRemote, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P(_this->linux_side, identityRemote, nVirtualPort, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hConn)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection(_this->linux_side, hConn);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection, 20)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hPeer, int nReason, const char * pszDebug, bool bEnableLinger)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection(_this->linux_side, hPeer, nReason, pszDebug, bEnableLinger);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket, 8)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamListenSocket hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket(_this->linux_side, hSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hPeer, int64 nUserData)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData(_this->linux_side, hPeer, nUserData);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData, 8)
int64 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hPeer)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData(_this->linux_side, hPeer);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName, 12)
void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hPeer, const char * pszName)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName(_this->linux_side, hPeer, pszName);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hPeer, char * pszName, int nMaxLen)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName(_this->linux_side, hPeer, pszName, nMaxLen);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection, 24)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hConn, const void * pData, uint32 cbData, int nSendFlags, int64 * pOutMessageNumber)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection(_this->linux_side, hConn, pData, cbData, nSendFlags, pOutMessageNumber);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages, 16)
void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, int nMessages, winSteamNetworkingMessage_t_148a *const * pMessages, int64 * pOutMessageNumberOrResult)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages(_this->linux_side, nMessages, pMessages, pOutMessageNumberOrResult);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hConn)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection(_this->linux_side, hConn);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hConn, winSteamNetworkingMessage_t_148a ** ppOutMessages, int nMaxMessages)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection(_this->linux_side, hConn, ppOutMessages, nMaxMessages);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hConn, SteamNetConnectionInfo_t * pInfo)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo(_this->linux_side, hConn, pInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus * pStats)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus(_this->linux_side, hConn, pStats);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hConn, char * pszBuf, int cbBuf)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus(_this->linux_side, hConn, pszBuf, cbBuf);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamListenSocket hSocket, SteamNetworkingIPAddr * address)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress(_this->linux_side, hSocket, address);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair, 24)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection * pOutConnection1, HSteamNetConnection * pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity * pIdentity1, const SteamNetworkingIdentity * pIdentity2)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair(_this->linux_side, pOutConnection1, pOutConnection2, bUseNetworkLoopback, pIdentity1, pIdentity2);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity, 8)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, SteamNetworkingIdentity * pIdentity)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity(_this->linux_side, pIdentity);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication, 4)
ESteamNetworkingAvailability __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus, 8)
ESteamNetworkingAvailability __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, SteamNetAuthenticationStatus_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus(_this->linux_side, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup, 4)
HSteamNetPollGroup __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup, 8)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetPollGroup hPollGroup)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup(_this->linux_side, hPollGroup);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup(_this->linux_side, hConn, hPollGroup);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, HSteamNetPollGroup hPollGroup, winSteamNetworkingMessage_t_148a ** ppOutMessages, int nMaxMessages)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup(_this->linux_side, hPollGroup, ppOutMessages, nMaxMessages);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, const void * pvTicket, int cbTicket, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket(_this->linux_side, pvTicket, cbTicket, pOutParsedTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, const SteamNetworkingIdentity * identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer(_this->linux_side, identityGameServer, nVirtualPort, pOutParsedTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer, 20)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, const SteamNetworkingIdentity * identityTarget, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer(_this->linux_side, identityTarget, nVirtualPort, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort, 4)
uint16 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID, 4)
SteamNetworkingPOPID __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, SteamDatagramHostedAddress * pRouting)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress(_this->linux_side, pRouting);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket, 16)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket(_this->linux_side, nVirtualPort, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin, 16)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, SteamDatagramGameCoordinatorServerLogin * pLoginInfo, int * pcbSignedBlob, void * pBlob)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin(_this->linux_side, pLoginInfo, pcbSignedBlob, pBlob);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling, 20)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, ISteamNetworkingConnectionCustomSignaling * pSignaling, const SteamNetworkingIdentity * pPeerIdentity, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling(_this->linux_side, pSignaling, pPeerIdentity, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, const void * pMsg, int cbMsg, ISteamNetworkingCustomSignalingRecvContext * pContext)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal(_this->linux_side, pMsg, cbMsg, pContext);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, int * pcbBlob, void * pBlob, SteamNetworkingErrMsg * errMsg)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest(_this->linux_side, pcbBlob, pBlob, errMsg);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this, const void * pCertificate, int cbCertificate, SteamNetworkingErrMsg * errMsg)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate(_this->linux_side, pCertificate, cbCertificate, errMsg);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_destructor, 4)
void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_destructor(winISteamNetworkingSockets_SteamNetworkingSockets008 *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingSockets_SteamNetworkingSockets008,
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets008_destructor)
    );
#ifndef __GNUC__
}
#endif

winISteamNetworkingSockets_SteamNetworkingSockets008 *create_winISteamNetworkingSockets_SteamNetworkingSockets008(void *linux_side)
{
    winISteamNetworkingSockets_SteamNetworkingSockets008 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworkingSockets_SteamNetworkingSockets008));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworkingSockets_SteamNetworkingSockets008_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets006.h"

typedef struct __winISteamNetworkingSockets_SteamNetworkingSockets006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingSockets_SteamNetworkingSockets006;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP, 16)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, const SteamNetworkingIPAddr * localAddress, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP(_this->linux_side, localAddress, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress, 16)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, const SteamNetworkingIPAddr * address, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress(_this->linux_side, address, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P, 16)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P(_this->linux_side, nVirtualPort, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P, 20)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, const SteamNetworkingIdentity * identityRemote, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P(_this->linux_side, identityRemote, nVirtualPort, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hConn)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection(_this->linux_side, hConn);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection, 20)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hPeer, int nReason, const char * pszDebug, bool bEnableLinger)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection(_this->linux_side, hPeer, nReason, pszDebug, bEnableLinger);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket, 8)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamListenSocket hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket(_this->linux_side, hSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hPeer, int64 nUserData)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData(_this->linux_side, hPeer, nUserData);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData, 8)
int64 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hPeer)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData(_this->linux_side, hPeer);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName, 12)
void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hPeer, const char * pszName)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName(_this->linux_side, hPeer, pszName);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hPeer, char * pszName, int nMaxLen)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName(_this->linux_side, hPeer, pszName, nMaxLen);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection, 24)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hConn, const void * pData, uint32 cbData, int nSendFlags, int64 * pOutMessageNumber)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection(_this->linux_side, hConn, pData, cbData, nSendFlags, pOutMessageNumber);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages, 16)
void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, int nMessages, winSteamNetworkingMessage_t_147 ** pMessages, int64 * pOutMessageNumberOrResult)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages(_this->linux_side, nMessages, pMessages, pOutMessageNumberOrResult);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hConn)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection(_this->linux_side, hConn);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hConn, winSteamNetworkingMessage_t_147 ** ppOutMessages, int nMaxMessages)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection(_this->linux_side, hConn, ppOutMessages, nMaxMessages);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamListenSocket hSocket, winSteamNetworkingMessage_t_147 ** ppOutMessages, int nMaxMessages)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket(_this->linux_side, hSocket, ppOutMessages, nMaxMessages);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hConn, SteamNetConnectionInfo_t * pInfo)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo(_this->linux_side, hConn, pInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus * pStats)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus(_this->linux_side, hConn, pStats);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection hConn, char * pszBuf, int cbBuf)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus(_this->linux_side, hConn, pszBuf, cbBuf);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamListenSocket hSocket, SteamNetworkingIPAddr * address)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress(_this->linux_side, hSocket, address);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair, 24)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, HSteamNetConnection * pOutConnection1, HSteamNetConnection * pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity * pIdentity1, const SteamNetworkingIdentity * pIdentity2)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair(_this->linux_side, pOutConnection1, pOutConnection2, bUseNetworkLoopback, pIdentity1, pIdentity2);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity, 8)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, SteamNetworkingIdentity * pIdentity)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity(_this->linux_side, pIdentity);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication, 4)
ESteamNetworkingAvailability __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus, 8)
ESteamNetworkingAvailability __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, SteamNetAuthenticationStatus_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus(_this->linux_side, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, const void * pvTicket, int cbTicket, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket(_this->linux_side, pvTicket, cbTicket, pOutParsedTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, const SteamNetworkingIdentity * identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer(_this->linux_side, identityGameServer, nVirtualPort, pOutParsedTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer, 20)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, const SteamNetworkingIdentity * identityTarget, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer(_this->linux_side, identityTarget, nVirtualPort, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort, 4)
uint16 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID, 4)
SteamNetworkingPOPID __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, SteamDatagramHostedAddress * pRouting)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress(_this->linux_side, pRouting);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket, 16)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket(_this->linux_side, nVirtualPort, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin, 16)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, SteamDatagramGameCoordinatorServerLogin * pLoginInfo, int * pcbSignedBlob, void * pBlob)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin(_this->linux_side, pLoginInfo, pcbSignedBlob, pBlob);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling, 20)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, ISteamNetworkingConnectionCustomSignaling * pSignaling, const SteamNetworkingIdentity * pPeerIdentity, int nOptions, const SteamNetworkingConfigValue_t * pOptions)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling(_this->linux_side, pSignaling, pPeerIdentity, nOptions, pOptions);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this, const void * pMsg, int cbMsg, ISteamNetworkingCustomSignalingRecvContext * pContext)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal(_this->linux_side, pMsg, cbMsg, pContext);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_destructor, 4)
void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_destructor(winISteamNetworkingSockets_SteamNetworkingSockets006 *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingSockets_SteamNetworkingSockets006,
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets006_destructor)
    );
#ifndef __GNUC__
}
#endif

winISteamNetworkingSockets_SteamNetworkingSockets006 *create_winISteamNetworkingSockets_SteamNetworkingSockets006(void *linux_side)
{
    winISteamNetworkingSockets_SteamNetworkingSockets006 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworkingSockets_SteamNetworkingSockets006));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworkingSockets_SteamNetworkingSockets006_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets004.h"

typedef struct __winISteamNetworkingSockets_SteamNetworkingSockets004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingSockets_SteamNetworkingSockets004;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP, 8)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, const SteamNetworkingIPAddr * localAddress)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP(_this->linux_side, localAddress);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress, 8)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, const SteamNetworkingIPAddr * address)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress(_this->linux_side, address);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P, 8)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P(_this->linux_side, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P, 12)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, const SteamNetworkingIdentity * identityRemote, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P(_this->linux_side, identityRemote, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hConn)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection(_this->linux_side, hConn);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection, 20)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hPeer, int nReason, const char * pszDebug, bool bEnableLinger)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection(_this->linux_side, hPeer, nReason, pszDebug, bEnableLinger);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket, 8)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamListenSocket hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket(_this->linux_side, hSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hPeer, int64 nUserData)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData(_this->linux_side, hPeer, nUserData);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData, 8)
int64 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hPeer)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData(_this->linux_side, hPeer);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName, 12)
void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hPeer, const char * pszName)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName(_this->linux_side, hPeer, pszName);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hPeer, char * pszName, int nMaxLen)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName(_this->linux_side, hPeer, pszName, nMaxLen);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection, 20)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hConn, const void * pData, uint32 cbData, int nSendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection(_this->linux_side, hConn, pData, cbData, nSendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hConn)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection(_this->linux_side, hConn);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hConn, winSteamNetworkingMessage_t_146 ** ppOutMessages, int nMaxMessages)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection(_this->linux_side, hConn, ppOutMessages, nMaxMessages);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamListenSocket hSocket, winSteamNetworkingMessage_t_146 ** ppOutMessages, int nMaxMessages)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket(_this->linux_side, hSocket, ppOutMessages, nMaxMessages);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hConn, SteamNetConnectionInfo_t * pInfo)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo(_this->linux_side, hConn, pInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus * pStats)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus(_this->linux_side, hConn, pStats);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection hConn, char * pszBuf, int cbBuf)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus(_this->linux_side, hConn, pszBuf, cbBuf);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamListenSocket hSocket, SteamNetworkingIPAddr * address)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress(_this->linux_side, hSocket, address);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair, 24)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, HSteamNetConnection * pOutConnection1, HSteamNetConnection * pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity * pIdentity1, const SteamNetworkingIdentity * pIdentity2)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair(_this->linux_side, pOutConnection1, pOutConnection2, bUseNetworkLoopback, pIdentity1, pIdentity2);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity, 8)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, SteamNetworkingIdentity * pIdentity)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity(_this->linux_side, pIdentity);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication, 4)
ESteamNetworkingAvailability __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus, 8)
ESteamNetworkingAvailability __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, SteamNetAuthenticationStatus_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus(_this->linux_side, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, const void * pvTicket, int cbTicket, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket(_this->linux_side, pvTicket, cbTicket, pOutParsedTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, const SteamNetworkingIdentity * identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer(_this->linux_side, identityGameServer, nVirtualPort, pOutParsedTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer, 12)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, const SteamNetworkingIdentity * identityTarget, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer(_this->linux_side, identityTarget, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort, 4)
uint16 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID, 4)
SteamNetworkingPOPID __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, SteamDatagramHostedAddress * pRouting)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress(_this->linux_side, pRouting);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket, 8)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket(_this->linux_side, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin, 16)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this, SteamDatagramGameCoordinatorServerLogin * pLoginInfo, int * pcbSignedBlob, void * pBlob)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin(_this->linux_side, pLoginInfo, pcbSignedBlob, pBlob);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_destructor, 4)
void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_destructor(winISteamNetworkingSockets_SteamNetworkingSockets004 *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingSockets_SteamNetworkingSockets004,
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets004_destructor)
    );
#ifndef __GNUC__
}
#endif

winISteamNetworkingSockets_SteamNetworkingSockets004 *create_winISteamNetworkingSockets_SteamNetworkingSockets004(void *linux_side)
{
    winISteamNetworkingSockets_SteamNetworkingSockets004 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworkingSockets_SteamNetworkingSockets004));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworkingSockets_SteamNetworkingSockets004_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets002.h"

typedef struct __winISteamNetworkingSockets_SteamNetworkingSockets002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingSockets_SteamNetworkingSockets002;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP, 8)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, const SteamNetworkingIPAddr * localAddress)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP(_this->linux_side, localAddress);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress, 8)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, const SteamNetworkingIPAddr * address)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress(_this->linux_side, address);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P, 8)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P(_this->linux_side, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P, 12)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, const SteamNetworkingIdentity * identityRemote, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P(_this->linux_side, identityRemote, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hConn)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection(_this->linux_side, hConn);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection, 20)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hPeer, int nReason, const char * pszDebug, bool bEnableLinger)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection(_this->linux_side, hPeer, nReason, pszDebug, bEnableLinger);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket, 8)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamListenSocket hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket(_this->linux_side, hSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hPeer, int64 nUserData)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData(_this->linux_side, hPeer, nUserData);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData, 8)
int64 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hPeer)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData(_this->linux_side, hPeer);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName, 12)
void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hPeer, const char * pszName)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName(_this->linux_side, hPeer, pszName);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hPeer, char * pszName, int nMaxLen)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName(_this->linux_side, hPeer, pszName, nMaxLen);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection, 20)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hConn, const void * pData, uint32 cbData, int nSendFlags)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection(_this->linux_side, hConn, pData, cbData, nSendFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection, 8)
EResult __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hConn)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection(_this->linux_side, hConn);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hConn, winSteamNetworkingMessage_t_144 ** ppOutMessages, int nMaxMessages)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection(_this->linux_side, hConn, ppOutMessages, nMaxMessages);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamListenSocket hSocket, winSteamNetworkingMessage_t_144 ** ppOutMessages, int nMaxMessages)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket(_this->linux_side, hSocket, ppOutMessages, nMaxMessages);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hConn, SteamNetConnectionInfo_t * pInfo)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo(_this->linux_side, hConn, pInfo);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus * pStats)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus(_this->linux_side, hConn, pStats);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection hConn, char * pszBuf, int cbBuf)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus(_this->linux_side, hConn, pszBuf, cbBuf);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress, 12)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamListenSocket hSocket, SteamNetworkingIPAddr * address)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress(_this->linux_side, hSocket, address);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair, 24)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, HSteamNetConnection * pOutConnection1, HSteamNetConnection * pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity * pIdentity1, const SteamNetworkingIdentity * pIdentity2)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair(_this->linux_side, pOutConnection1, pOutConnection2, bUseNetworkLoopback, pIdentity1, pIdentity2);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity, 8)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, SteamNetworkingIdentity * pIdentity)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity(_this->linux_side, pIdentity);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket, 16)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, const void * pvTicket, int cbTicket, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket(_this->linux_side, pvTicket, cbTicket, pOutParsedTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer, 16)
int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, const SteamNetworkingIdentity * identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket * pOutParsedTicket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer(_this->linux_side, identityGameServer, nVirtualPort, pOutParsedTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer, 12)
HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, const SteamNetworkingIdentity * identityTarget, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer(_this->linux_side, identityTarget, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort, 4)
uint16 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID, 4)
SteamNetworkingPOPID __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress, 8)
bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, SteamDatagramHostedAddress * pRouting)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress(_this->linux_side, pRouting);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket, 8)
HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket(_this->linux_side, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_destructor, 4)
void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_destructor(winISteamNetworkingSockets_SteamNetworkingSockets002 *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingSockets_SteamNetworkingSockets002,
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets002_destructor)
    );
#ifndef __GNUC__
}
#endif

winISteamNetworkingSockets_SteamNetworkingSockets002 *create_winISteamNetworkingSockets_SteamNetworkingSockets002(void *linux_side)
{
    winISteamNetworkingSockets_SteamNetworkingSockets002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworkingSockets_SteamNetworkingSockets002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworkingSockets_SteamNetworkingSockets002_vtable;
    r->linux_side = linux_side;
    return r;
}

