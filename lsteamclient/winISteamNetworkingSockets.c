/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingSockets_SteamNetworkingSockets002.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets002_destructor, 4)

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P(struct w_steam_iface *_this, int nVirtualPort)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, int nVirtualPort)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection(struct w_steam_iface *_this, HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket(struct w_steam_iface *_this, HSteamListenSocket hSocket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer, int64 nUserData)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData( &params );
    return params._ret;
}

int64 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, const char *pszName)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName( &params );
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, char *pszName, int nMaxLen)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, winSteamNetworkingMessage_t_144 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnConnection( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket(struct w_steam_iface *_this, HSteamListenSocket hSocket, winSteamNetworkingMessage_t_144 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceiveMessagesOnListenSocket( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStats = pStats,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, char *pszBuf, int cbBuf)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress(struct w_steam_iface *_this, HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair(struct w_steam_iface *_this, HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity *pIdentity)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nVirtualPort = nVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityTarget, int nVirtualPort)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer( &params );
    return params._ret;
}

uint16 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort( &params );
    return params._ret;
}

SteamNetworkingPOPID __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int nVirtualPort)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_destructor(struct w_steam_iface *_this)
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

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets002_vtable, 29, "SteamNetworkingSockets002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets004.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets004_destructor, 4)

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P(struct w_steam_iface *_this, int nVirtualPort)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, int nVirtualPort)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection(struct w_steam_iface *_this, HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket(struct w_steam_iface *_this, HSteamListenSocket hSocket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer, int64 nUserData)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData( &params );
    return params._ret;
}

int64 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, const char *pszName)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName( &params );
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, char *pszName, int nMaxLen)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, winSteamNetworkingMessage_t_146 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnConnection( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket(struct w_steam_iface *_this, HSteamListenSocket hSocket, winSteamNetworkingMessage_t_146 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceiveMessagesOnListenSocket( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStats = pStats,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, char *pszBuf, int cbBuf)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress(struct w_steam_iface *_this, HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair(struct w_steam_iface *_this, HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity *pIdentity)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus(struct w_steam_iface *_this, SteamNetAuthenticationStatus_t *pDetails)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nVirtualPort = nVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityTarget, int nVirtualPort)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer( &params );
    return params._ret;
}

uint16 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort( &params );
    return params._ret;
}

