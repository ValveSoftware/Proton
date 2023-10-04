/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketIP, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_ConnectByIPAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P(struct w_steam_iface *_this, int32_t nVirtualPort)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_CreateListenSocketP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote, int32_t nVirtualPort)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_ConnectP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_AcceptConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection(struct w_steam_iface *_this, uint32_t hPeer, int32_t nReason, const char *pszDebug, int8_t bEnableLinger)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_CloseConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_CloseListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer, int64_t nUserData)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionUserData, &params );
    return params._ret;
}

int64_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionUserData, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, const char *pszName)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_SetConnectionName, &params );
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, char *pszName, int32_t nMaxLen)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection(struct w_steam_iface *_this, uint32_t hConn, const void *pData, uint32_t cbData, int32_t nSendFlags)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_SendMessageToConnection, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_FlushMessagesOnConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo(struct w_steam_iface *_this, uint32_t hConn, SteamNetConnectionInfo_t_144 *pInfo)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_GetConnectionInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStats = pStats,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_GetQuickConnectionStatus, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, char *pszBuf, int32_t cbBuf)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_GetDetailedConnectionStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress(struct w_steam_iface *_this, uint32_t hSocket, SteamNetworkingIPAddr *address)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_GetListenSocketAddress, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair(struct w_steam_iface *_this, uint32_t *pOutConnection1, uint32_t *pOutConnection2, int8_t bUseNetworkLoopback, const SteamNetworkingIdentity_144 *pIdentity1, const SteamNetworkingIdentity_144 *pIdentity2)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_CreateSocketPair, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity_144 *pIdentity)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_GetIdentity, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int32_t cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_ReceivedRelayAuthTicket, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityGameServer, int32_t nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nVirtualPort = nVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_FindRelayAuthTicketForServer, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityTarget, int32_t nVirtualPort)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_ConnectToHostedDedicatedServer, &params );
    return params._ret;
}

uint16_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPort, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerPOPID, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_GetHostedDedicatedServerAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int32_t nVirtualPort)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets002_CreateHostedDedicatedServerListenSocket, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets002_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets002_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingSockets_SteamNetworkingSockets002, 0, ".?AVISteamNetworkingSockets@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingSockets_SteamNetworkingSockets002_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets002_vtable, 29, "SteamNetworkingSockets002");
    r->u_iface = u_iface;
    return r;
}

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

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketIP, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectByIPAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P(struct w_steam_iface *_this, int32_t nVirtualPort)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_CreateListenSocketP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote, int32_t nVirtualPort)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_AcceptConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection(struct w_steam_iface *_this, uint32_t hPeer, int32_t nReason, const char *pszDebug, int8_t bEnableLinger)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_CloseConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_CloseListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer, int64_t nUserData)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionUserData, &params );
    return params._ret;
}

int64_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionUserData, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, const char *pszName)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_SetConnectionName, &params );
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, char *pszName, int32_t nMaxLen)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection(struct w_steam_iface *_this, uint32_t hConn, const void *pData, uint32_t cbData, int32_t nSendFlags)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_SendMessageToConnection, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_FlushMessagesOnConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo(struct w_steam_iface *_this, uint32_t hConn, SteamNetConnectionInfo_t_144 *pInfo)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetConnectionInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStats = pStats,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetQuickConnectionStatus, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, char *pszBuf, int32_t cbBuf)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetDetailedConnectionStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress(struct w_steam_iface *_this, uint32_t hSocket, SteamNetworkingIPAddr *address)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetListenSocketAddress, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair(struct w_steam_iface *_this, uint32_t *pOutConnection1, uint32_t *pOutConnection2, int8_t bUseNetworkLoopback, const SteamNetworkingIdentity_144 *pIdentity1, const SteamNetworkingIdentity_144 *pIdentity2)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_CreateSocketPair, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity_144 *pIdentity)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetIdentity, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_InitAuthentication, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus(struct w_steam_iface *_this, SteamNetAuthenticationStatus_t *pDetails)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetAuthenticationStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int32_t cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_ReceivedRelayAuthTicket, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityGameServer, int32_t nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nVirtualPort = nVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_FindRelayAuthTicketForServer, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityTarget, int32_t nVirtualPort)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_ConnectToHostedDedicatedServer, &params );
    return params._ret;
}

