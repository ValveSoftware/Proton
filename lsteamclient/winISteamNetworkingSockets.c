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