SteamNetworkingPOPID __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int nVirtualPort)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin(struct w_steam_iface *_this, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin_params params =
    {
        .linux_side = _this->u_iface,
        .pLoginInfo = pLoginInfo,
        .pcbSignedBlob = pcbSignedBlob,
        .pBlob = pBlob,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_destructor(struct w_steam_iface *_this)
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

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets004_vtable, 32, "SteamNetworkingSockets004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets006.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets006_destructor, 4)

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P(struct w_steam_iface *_this, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection(struct w_steam_iface *_this, HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket(struct w_steam_iface *_this, HSteamListenSocket hSocket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer, int64 nUserData)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData( &params );
    return params._ret;
}

int64 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, const char *pszName)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName( &params );
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, char *pszName, int nMaxLen)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
        .pOutMessageNumber = pOutMessageNumber,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages(struct w_steam_iface *_this, int nMessages, winSteamNetworkingMessage_t_147 **pMessages, int64 *pOutMessageNumberOrResult)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params params =
    {
        .linux_side = _this->u_iface,
        .nMessages = nMessages,
        .pMessages = pMessages,
        .pOutMessageNumberOrResult = pOutMessageNumberOrResult,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages( &params );
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, winSteamNetworkingMessage_t_147 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket(struct w_steam_iface *_this, HSteamListenSocket hSocket, winSteamNetworkingMessage_t_147 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStats = pStats,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, char *pszBuf, int cbBuf)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress(struct w_steam_iface *_this, HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair(struct w_steam_iface *_this, HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity *pIdentity)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus(struct w_steam_iface *_this, SteamNetAuthenticationStatus_t *pDetails)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nVirtualPort = nVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityTarget, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer( &params );
    return params._ret;
}

uint16 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort( &params );
    return params._ret;
}

SteamNetworkingPOPID __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin(struct w_steam_iface *_this, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin_params params =
    {
        .linux_side = _this->u_iface,
        .pLoginInfo = pLoginInfo,
        .pcbSignedBlob = pcbSignedBlob,
        .pBlob = pBlob,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling(struct w_steam_iface *_this, void /*ISteamNetworkingConnectionCustomSignaling*/ *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params params =
    {
        .linux_side = _this->u_iface,
        .pSignaling = pSignaling,
        .pPeerIdentity = pPeerIdentity,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal(struct w_steam_iface *_this, const void *pMsg, int cbMsg, void /*ISteamNetworkingCustomSignalingRecvContext*/ *pContext)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
        .pContext = pContext,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_destructor(struct w_steam_iface *_this)
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

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets006_vtable, 35, "SteamNetworkingSockets006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets008.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets008_destructor, 4)

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P(struct w_steam_iface *_this, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection(struct w_steam_iface *_this, HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket(struct w_steam_iface *_this, HSteamListenSocket hSocket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer, int64 nUserData)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData( &params );
    return params._ret;
}

int64 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, const char *pszName)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName( &params );
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, char *pszName, int nMaxLen)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
        .pOutMessageNumber = pOutMessageNumber,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages(struct w_steam_iface *_this, int nMessages, winSteamNetworkingMessage_t_149 *const *pMessages, int64 *pOutMessageNumberOrResult)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages_params params =
    {
        .linux_side = _this->u_iface,
        .nMessages = nMessages,
        .pMessages = pMessages,
        .pOutMessageNumberOrResult = pOutMessageNumberOrResult,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_SendMessages( &params );
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, winSteamNetworkingMessage_t_149 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStats = pStats,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, char *pszBuf, int cbBuf)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress(struct w_steam_iface *_this, HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair(struct w_steam_iface *_this, HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity *pIdentity)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus(struct w_steam_iface *_this, SteamNetAuthenticationStatus_t *pDetails)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus( &params );
    return params._ret;
}

HSteamNetPollGroup __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup(struct w_steam_iface *_this, HSteamNetPollGroup hPollGroup)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup(struct w_steam_iface *_this, HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup(struct w_steam_iface *_this, HSteamNetPollGroup hPollGroup, winSteamNetworkingMessage_t_149 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceiveMessagesOnPollGroup( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nVirtualPort = nVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityTarget, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer( &params );
    return params._ret;
}

uint16 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort( &params );
    return params._ret;
}

SteamNetworkingPOPID __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int nVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin(struct w_steam_iface *_this, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin_params params =
    {
        .linux_side = _this->u_iface,
        .pLoginInfo = pLoginInfo,
        .pcbSignedBlob = pcbSignedBlob,
        .pBlob = pBlob,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling(struct w_steam_iface *_this, void /*ISteamNetworkingConnectionCustomSignaling*/ *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling_params params =
    {
        .linux_side = _this->u_iface,
        .pSignaling = pSignaling,
        .pPeerIdentity = pPeerIdentity,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal(struct w_steam_iface *_this, const void *pMsg, int cbMsg, void /*ISteamNetworkingCustomSignalingRecvContext*/ *pContext)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
        .pContext = pContext,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest(struct w_steam_iface *_this, int *pcbBlob, void *pBlob, SteamNetworkingErrMsg *errMsg)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pcbBlob = pcbBlob,
        .pBlob = pBlob,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate(struct w_steam_iface *_this, const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg *errMsg)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate_params params =
    {
        .linux_side = _this->u_iface,
        .pCertificate = pCertificate,
        .cbCertificate = cbCertificate,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_destructor(struct w_steam_iface *_this)
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

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets008_vtable, 40, "SteamNetworkingSockets008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets009.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets009_destructor, 4)

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P(struct w_steam_iface *_this, int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nLocalVirtualPort = nLocalVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection(struct w_steam_iface *_this, HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket(struct w_steam_iface *_this, HSteamListenSocket hSocket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer, int64 nUserData)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData( &params );
    return params._ret;
}

int64 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, const char *pszName)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName( &params );
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, char *pszName, int nMaxLen)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
        .pOutMessageNumber = pOutMessageNumber,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages(struct w_steam_iface *_this, int nMessages, winSteamNetworkingMessage_t_152 *const *pMessages, int64 *pOutMessageNumberOrResult)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages_params params =
    {
        .linux_side = _this->u_iface,
        .nMessages = nMessages,
        .pMessages = pMessages,
        .pOutMessageNumberOrResult = pOutMessageNumberOrResult,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages( &params );
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, winSteamNetworkingMessage_t_152 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStats = pStats,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, char *pszBuf, int cbBuf)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress(struct w_steam_iface *_this, HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair(struct w_steam_iface *_this, HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity *pIdentity)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus(struct w_steam_iface *_this, SteamNetAuthenticationStatus_t *pDetails)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus( &params );
    return params._ret;
}

HSteamNetPollGroup __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup(struct w_steam_iface *_this, HSteamNetPollGroup hPollGroup)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup(struct w_steam_iface *_this, HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup(struct w_steam_iface *_this, HSteamNetPollGroup hPollGroup, winSteamNetworkingMessage_t_152 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityGameServer, int nRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityTarget, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer( &params );
    return params._ret;
}

uint16 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort( &params );
    return params._ret;
}

SteamNetworkingPOPID __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nLocalVirtualPort = nLocalVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin(struct w_steam_iface *_this, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params params =
    {
        .linux_side = _this->u_iface,
        .pLoginInfo = pLoginInfo,
        .pcbSignedBlob = pcbSignedBlob,
        .pBlob = pBlob,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling(struct w_steam_iface *_this, void /*ISteamNetworkingConnectionSignaling*/ *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params params =
    {
        .linux_side = _this->u_iface,
        .pSignaling = pSignaling,
        .pPeerIdentity = pPeerIdentity,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal(struct w_steam_iface *_this, const void *pMsg, int cbMsg, void /*ISteamNetworkingSignalingRecvContext*/ *pContext)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
        .pContext = pContext,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest(struct w_steam_iface *_this, int *pcbBlob, void *pBlob, SteamNetworkingErrMsg *errMsg)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pcbBlob = pcbBlob,
        .pBlob = pBlob,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate(struct w_steam_iface *_this, const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg *errMsg)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params params =
    {
        .linux_side = _this->u_iface,
        .pCertificate = pCertificate,
        .cbCertificate = cbCertificate,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks( &params );
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingSockets_SteamNetworkingSockets009,
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_SendMessages)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_ReceiveMessagesOnPollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets009_destructor)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets009_vtable, 41, "SteamNetworkingSockets009");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworkingSockets_SteamNetworkingSockets012.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSockets_SteamNetworkingSockets012_destructor, 4)

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P(struct w_steam_iface *_this, int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nLocalVirtualPort = nLocalVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityRemote, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection(struct w_steam_iface *_this, HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket(struct w_steam_iface *_this, HSteamListenSocket hSocket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer, int64 nUserData)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData( &params );
    return params._ret;
}

int64 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData(struct w_steam_iface *_this, HSteamNetConnection hPeer)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, const char *pszName)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName( &params );
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName(struct w_steam_iface *_this, HSteamNetConnection hPeer, char *pszName, int nMaxLen)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags, int64 *pOutMessageNumber)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
        .pOutMessageNumber = pOutMessageNumber,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages(struct w_steam_iface *_this, int nMessages, winSteamNetworkingMessage_t_158 *const *pMessages, int64 *pOutMessageNumberOrResult)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages_params params =
    {
        .linux_side = _this->u_iface,
        .nMessages = nMessages,
        .pMessages = pMessages,
        .pOutMessageNumberOrResult = pOutMessageNumberOrResult,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages( &params );
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, winSteamNetworkingMessage_t_158 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetConnectionRealTimeStatus_t *pStatus, int nLanes, SteamNetConnectionRealTimeLaneStatus_t *pLanes)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStatus = pStatus,
        .nLanes = nLanes,
        .pLanes = pLanes,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus(struct w_steam_iface *_this, HSteamNetConnection hConn, char *pszBuf, int cbBuf)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress(struct w_steam_iface *_this, HSteamListenSocket hSocket, SteamNetworkingIPAddr *address)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair(struct w_steam_iface *_this, HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes(struct w_steam_iface *_this, HSteamNetConnection hConn, int nNumLanes, const int *pLanePriorities, const uint16 *pLaneWeights)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .nNumLanes = nNumLanes,
        .pLanePriorities = pLanePriorities,
        .pLaneWeights = pLaneWeights,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity *pIdentity)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus(struct w_steam_iface *_this, SteamNetAuthenticationStatus_t *pDetails)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus( &params );
    return params._ret;
}

HSteamNetPollGroup __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup(struct w_steam_iface *_this, HSteamNetPollGroup hPollGroup)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup(struct w_steam_iface *_this, HSteamNetConnection hConn, HSteamNetPollGroup hPollGroup)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup(struct w_steam_iface *_this, HSteamNetPollGroup hPollGroup, winSteamNetworkingMessage_t_158 **ppOutMessages, int nMaxMessages)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
        .ppOutMessages = ppOutMessages,
        .nMaxMessages = nMaxMessages,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityGameServer, int nRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity *identityTarget, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer( &params );
    return params._ret;
}

uint16 __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort( &params );
    return params._ret;
}

SteamNetworkingPOPID __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress( &params );
    return params._ret;
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int nLocalVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nLocalVirtualPort = nLocalVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin(struct w_steam_iface *_this, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int *pcbSignedBlob, void *pBlob)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin_params params =
    {
        .linux_side = _this->u_iface,
        .pLoginInfo = pLoginInfo,
        .pcbSignedBlob = pcbSignedBlob,
        .pBlob = pBlob,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin( &params );
    return params._ret;
}

HSteamNetConnection __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling(struct w_steam_iface *_this, void /*ISteamNetworkingConnectionSignaling*/ *pSignaling, const SteamNetworkingIdentity *pPeerIdentity, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling_params params =
    {
        .linux_side = _this->u_iface,
        .pSignaling = pSignaling,
        .pPeerIdentity = pPeerIdentity,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal(struct w_steam_iface *_this, const void *pMsg, int cbMsg, void /*ISteamNetworkingSignalingRecvContext*/ *pContext)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
        .pContext = pContext,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest(struct w_steam_iface *_this, int *pcbBlob, void *pBlob, SteamNetworkingErrMsg *errMsg)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pcbBlob = pcbBlob,
        .pBlob = pBlob,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest( &params );
    return params._ret;
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate(struct w_steam_iface *_this, const void *pCertificate, int cbCertificate, SteamNetworkingErrMsg *errMsg)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate_params params =
    {
        .linux_side = _this->u_iface,
        .pCertificate = pCertificate,
        .cbCertificate = cbCertificate,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity(struct w_steam_iface *_this, const SteamNetworkingIdentity *pIdentity)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity( &params );
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks( &params );
}

bool __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP(struct w_steam_iface *_this, int nNumPorts)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP_params params =
    {
        .linux_side = _this->u_iface,
        .nNumPorts = nNumPorts,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP(struct w_steam_iface *_this, int idxFirstPort, SteamNetworkingFakeIPResult_t *pInfo)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP_params params =
    {
        .linux_side = _this->u_iface,
        .idxFirstPort = idxFirstPort,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP( &params );
}

HSteamListenSocket __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP(struct w_steam_iface *_this, int idxFakePort, int nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP_params params =
    {
        .linux_side = _this->u_iface,
        .idxFakePort = idxFakePort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP( &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection(struct w_steam_iface *_this, HSteamNetConnection hConn, SteamNetworkingIPAddr *pOutAddr)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pOutAddr = pOutAddr,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection( &params );
    return params._ret;
}

void /*ISteamNetworkingFakeUDPPort*/ * __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort(struct w_steam_iface *_this, int idxFakeServerPort)
{
    struct cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort_params params =
    {
        .linux_side = _this->u_iface,
        .idxFakeServerPort = idxFakeServerPort,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingSockets_SteamNetworkingSockets012,
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_SendMessages)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_ReceiveMessagesOnPollGroup)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort)
        VTABLE_ADD_FUNC(winISteamNetworkingSockets_SteamNetworkingSockets012_destructor)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets012_vtable, 48, "SteamNetworkingSockets012");
    r->u_iface = u_iface;
    return r;
}