uint16_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPort, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerPOPID, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetHostedDedicatedServerAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int32_t nVirtualPort)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_CreateHostedDedicatedServerListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin(struct w_steam_iface *_this, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int32_t *pcbSignedBlob, void *pBlob)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin_params params =
    {
        .linux_side = _this->u_iface,
        .pLoginInfo = pLoginInfo,
        .pcbSignedBlob = pcbSignedBlob,
        .pBlob = pBlob,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets004_GetGameCoordinatorServerLogin, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets004_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets004_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingSockets_SteamNetworkingSockets004, 0, ".?AVISteamNetworkingSockets@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingSockets_SteamNetworkingSockets004_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets004_vtable, 32, "SteamNetworkingSockets004");
    r->u_iface = u_iface;
    return r;
}

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

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P(struct w_steam_iface *_this, int32_t nVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote, int32_t nVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection(struct w_steam_iface *_this, uint32_t hPeer, int32_t nReason, const char *pszDebug, int8_t bEnableLinger)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer, int64_t nUserData)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData, &params );
    return params._ret;
}

int64_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, const char *pszName)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName, &params );
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, char *pszName, int32_t nMaxLen)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection(struct w_steam_iface *_this, uint32_t hConn, const void *pData, uint32_t cbData, int32_t nSendFlags, int64_t *pOutMessageNumber)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
        .pOutMessageNumber = pOutMessageNumber,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo(struct w_steam_iface *_this, uint32_t hConn, SteamNetConnectionInfo_t_144 *pInfo)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStats = pStats,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, char *pszBuf, int32_t cbBuf)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress(struct w_steam_iface *_this, uint32_t hSocket, SteamNetworkingIPAddr *address)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair(struct w_steam_iface *_this, uint32_t *pOutConnection1, uint32_t *pOutConnection2, int8_t bUseNetworkLoopback, const SteamNetworkingIdentity_144 *pIdentity1, const SteamNetworkingIdentity_144 *pIdentity2)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity_144 *pIdentity)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus(struct w_steam_iface *_this, SteamNetAuthenticationStatus_t *pDetails)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int32_t cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityGameServer, int32_t nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nVirtualPort = nVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityTarget, int32_t nVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer, &params );
    return params._ret;
}

uint16_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int32_t nVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin(struct w_steam_iface *_this, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int32_t *pcbSignedBlob, void *pBlob)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin_params params =
    {
        .linux_side = _this->u_iface,
        .pLoginInfo = pLoginInfo,
        .pcbSignedBlob = pcbSignedBlob,
        .pBlob = pBlob,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling(struct w_steam_iface *_this, w_ISteamNetworkingConnectionCustomSignaling *pSignaling, const SteamNetworkingIdentity_144 *pPeerIdentity, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling_params params =
    {
        .linux_side = _this->u_iface,
        .pSignaling = pSignaling,
        .pPeerIdentity = pPeerIdentity,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal(struct w_steam_iface *_this, const void *pMsg, int32_t cbMsg, w_ISteamNetworkingCustomSignalingRecvContext *pContext)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
        .pContext = pContext,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets006_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets006_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingSockets_SteamNetworkingSockets006, 0, ".?AVISteamNetworkingSockets@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingSockets_SteamNetworkingSockets006_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets006_vtable, 35, "SteamNetworkingSockets006");
    r->u_iface = u_iface;
    return r;
}

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

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketIP, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectByIPAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P(struct w_steam_iface *_this, int32_t nVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_CreateListenSocketP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote, int32_t nVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_AcceptConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection(struct w_steam_iface *_this, uint32_t hPeer, int32_t nReason, const char *pszDebug, int8_t bEnableLinger)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_CloseConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_CloseListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer, int64_t nUserData)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionUserData, &params );
    return params._ret;
}

