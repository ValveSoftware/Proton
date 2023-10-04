/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_CreateListenSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_CreateConnectionSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_DestroySocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_DestroyListenSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_SendDataOnSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_RetrieveDataFromSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_IsDataAvailable, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_RetrieveData, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_GetSocketInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_GetListenSocketInfo, 16)

uint32_t __thiscall winISteamNetworking_SteamNetworking001_CreateListenSocket(struct w_steam_iface *_this, int32_t nVirtualP2PPort, uint32_t nIP, uint16_t nPort)
{
    struct ISteamNetworking_SteamNetworking001_CreateListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualP2PPort = nVirtualP2PPort,
        .nIP = nIP,
        .nPort = nPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_CreateListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int32_t nVirtualPort, int32_t nTimeoutSec)
{
    struct ISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDTarget = steamIDTarget,
        .nVirtualPort = nVirtualPort,
        .nTimeoutSec = nTimeoutSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking001_CreateConnectionSocket(struct w_steam_iface *_this, uint32_t nIP, uint16_t nPort, int32_t nTimeoutSec)
{
    struct ISteamNetworking_SteamNetworking001_CreateConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nIP = nIP,
        .nPort = nPort,
        .nTimeoutSec = nTimeoutSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_CreateConnectionSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking001_DestroySocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking001_DestroySocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_DestroySocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking001_DestroyListenSocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking001_DestroyListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_DestroyListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking001_SendDataOnSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubData, uint32_t cubData, int8_t bReliable)
{
    struct ISteamNetworking_SteamNetworking001_SendDataOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubData = pubData,
        .cubData = cubData,
        .bReliable = bReliable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_SendDataOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket(struct w_steam_iface *_this, uint32_t hSocket, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking001_RetrieveDataFromSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking001_RetrieveDataFromSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_RetrieveDataFromSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking001_IsDataAvailable(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking001_IsDataAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_IsDataAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking001_RetrieveData(struct w_steam_iface *_this, uint32_t hListenSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking001_RetrieveData_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_RetrieveData, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking001_GetSocketInfo(struct w_steam_iface *_this, uint32_t hSocket, CSteamID *pSteamIDRemote, int32_t *peSocketStatus, uint32_t *punIPRemote, uint16_t *punPortRemote)
{
    struct ISteamNetworking_SteamNetworking001_GetSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pSteamIDRemote = pSteamIDRemote,
        .peSocketStatus = peSocketStatus,
        .punIPRemote = punIPRemote,
        .punPortRemote = punPortRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_GetSocketInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking001_GetListenSocketInfo(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pnIP, uint16_t *pnPort)
{
    struct ISteamNetworking_SteamNetworking001_GetListenSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pnIP = pnIP,
        .pnPort = pnPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking001_GetListenSocketInfo, &params );
    return params._ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking001_vtable;

DEFINE_RTTI_DATA0(winISteamNetworking_SteamNetworking001, 0, ".?AVISteamNetworking@@")

__ASM_BLOCK_BEGIN(winISteamNetworking_SteamNetworking001_vtables)
    __ASM_VTABLE(winISteamNetworking_SteamNetworking001,
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_CreateListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_CreateConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_DestroySocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_DestroyListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_SendDataOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_RetrieveDataFromSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_IsDataAvailable)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_RetrieveData)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_GetSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking001_GetListenSocketInfo)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworking_SteamNetworking001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking001_vtable, 12, "SteamNetworking001");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_CreateListenSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_CreateConnectionSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_DestroySocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_DestroyListenSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_SendDataOnSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_RetrieveDataFromSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_IsDataAvailable, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_RetrieveData, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_GetSocketInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_GetListenSocketInfo, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_GetSocketConnectionType, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_GetMaxPacketSize, 8)

uint32_t __thiscall winISteamNetworking_SteamNetworking002_CreateListenSocket(struct w_steam_iface *_this, int32_t nVirtualP2PPort, uint32_t nIP, uint16_t nPort, int8_t bAllowUseOfPacketRelay)
{
    struct ISteamNetworking_SteamNetworking002_CreateListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualP2PPort = nVirtualP2PPort,
        .nIP = nIP,
        .nPort = nPort,
        .bAllowUseOfPacketRelay = bAllowUseOfPacketRelay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_CreateListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int32_t nVirtualPort, int32_t nTimeoutSec, int8_t bAllowUseOfPacketRelay)
{
    struct ISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDTarget = steamIDTarget,
        .nVirtualPort = nVirtualPort,
        .nTimeoutSec = nTimeoutSec,
        .bAllowUseOfPacketRelay = bAllowUseOfPacketRelay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking002_CreateConnectionSocket(struct w_steam_iface *_this, uint32_t nIP, uint16_t nPort, int32_t nTimeoutSec)
{
    struct ISteamNetworking_SteamNetworking002_CreateConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nIP = nIP,
        .nPort = nPort,
        .nTimeoutSec = nTimeoutSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_CreateConnectionSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking002_DestroySocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking002_DestroySocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_DestroySocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking002_DestroyListenSocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking002_DestroyListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_DestroyListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking002_SendDataOnSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubData, uint32_t cubData, int8_t bReliable)
{
    struct ISteamNetworking_SteamNetworking002_SendDataOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubData = pubData,
        .cubData = cubData,
        .bReliable = bReliable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_SendDataOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket(struct w_steam_iface *_this, uint32_t hSocket, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking002_RetrieveDataFromSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking002_RetrieveDataFromSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_RetrieveDataFromSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking002_IsDataAvailable(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking002_IsDataAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_IsDataAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking002_RetrieveData(struct w_steam_iface *_this, uint32_t hListenSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking002_RetrieveData_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_RetrieveData, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking002_GetSocketInfo(struct w_steam_iface *_this, uint32_t hSocket, CSteamID *pSteamIDRemote, int32_t *peSocketStatus, uint32_t *punIPRemote, uint16_t *punPortRemote)
{
    struct ISteamNetworking_SteamNetworking002_GetSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pSteamIDRemote = pSteamIDRemote,
        .peSocketStatus = peSocketStatus,
        .punIPRemote = punIPRemote,
        .punPortRemote = punPortRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_GetSocketInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking002_GetListenSocketInfo(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pnIP, uint16_t *pnPort)
{
    struct ISteamNetworking_SteamNetworking002_GetListenSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pnIP = pnIP,
        .pnPort = pnPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_GetListenSocketInfo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking002_GetSocketConnectionType(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworking_SteamNetworking002_GetSocketConnectionType_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_GetSocketConnectionType, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworking_SteamNetworking002_GetMaxPacketSize(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworking_SteamNetworking002_GetMaxPacketSize_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking002_GetMaxPacketSize, &params );
    return params._ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking002_vtable;

DEFINE_RTTI_DATA0(winISteamNetworking_SteamNetworking002, 0, ".?AVISteamNetworking@@")

__ASM_BLOCK_BEGIN(winISteamNetworking_SteamNetworking002_vtables)
    __ASM_VTABLE(winISteamNetworking_SteamNetworking002,
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_CreateListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_CreateConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_DestroySocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_DestroyListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_SendDataOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_RetrieveDataFromSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_IsDataAvailable)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_RetrieveData)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_GetSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_GetListenSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_GetSocketConnectionType)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking002_GetMaxPacketSize)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworking_SteamNetworking002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking002_vtable, 14, "SteamNetworking002");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_SendP2PPacket, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_IsP2PPacketAvailable, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_ReadP2PPacket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_GetP2PSessionState, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_CreateListenSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_CreateConnectionSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_DestroySocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_DestroyListenSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_SendDataOnSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_RetrieveDataFromSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_IsDataAvailable, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_RetrieveData, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_GetSocketInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_GetListenSocketInfo, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_GetSocketConnectionType, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_GetMaxPacketSize, 8)

int8_t __thiscall winISteamNetworking_SteamNetworking003_SendP2PPacket(struct w_steam_iface *_this, CSteamID steamIDRemote, const void *pubData, uint32_t cubData, uint32_t eP2PSendType)
{
    struct ISteamNetworking_SteamNetworking003_SendP2PPacket_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .pubData = pubData,
        .cubData = cubData,
        .eP2PSendType = eP2PSendType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_SendP2PPacket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_IsP2PPacketAvailable(struct w_steam_iface *_this, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking003_IsP2PPacketAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_IsP2PPacketAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_ReadP2PPacket(struct w_steam_iface *_this, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize, CSteamID *psteamIDRemote)
{
    struct ISteamNetworking_SteamNetworking003_ReadP2PPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
        .psteamIDRemote = psteamIDRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_ReadP2PPacket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    struct ISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    struct ISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_GetP2PSessionState(struct w_steam_iface *_this, CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
    struct ISteamNetworking_SteamNetworking003_GetP2PSessionState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .pConnectionState = pConnectionState,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_GetP2PSessionState, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking003_CreateListenSocket(struct w_steam_iface *_this, int32_t nVirtualP2PPort, uint32_t nIP, uint16_t nPort, int8_t bAllowUseOfPacketRelay)
{
    struct ISteamNetworking_SteamNetworking003_CreateListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualP2PPort = nVirtualP2PPort,
        .nIP = nIP,
        .nPort = nPort,
        .bAllowUseOfPacketRelay = bAllowUseOfPacketRelay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_CreateListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int32_t nVirtualPort, int32_t nTimeoutSec, int8_t bAllowUseOfPacketRelay)
{
    struct ISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDTarget = steamIDTarget,
        .nVirtualPort = nVirtualPort,
        .nTimeoutSec = nTimeoutSec,
        .bAllowUseOfPacketRelay = bAllowUseOfPacketRelay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking003_CreateConnectionSocket(struct w_steam_iface *_this, uint32_t nIP, uint16_t nPort, int32_t nTimeoutSec)
{
    struct ISteamNetworking_SteamNetworking003_CreateConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nIP = nIP,
        .nPort = nPort,
        .nTimeoutSec = nTimeoutSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_CreateConnectionSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_DestroySocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking003_DestroySocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_DestroySocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_DestroyListenSocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking003_DestroyListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_DestroyListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_SendDataOnSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubData, uint32_t cubData, int8_t bReliable)
{
    struct ISteamNetworking_SteamNetworking003_SendDataOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubData = pubData,
        .cubData = cubData,
        .bReliable = bReliable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_SendDataOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket(struct w_steam_iface *_this, uint32_t hSocket, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_RetrieveDataFromSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking003_RetrieveDataFromSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_RetrieveDataFromSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_IsDataAvailable(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking003_IsDataAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_IsDataAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_RetrieveData(struct w_steam_iface *_this, uint32_t hListenSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking003_RetrieveData_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_RetrieveData, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_GetSocketInfo(struct w_steam_iface *_this, uint32_t hSocket, CSteamID *pSteamIDRemote, int32_t *peSocketStatus, uint32_t *punIPRemote, uint16_t *punPortRemote)
{
    struct ISteamNetworking_SteamNetworking003_GetSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pSteamIDRemote = pSteamIDRemote,
        .peSocketStatus = peSocketStatus,
        .punIPRemote = punIPRemote,
        .punPortRemote = punPortRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_GetSocketInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking003_GetListenSocketInfo(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pnIP, uint16_t *pnPort)
{
    struct ISteamNetworking_SteamNetworking003_GetListenSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pnIP = pnIP,
        .pnPort = pnPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_GetListenSocketInfo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking003_GetSocketConnectionType(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworking_SteamNetworking003_GetSocketConnectionType_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_GetSocketConnectionType, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworking_SteamNetworking003_GetMaxPacketSize(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworking_SteamNetworking003_GetMaxPacketSize_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking003_GetMaxPacketSize, &params );
    return params._ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking003_vtable;

DEFINE_RTTI_DATA0(winISteamNetworking_SteamNetworking003, 0, ".?AVISteamNetworking@@")

__ASM_BLOCK_BEGIN(winISteamNetworking_SteamNetworking003_vtables)
    __ASM_VTABLE(winISteamNetworking_SteamNetworking003,
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_SendP2PPacket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_IsP2PPacketAvailable)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_ReadP2PPacket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_GetP2PSessionState)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_CreateListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_CreateConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_DestroySocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_DestroyListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_SendDataOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_RetrieveDataFromSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_IsDataAvailable)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_RetrieveData)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_GetSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_GetListenSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_GetSocketConnectionType)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking003_GetMaxPacketSize)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworking_SteamNetworking003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking003_vtable, 20, "SteamNetworking003");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_SendP2PPacket, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_IsP2PPacketAvailable, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_ReadP2PPacket, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_GetP2PSessionState, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_CreateListenSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_CreateConnectionSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_DestroySocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_DestroyListenSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_SendDataOnSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_RetrieveDataFromSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_IsDataAvailable, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_RetrieveData, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_GetSocketInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_GetListenSocketInfo, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_GetSocketConnectionType, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_GetMaxPacketSize, 8)

int8_t __thiscall winISteamNetworking_SteamNetworking004_SendP2PPacket(struct w_steam_iface *_this, CSteamID steamIDRemote, const void *pubData, uint32_t cubData, uint32_t eP2PSendType, int32_t nVirtualPort)
{
    struct ISteamNetworking_SteamNetworking004_SendP2PPacket_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .pubData = pubData,
        .cubData = cubData,
        .eP2PSendType = eP2PSendType,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_SendP2PPacket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_IsP2PPacketAvailable(struct w_steam_iface *_this, uint32_t *pcubMsgSize, int32_t nVirtualPort)
{
    struct ISteamNetworking_SteamNetworking004_IsP2PPacketAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .pcubMsgSize = pcubMsgSize,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_IsP2PPacketAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_ReadP2PPacket(struct w_steam_iface *_this, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize, CSteamID *psteamIDRemote, int32_t nVirtualPort)
{
    struct ISteamNetworking_SteamNetworking004_ReadP2PPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
        .psteamIDRemote = psteamIDRemote,
        .nVirtualPort = nVirtualPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_ReadP2PPacket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    struct ISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    struct ISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_GetP2PSessionState(struct w_steam_iface *_this, CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
    struct ISteamNetworking_SteamNetworking004_GetP2PSessionState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .pConnectionState = pConnectionState,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_GetP2PSessionState, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking004_CreateListenSocket(struct w_steam_iface *_this, int32_t nVirtualP2PPort, uint32_t nIP, uint16_t nPort, int8_t bAllowUseOfPacketRelay)
{
    struct ISteamNetworking_SteamNetworking004_CreateListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualP2PPort = nVirtualP2PPort,
        .nIP = nIP,
        .nPort = nPort,
        .bAllowUseOfPacketRelay = bAllowUseOfPacketRelay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_CreateListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int32_t nVirtualPort, int32_t nTimeoutSec, int8_t bAllowUseOfPacketRelay)
{
    struct ISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDTarget = steamIDTarget,
        .nVirtualPort = nVirtualPort,
        .nTimeoutSec = nTimeoutSec,
        .bAllowUseOfPacketRelay = bAllowUseOfPacketRelay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking004_CreateConnectionSocket(struct w_steam_iface *_this, uint32_t nIP, uint16_t nPort, int32_t nTimeoutSec)
{
    struct ISteamNetworking_SteamNetworking004_CreateConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nIP = nIP,
        .nPort = nPort,
        .nTimeoutSec = nTimeoutSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_CreateConnectionSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_DestroySocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking004_DestroySocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_DestroySocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_DestroyListenSocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking004_DestroyListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_DestroyListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_SendDataOnSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubData, uint32_t cubData, int8_t bReliable)
{
    struct ISteamNetworking_SteamNetworking004_SendDataOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubData = pubData,
        .cubData = cubData,
        .bReliable = bReliable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_SendDataOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket(struct w_steam_iface *_this, uint32_t hSocket, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_RetrieveDataFromSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking004_RetrieveDataFromSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_RetrieveDataFromSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_IsDataAvailable(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking004_IsDataAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_IsDataAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_RetrieveData(struct w_steam_iface *_this, uint32_t hListenSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking004_RetrieveData_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_RetrieveData, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_GetSocketInfo(struct w_steam_iface *_this, uint32_t hSocket, CSteamID *pSteamIDRemote, int32_t *peSocketStatus, uint32_t *punIPRemote, uint16_t *punPortRemote)
{
    struct ISteamNetworking_SteamNetworking004_GetSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pSteamIDRemote = pSteamIDRemote,
        .peSocketStatus = peSocketStatus,
        .punIPRemote = punIPRemote,
        .punPortRemote = punPortRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_GetSocketInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking004_GetListenSocketInfo(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pnIP, uint16_t *pnPort)
{
    struct ISteamNetworking_SteamNetworking004_GetListenSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pnIP = pnIP,
        .pnPort = pnPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_GetListenSocketInfo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking004_GetSocketConnectionType(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworking_SteamNetworking004_GetSocketConnectionType_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_GetSocketConnectionType, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworking_SteamNetworking004_GetMaxPacketSize(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworking_SteamNetworking004_GetMaxPacketSize_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking004_GetMaxPacketSize, &params );
    return params._ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking004_vtable;

DEFINE_RTTI_DATA0(winISteamNetworking_SteamNetworking004, 0, ".?AVISteamNetworking@@")

__ASM_BLOCK_BEGIN(winISteamNetworking_SteamNetworking004_vtables)
    __ASM_VTABLE(winISteamNetworking_SteamNetworking004,
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_SendP2PPacket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_IsP2PPacketAvailable)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_ReadP2PPacket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_GetP2PSessionState)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_CreateListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_CreateConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_DestroySocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_DestroyListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_SendDataOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_RetrieveDataFromSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_IsDataAvailable)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_RetrieveData)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_GetSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_GetListenSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_GetSocketConnectionType)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking004_GetMaxPacketSize)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworking_SteamNetworking004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking004_vtable, 20, "SteamNetworking004");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_SendP2PPacket, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_IsP2PPacketAvailable, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_ReadP2PPacket, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_GetP2PSessionState, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_AllowP2PPacketRelay, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_CreateListenSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_CreateConnectionSocket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_DestroySocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_DestroyListenSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_SendDataOnSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_RetrieveDataFromSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_IsDataAvailable, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_RetrieveData, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_GetSocketInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_GetListenSocketInfo, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_GetSocketConnectionType, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_GetMaxPacketSize, 8)

int8_t __thiscall winISteamNetworking_SteamNetworking005_SendP2PPacket(struct w_steam_iface *_this, CSteamID steamIDRemote, const void *pubData, uint32_t cubData, uint32_t eP2PSendType, int32_t nChannel)
{
    struct ISteamNetworking_SteamNetworking005_SendP2PPacket_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .pubData = pubData,
        .cubData = cubData,
        .eP2PSendType = eP2PSendType,
        .nChannel = nChannel,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_SendP2PPacket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_IsP2PPacketAvailable(struct w_steam_iface *_this, uint32_t *pcubMsgSize, int32_t nChannel)
{
    struct ISteamNetworking_SteamNetworking005_IsP2PPacketAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .pcubMsgSize = pcubMsgSize,
        .nChannel = nChannel,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_IsP2PPacketAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_ReadP2PPacket(struct w_steam_iface *_this, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize, CSteamID *psteamIDRemote, int32_t nChannel)
{
    struct ISteamNetworking_SteamNetworking005_ReadP2PPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
        .psteamIDRemote = psteamIDRemote,
        .nChannel = nChannel,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_ReadP2PPacket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    struct ISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    struct ISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote, int32_t nChannel)
{
    struct ISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .nChannel = nChannel,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_GetP2PSessionState(struct w_steam_iface *_this, CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
    struct ISteamNetworking_SteamNetworking005_GetP2PSessionState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .pConnectionState = pConnectionState,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_GetP2PSessionState, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_AllowP2PPacketRelay(struct w_steam_iface *_this, int8_t bAllow)
{
    struct ISteamNetworking_SteamNetworking005_AllowP2PPacketRelay_params params =
    {
        .linux_side = _this->u_iface,
        .bAllow = bAllow,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_AllowP2PPacketRelay, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking005_CreateListenSocket(struct w_steam_iface *_this, int32_t nVirtualP2PPort, uint32_t nIP, uint16_t nPort, int8_t bAllowUseOfPacketRelay)
{
    struct ISteamNetworking_SteamNetworking005_CreateListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualP2PPort = nVirtualP2PPort,
        .nIP = nIP,
        .nPort = nPort,
        .bAllowUseOfPacketRelay = bAllowUseOfPacketRelay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_CreateListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int32_t nVirtualPort, int32_t nTimeoutSec, int8_t bAllowUseOfPacketRelay)
{
    struct ISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDTarget = steamIDTarget,
        .nVirtualPort = nVirtualPort,
        .nTimeoutSec = nTimeoutSec,
        .bAllowUseOfPacketRelay = bAllowUseOfPacketRelay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking005_CreateConnectionSocket(struct w_steam_iface *_this, uint32_t nIP, uint16_t nPort, int32_t nTimeoutSec)
{
    struct ISteamNetworking_SteamNetworking005_CreateConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nIP = nIP,
        .nPort = nPort,
        .nTimeoutSec = nTimeoutSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_CreateConnectionSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_DestroySocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking005_DestroySocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_DestroySocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_DestroyListenSocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking005_DestroyListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_DestroyListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_SendDataOnSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubData, uint32_t cubData, int8_t bReliable)
{
    struct ISteamNetworking_SteamNetworking005_SendDataOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubData = pubData,
        .cubData = cubData,
        .bReliable = bReliable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_SendDataOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket(struct w_steam_iface *_this, uint32_t hSocket, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_RetrieveDataFromSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking005_RetrieveDataFromSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_RetrieveDataFromSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_IsDataAvailable(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking005_IsDataAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_IsDataAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_RetrieveData(struct w_steam_iface *_this, uint32_t hListenSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking005_RetrieveData_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_RetrieveData, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_GetSocketInfo(struct w_steam_iface *_this, uint32_t hSocket, CSteamID *pSteamIDRemote, int32_t *peSocketStatus, uint32_t *punIPRemote, uint16_t *punPortRemote)
{
    struct ISteamNetworking_SteamNetworking005_GetSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pSteamIDRemote = pSteamIDRemote,
        .peSocketStatus = peSocketStatus,
        .punIPRemote = punIPRemote,
        .punPortRemote = punPortRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_GetSocketInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking005_GetListenSocketInfo(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pnIP, uint16_t *pnPort)
{
    struct ISteamNetworking_SteamNetworking005_GetListenSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pnIP = pnIP,
        .pnPort = pnPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_GetListenSocketInfo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking005_GetSocketConnectionType(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworking_SteamNetworking005_GetSocketConnectionType_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_GetSocketConnectionType, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworking_SteamNetworking005_GetMaxPacketSize(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworking_SteamNetworking005_GetMaxPacketSize_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking005_GetMaxPacketSize, &params );
    return params._ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking005_vtable;

DEFINE_RTTI_DATA0(winISteamNetworking_SteamNetworking005, 0, ".?AVISteamNetworking@@")

__ASM_BLOCK_BEGIN(winISteamNetworking_SteamNetworking005_vtables)
    __ASM_VTABLE(winISteamNetworking_SteamNetworking005,
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_SendP2PPacket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_IsP2PPacketAvailable)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_ReadP2PPacket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_GetP2PSessionState)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_AllowP2PPacketRelay)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_CreateListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_CreateConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_DestroySocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_DestroyListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_SendDataOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_RetrieveDataFromSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_IsDataAvailable)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_RetrieveData)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_GetSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_GetListenSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_GetSocketConnectionType)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking005_GetMaxPacketSize)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworking_SteamNetworking005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking005_vtable, 22, "SteamNetworking005");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_SendP2PPacket, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_IsP2PPacketAvailable, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_ReadP2PPacket, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_GetP2PSessionState, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_AllowP2PPacketRelay, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_CreateListenSocket, 36)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_CreateConnectionSocket, 32)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_DestroySocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_DestroyListenSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_SendDataOnSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_RetrieveDataFromSocket, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_IsDataAvailable, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_RetrieveData, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_GetSocketInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_GetListenSocketInfo, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_GetSocketConnectionType, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_GetMaxPacketSize, 8)

int8_t __thiscall winISteamNetworking_SteamNetworking006_SendP2PPacket(struct w_steam_iface *_this, CSteamID steamIDRemote, const void *pubData, uint32_t cubData, uint32_t eP2PSendType, int32_t nChannel)
{
    struct ISteamNetworking_SteamNetworking006_SendP2PPacket_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .pubData = pubData,
        .cubData = cubData,
        .eP2PSendType = eP2PSendType,
        .nChannel = nChannel,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_SendP2PPacket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_IsP2PPacketAvailable(struct w_steam_iface *_this, uint32_t *pcubMsgSize, int32_t nChannel)
{
    struct ISteamNetworking_SteamNetworking006_IsP2PPacketAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .pcubMsgSize = pcubMsgSize,
        .nChannel = nChannel,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_IsP2PPacketAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_ReadP2PPacket(struct w_steam_iface *_this, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize, CSteamID *psteamIDRemote, int32_t nChannel)
{
    struct ISteamNetworking_SteamNetworking006_ReadP2PPacket_params params =
    {
        .linux_side = _this->u_iface,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
        .psteamIDRemote = psteamIDRemote,
        .nChannel = nChannel,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_ReadP2PPacket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    struct ISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    struct ISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote, int32_t nChannel)
{
    struct ISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .nChannel = nChannel,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_GetP2PSessionState(struct w_steam_iface *_this, CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
    struct ISteamNetworking_SteamNetworking006_GetP2PSessionState_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .pConnectionState = pConnectionState,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_GetP2PSessionState, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_AllowP2PPacketRelay(struct w_steam_iface *_this, int8_t bAllow)
{
    struct ISteamNetworking_SteamNetworking006_AllowP2PPacketRelay_params params =
    {
        .linux_side = _this->u_iface,
        .bAllow = bAllow,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_AllowP2PPacketRelay, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking006_CreateListenSocket(struct w_steam_iface *_this, int32_t nVirtualP2PPort, SteamIPAddress_t nIP, uint16_t nPort, int8_t bAllowUseOfPacketRelay)
{
    struct ISteamNetworking_SteamNetworking006_CreateListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nVirtualP2PPort = nVirtualP2PPort,
        .nIP = nIP,
        .nPort = nPort,
        .bAllowUseOfPacketRelay = bAllowUseOfPacketRelay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_CreateListenSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int32_t nVirtualPort, int32_t nTimeoutSec, int8_t bAllowUseOfPacketRelay)
{
    struct ISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDTarget = steamIDTarget,
        .nVirtualPort = nVirtualPort,
        .nTimeoutSec = nTimeoutSec,
        .bAllowUseOfPacketRelay = bAllowUseOfPacketRelay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking006_CreateConnectionSocket(struct w_steam_iface *_this, SteamIPAddress_t nIP, uint16_t nPort, int32_t nTimeoutSec)
{
    struct ISteamNetworking_SteamNetworking006_CreateConnectionSocket_params params =
    {
        .linux_side = _this->u_iface,
        .nIP = nIP,
        .nPort = nPort,
        .nTimeoutSec = nTimeoutSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_CreateConnectionSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_DestroySocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking006_DestroySocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_DestroySocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_DestroyListenSocket(struct w_steam_iface *_this, uint32_t hSocket, int8_t bNotifyRemoteEnd)
{
    struct ISteamNetworking_SteamNetworking006_DestroyListenSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .bNotifyRemoteEnd = bNotifyRemoteEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_DestroyListenSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_SendDataOnSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubData, uint32_t cubData, int8_t bReliable)
{
    struct ISteamNetworking_SteamNetworking006_SendDataOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubData = pubData,
        .cubData = cubData,
        .bReliable = bReliable,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_SendDataOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket(struct w_steam_iface *_this, uint32_t hSocket, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_RetrieveDataFromSocket(struct w_steam_iface *_this, uint32_t hSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize)
{
    struct ISteamNetworking_SteamNetworking006_RetrieveDataFromSocket_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_RetrieveDataFromSocket, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_IsDataAvailable(struct w_steam_iface *_this, uint32_t hListenSocket, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking006_IsDataAvailable_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_IsDataAvailable, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_RetrieveData(struct w_steam_iface *_this, uint32_t hListenSocket, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize, uint32_t *phSocket)
{
    struct ISteamNetworking_SteamNetworking006_RetrieveData_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pubDest = pubDest,
        .cubDest = cubDest,
        .pcubMsgSize = pcubMsgSize,
        .phSocket = phSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_RetrieveData, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_GetSocketInfo(struct w_steam_iface *_this, uint32_t hSocket, CSteamID *pSteamIDRemote, int32_t *peSocketStatus, SteamIPAddress_t *punIPRemote, uint16_t *punPortRemote)
{
    struct ISteamNetworking_SteamNetworking006_GetSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
        .pSteamIDRemote = pSteamIDRemote,
        .peSocketStatus = peSocketStatus,
        .punIPRemote = punIPRemote,
        .punPortRemote = punPortRemote,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_GetSocketInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamNetworking_SteamNetworking006_GetListenSocketInfo(struct w_steam_iface *_this, uint32_t hListenSocket, SteamIPAddress_t *pnIP, uint16_t *pnPort)
{
    struct ISteamNetworking_SteamNetworking006_GetListenSocketInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hListenSocket = hListenSocket,
        .pnIP = pnIP,
        .pnPort = pnPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_GetListenSocketInfo, &params );
    return params._ret;
}

uint32_t __thiscall winISteamNetworking_SteamNetworking006_GetSocketConnectionType(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworking_SteamNetworking006_GetSocketConnectionType_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_GetSocketConnectionType, &params );
    return params._ret;
}

int32_t __thiscall winISteamNetworking_SteamNetworking006_GetMaxPacketSize(struct w_steam_iface *_this, uint32_t hSocket)
{
    struct ISteamNetworking_SteamNetworking006_GetMaxPacketSize_params params =
    {
        .linux_side = _this->u_iface,
        .hSocket = hSocket,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamNetworking_SteamNetworking006_GetMaxPacketSize, &params );
    return params._ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking006_vtable;

DEFINE_RTTI_DATA0(winISteamNetworking_SteamNetworking006, 0, ".?AVISteamNetworking@@")

__ASM_BLOCK_BEGIN(winISteamNetworking_SteamNetworking006_vtables)
    __ASM_VTABLE(winISteamNetworking_SteamNetworking006,
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_SendP2PPacket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_IsP2PPacketAvailable)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_ReadP2PPacket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_GetP2PSessionState)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_AllowP2PPacketRelay)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_CreateListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_CreateConnectionSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_DestroySocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_DestroyListenSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_SendDataOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_RetrieveDataFromSocket)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_IsDataAvailable)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_RetrieveData)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_GetSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_GetListenSocketInfo)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_GetSocketConnectionType)
        VTABLE_ADD_FUNC(winISteamNetworking_SteamNetworking006_GetMaxPacketSize)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamNetworking_SteamNetworking006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking006_vtable, 22, "SteamNetworking006");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamNetworking_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamNetworking_SteamNetworking001_rtti( base );
    init_winISteamNetworking_SteamNetworking002_rtti( base );
    init_winISteamNetworking_SteamNetworking003_rtti( base );
    init_winISteamNetworking_SteamNetworking004_rtti( base );
    init_winISteamNetworking_SteamNetworking005_rtti( base );
    init_winISteamNetworking_SteamNetworking006_rtti( base );
#endif /* __x86_64__ */
}