int64_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionUserData, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, const char *pszName)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionName, &params );
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, char *pszName, int32_t nMaxLen)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection(struct w_steam_iface *_this, uint32_t hConn, const void *pData, uint32_t cbData, int32_t nSendFlags, int64_t *pOutMessageNumber)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
        .pOutMessageNumber = pOutMessageNumber,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_SendMessageToConnection, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_FlushMessagesOnConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo(struct w_steam_iface *_this, uint32_t hConn, SteamNetConnectionInfo_t_144 *pInfo)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetConnectionInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStats = pStats,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetQuickConnectionStatus, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, char *pszBuf, int32_t cbBuf)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetDetailedConnectionStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress(struct w_steam_iface *_this, uint32_t hSocket, SteamNetworkingIPAddr *address)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetListenSocketAddress, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair(struct w_steam_iface *_this, uint32_t *pOutConnection1, uint32_t *pOutConnection2, int8_t bUseNetworkLoopback, const SteamNetworkingIdentity_144 *pIdentity1, const SteamNetworkingIdentity_144 *pIdentity2)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_CreateSocketPair, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity_144 *pIdentity)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetIdentity, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_InitAuthentication, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus(struct w_steam_iface *_this, SteamNetAuthenticationStatus_t *pDetails)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetAuthenticationStatus, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_CreatePollGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup(struct w_steam_iface *_this, uint32_t hPollGroup)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_DestroyPollGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup(struct w_steam_iface *_this, uint32_t hConn, uint32_t hPollGroup)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_SetConnectionPollGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int32_t cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedRelayAuthTicket, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityGameServer, int32_t nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nVirtualPort = nVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_FindRelayAuthTicketForServer, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityTarget, int32_t nVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectToHostedDedicatedServer, &params );
    return params._ret;
}

uint16_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPort, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerPOPID, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetHostedDedicatedServerAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int32_t nVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualPort = nVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_CreateHostedDedicatedServerListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin(struct w_steam_iface *_this, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int32_t *pcbSignedBlob, void *pBlob)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin_params params =
    {
        .linux_side = _this->u_iface,
        .pLoginInfo = pLoginInfo,
        .pcbSignedBlob = pcbSignedBlob,
        .pBlob = pBlob,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetGameCoordinatorServerLogin, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling(struct w_steam_iface *_this, w_ISteamNetworkingConnectionCustomSignaling *pSignaling, const SteamNetworkingIdentity_144 *pPeerIdentity, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling_params params =
    {
        .linux_side = _this->u_iface,
        .pSignaling = pSignaling,
        .pPeerIdentity = pPeerIdentity,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_ConnectP2PCustomSignaling, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal(struct w_steam_iface *_this, const void *pMsg, int32_t cbMsg, w_ISteamNetworkingCustomSignalingRecvContext *pContext)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
        .pContext = pContext,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_ReceivedP2PCustomSignal, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest(struct w_steam_iface *_this, int32_t *pcbBlob, void *pBlob, char (*errMsg)[1024])
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pcbBlob = pcbBlob,
        .pBlob = pBlob,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_GetCertificateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate(struct w_steam_iface *_this, const void *pCertificate, int32_t cbCertificate, char (*errMsg)[1024])
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate_params params =
    {
        .linux_side = _this->u_iface,
        .pCertificate = pCertificate,
        .cbCertificate = cbCertificate,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets008_SetCertificate, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets008_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets008_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingSockets_SteamNetworkingSockets008, 0, ".?AVISteamNetworkingSockets@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingSockets_SteamNetworkingSockets008_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets008_vtable, 40, "SteamNetworkingSockets008");
    r->u_iface = u_iface;
    return r;
}

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

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketIP, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectByIPAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P(struct w_steam_iface *_this, int32_t nLocalVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nLocalVirtualPort = nLocalVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_CreateListenSocketP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote, int32_t nRemoteVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_AcceptConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection(struct w_steam_iface *_this, uint32_t hPeer, int32_t nReason, const char *pszDebug, int8_t bEnableLinger)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_CloseConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_CloseListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer, int64_t nUserData)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionUserData, &params );
    return params._ret;
}

int64_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionUserData, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, const char *pszName)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionName, &params );
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, char *pszName, int32_t nMaxLen)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection(struct w_steam_iface *_this, uint32_t hConn, const void *pData, uint32_t cbData, int32_t nSendFlags, int64_t *pOutMessageNumber)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
        .pOutMessageNumber = pOutMessageNumber,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_SendMessageToConnection, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_FlushMessagesOnConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo(struct w_steam_iface *_this, uint32_t hConn, SteamNetConnectionInfo_t_144 *pInfo)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetConnectionInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, SteamNetworkingQuickConnectionStatus *pStats)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStats = pStats,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetQuickConnectionStatus, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, char *pszBuf, int32_t cbBuf)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetDetailedConnectionStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress(struct w_steam_iface *_this, uint32_t hSocket, SteamNetworkingIPAddr *address)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetListenSocketAddress, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair(struct w_steam_iface *_this, uint32_t *pOutConnection1, uint32_t *pOutConnection2, int8_t bUseNetworkLoopback, const SteamNetworkingIdentity_144 *pIdentity1, const SteamNetworkingIdentity_144 *pIdentity2)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_CreateSocketPair, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity_144 *pIdentity)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetIdentity, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_InitAuthentication, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus(struct w_steam_iface *_this, SteamNetAuthenticationStatus_t *pDetails)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetAuthenticationStatus, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_CreatePollGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup(struct w_steam_iface *_this, uint32_t hPollGroup)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_DestroyPollGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup(struct w_steam_iface *_this, uint32_t hConn, uint32_t hPollGroup)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_SetConnectionPollGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int32_t cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedRelayAuthTicket, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityGameServer, int32_t nRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_FindRelayAuthTicketForServer, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityTarget, int32_t nRemoteVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectToHostedDedicatedServer, &params );
    return params._ret;
}

uint16_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPort, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerPOPID, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetHostedDedicatedServerAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int32_t nLocalVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nLocalVirtualPort = nLocalVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_CreateHostedDedicatedServerListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin(struct w_steam_iface *_this, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int32_t *pcbSignedBlob, void *pBlob)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin_params params =
    {
        .linux_side = _this->u_iface,
        .pLoginInfo = pLoginInfo,
        .pcbSignedBlob = pcbSignedBlob,
        .pBlob = pBlob,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetGameCoordinatorServerLogin, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling(struct w_steam_iface *_this, void /*ISteamNetworkingConnectionSignaling*/ *pSignaling, const SteamNetworkingIdentity_144 *pPeerIdentity, int32_t nRemoteVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling_params params =
    {
        .linux_side = _this->u_iface,
        .pSignaling = pSignaling,
        .pPeerIdentity = pPeerIdentity,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_ConnectP2PCustomSignaling, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal(struct w_steam_iface *_this, const void *pMsg, int32_t cbMsg, void /*ISteamNetworkingSignalingRecvContext*/ *pContext)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
        .pContext = pContext,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_ReceivedP2PCustomSignal, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest(struct w_steam_iface *_this, int32_t *pcbBlob, void *pBlob, char (*errMsg)[1024])
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pcbBlob = pcbBlob,
        .pBlob = pBlob,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_GetCertificateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate(struct w_steam_iface *_this, const void *pCertificate, int32_t cbCertificate, char (*errMsg)[1024])
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate_params params =
    {
        .linux_side = _this->u_iface,
        .pCertificate = pCertificate,
        .cbCertificate = cbCertificate,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_SetCertificate, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets009_RunCallbacks, &params );
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets009_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets009_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingSockets_SteamNetworkingSockets009, 0, ".?AVISteamNetworkingSockets@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingSockets_SteamNetworkingSockets009_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets009_vtable, 41, "SteamNetworkingSockets009");
    r->u_iface = u_iface;
    return r;
}

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

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP(struct w_steam_iface *_this, const SteamNetworkingIPAddr *localAddress, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP_params params =
    {
        .linux_side = _this->u_iface,
        .localAddress = localAddress,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketIP, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress(struct w_steam_iface *_this, const SteamNetworkingIPAddr *address, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress_params params =
    {
        .linux_side = _this->u_iface,
        .address = address,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectByIPAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P(struct w_steam_iface *_this, int32_t nLocalVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P_params params =
    {
        .linux_side = _this->u_iface,
        .nLocalVirtualPort = nLocalVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityRemote, int32_t nRemoteVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P_params params =
    {
        .linux_side = _this->u_iface,
        .identityRemote = identityRemote,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2P, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_AcceptConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection(struct w_steam_iface *_this, uint32_t hPeer, int32_t nReason, const char *pszDebug, int8_t bEnableLinger)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nReason = nReason,
        .pszDebug = pszDebug,
        .bEnableLinger = bEnableLinger,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_CloseConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_CloseListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer, int64_t nUserData)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .nUserData = nUserData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionUserData, &params );
    return params._ret;
}

int64_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData(struct w_steam_iface *_this, uint32_t hPeer)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionUserData, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, const char *pszName)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionName, &params );
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName(struct w_steam_iface *_this, uint32_t hPeer, char *pszName, int32_t nMaxLen)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName_params params =
    {
        .linux_side = _this->u_iface,
        .hPeer = hPeer,
        .pszName = pszName,
        .nMaxLen = nMaxLen,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection(struct w_steam_iface *_this, uint32_t hConn, const void *pData, uint32_t cbData, int32_t nSendFlags, int64_t *pOutMessageNumber)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pData = pData,
        .cbData = cbData,
        .nSendFlags = nSendFlags,
        .pOutMessageNumber = pOutMessageNumber,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_SendMessageToConnection, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection(struct w_steam_iface *_this, uint32_t hConn)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_FlushMessagesOnConnection, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo(struct w_steam_iface *_this, uint32_t hConn, SteamNetConnectionInfo_t_153a *pInfo)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionInfo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus(struct w_steam_iface *_this, uint32_t hConn, SteamNetConnectionRealTimeStatus_t *pStatus, int32_t nLanes, SteamNetConnectionRealTimeLaneStatus_t *pLanes)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pStatus = pStatus,
        .nLanes = nLanes,
        .pLanes = pLanes,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetConnectionRealTimeStatus, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus(struct w_steam_iface *_this, uint32_t hConn, char *pszBuf, int32_t cbBuf)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pszBuf = pszBuf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetDetailedConnectionStatus, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress(struct w_steam_iface *_this, uint32_t hSocket, SteamNetworkingIPAddr *address)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .address = address,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetListenSocketAddress, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair(struct w_steam_iface *_this, uint32_t *pOutConnection1, uint32_t *pOutConnection2, int8_t bUseNetworkLoopback, const SteamNetworkingIdentity_144 *pIdentity1, const SteamNetworkingIdentity_144 *pIdentity2)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair_params params =
    {
        .linux_side = _this->u_iface,
        .pOutConnection1 = pOutConnection1,
        .pOutConnection2 = pOutConnection2,
        .bUseNetworkLoopback = bUseNetworkLoopback,
        .pIdentity1 = pIdentity1,
        .pIdentity2 = pIdentity2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_CreateSocketPair, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes(struct w_steam_iface *_this, uint32_t hConn, int32_t nNumLanes, const int32_t *pLanePriorities, const uint16_t *pLaneWeights)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .nNumLanes = nNumLanes,
        .pLanePriorities = pLanePriorities,
        .pLaneWeights = pLaneWeights,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_ConfigureConnectionLanes, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity(struct w_steam_iface *_this, SteamNetworkingIdentity_144 *pIdentity)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetIdentity, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_InitAuthentication, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus(struct w_steam_iface *_this, SteamNetAuthenticationStatus_t *pDetails)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus_params params =
    {
        .linux_side = _this->u_iface,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetAuthenticationStatus, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_CreatePollGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup(struct w_steam_iface *_this, uint32_t hPollGroup)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_DestroyPollGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup(struct w_steam_iface *_this, uint32_t hConn, uint32_t hPollGroup)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .hPollGroup = hPollGroup,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_SetConnectionPollGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket(struct w_steam_iface *_this, const void *pvTicket, int32_t cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pvTicket = pvTicket,
        .cbTicket = cbTicket,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedRelayAuthTicket, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityGameServer, int32_t nRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityGameServer = identityGameServer,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .pOutParsedTicket = pOutParsedTicket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_FindRelayAuthTicketForServer, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *identityTarget, int32_t nRemoteVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer_params params =
    {
        .linux_side = _this->u_iface,
        .identityTarget = identityTarget,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectToHostedDedicatedServer, &params );
    return params._ret;
}

uint16_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPort, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerPOPID, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress(struct w_steam_iface *_this, SteamDatagramHostedAddress *pRouting)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress_params params =
    {
        .linux_side = _this->u_iface,
        .pRouting = pRouting,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetHostedDedicatedServerAddress, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket(struct w_steam_iface *_this, int32_t nLocalVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nLocalVirtualPort = nLocalVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_CreateHostedDedicatedServerListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin(struct w_steam_iface *_this, SteamDatagramGameCoordinatorServerLogin *pLoginInfo, int32_t *pcbSignedBlob, void *pBlob)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin_params params =
    {
        .linux_side = _this->u_iface,
        .pLoginInfo = pLoginInfo,
        .pcbSignedBlob = pcbSignedBlob,
        .pBlob = pBlob,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetGameCoordinatorServerLogin, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling(struct w_steam_iface *_this, void /*ISteamNetworkingConnectionSignaling*/ *pSignaling, const SteamNetworkingIdentity_144 *pPeerIdentity, int32_t nRemoteVirtualPort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling_params params =
    {
        .linux_side = _this->u_iface,
        .pSignaling = pSignaling,
        .pPeerIdentity = pPeerIdentity,
        .nRemoteVirtualPort = nRemoteVirtualPort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_ConnectP2PCustomSignaling, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal(struct w_steam_iface *_this, const void *pMsg, int32_t cbMsg, void /*ISteamNetworkingSignalingRecvContext*/ *pContext)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
        .pContext = pContext,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_ReceivedP2PCustomSignal, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest(struct w_steam_iface *_this, int32_t *pcbBlob, void *pBlob, char (*errMsg)[1024])
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pcbBlob = pcbBlob,
        .pBlob = pBlob,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetCertificateRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate(struct w_steam_iface *_this, const void *pCertificate, int32_t cbCertificate, char (*errMsg)[1024])
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate_params params =
    {
        .linux_side = _this->u_iface,
        .pCertificate = pCertificate,
        .cbCertificate = cbCertificate,
        .errMsg = errMsg,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_SetCertificate, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity(struct w_steam_iface *_this, const SteamNetworkingIdentity_144 *pIdentity)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity_params params =
    {
        .linux_side = _this->u_iface,
        .pIdentity = pIdentity,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_ResetIdentity, &params );
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks(struct w_steam_iface *_this)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_RunCallbacks, &params );
}

int8_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP(struct w_steam_iface *_this, int32_t nNumPorts)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP_params params =
    {
        .linux_side = _this->u_iface,
        .nNumPorts = nNumPorts,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_BeginAsyncRequestFakeIP, &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP(struct w_steam_iface *_this, int32_t idxFirstPort, SteamNetworkingFakeIPResult_t *pInfo)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP_params params =
    {
        .linux_side = _this->u_iface,
        .idxFirstPort = idxFirstPort,
        .pInfo = pInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetFakeIP, &params );
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP(struct w_steam_iface *_this, int32_t idxFakePort, int32_t nOptions, const SteamNetworkingConfigValue_t *pOptions)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP_params params =
    {
        .linux_side = _this->u_iface,
        .idxFakePort = idxFakePort,
        .nOptions = nOptions,
        .pOptions = pOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_CreateListenSocketP2PFakeIP, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection(struct w_steam_iface *_this, uint32_t hConn, SteamNetworkingIPAddr *pOutAddr)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection_params params =
    {
        .linux_side = _this->u_iface,
        .hConn = hConn,
        .pOutAddr = pOutAddr,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_GetRemoteFakeIPForConnection, &params );
    return params._ret;
}

void /*ISteamNetworkingFakeUDPPort*/ * __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort(struct w_steam_iface *_this, int32_t idxFakeServerPort)
{
    struct ISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort_params params =
    {
        .linux_side = _this->u_iface,
        .idxFakeServerPort = idxFakeServerPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworkingSockets_SteamNetworkingSockets012_CreateFakeUDPPort, &params );
    params._ret = create_winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001( params._ret );
    return params._ret;
}

void __thiscall winISteamNetworkingSockets_SteamNetworkingSockets012_destructor(struct w_steam_iface *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingSockets_SteamNetworkingSockets012_vtable;

DEFINE_RTTI_DATA0(winISteamNetworkingSockets_SteamNetworkingSockets012, 0, ".?AVISteamNetworkingSockets@@")

__ASM_BLOCK_BEGIN(winISteamNetworkingSockets_SteamNetworkingSockets012_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworkingSockets_SteamNetworkingSockets012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSockets012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSockets_SteamNetworkingSockets012_vtable, 48, "SteamNetworkingSockets012");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamNetworkingSockets_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamNetworkingSockets_SteamNetworkingSockets002_rtti( base );
    init_winISteamNetworkingSockets_SteamNetworkingSockets004_rtti( base );
    init_winISteamNetworkingSockets_SteamNetworkingSockets006_rtti( base );
    init_winISteamNetworkingSockets_SteamNetworkingSockets008_rtti( base );
    init_winISteamNetworkingSockets_SteamNetworkingSockets009_rtti( base );
    init_winISteamNetworkingSockets_SteamNetworkingSockets012_rtti( base );
#endif /* __x86_64__ */
}
