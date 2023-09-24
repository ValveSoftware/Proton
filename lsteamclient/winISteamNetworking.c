/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworking_SteamNetworking001.h"

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

SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking001_CreateListenSocket(struct w_steam_iface *_this, int nVirtualP2PPort, uint32 nIP, uint16 nPort)
{
    SNetListenSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_CreateListenSocket(_this->u_iface, nVirtualP2PPort, nIP, nPort);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket(_this->u_iface, steamIDTarget, nVirtualPort, nTimeoutSec);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking001_CreateConnectionSocket(struct w_steam_iface *_this, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_CreateConnectionSocket(_this->u_iface, nIP, nPort, nTimeoutSec);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking001_DestroySocket(struct w_steam_iface *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_DestroySocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking001_DestroyListenSocket(struct w_steam_iface *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_DestroyListenSocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking001_SendDataOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_SendDataOnSocket(_this->u_iface, hSocket, pubData, cubData, bReliable);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket(_this->u_iface, hSocket, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking001_RetrieveDataFromSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket(_this->u_iface, hSocket, pubDest, cubDest, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking001_IsDataAvailable(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_IsDataAvailable(_this->u_iface, hListenSocket, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking001_RetrieveData(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_RetrieveData(_this->u_iface, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking001_GetSocketInfo(struct w_steam_iface *_this, SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_GetSocketInfo(_this->u_iface, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking001_GetListenSocketInfo(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking001_GetListenSocketInfo(_this->u_iface, hListenSocket, pnIP, pnPort);
    return _ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworking_SteamNetworking001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking001_vtable, 12, "SteamNetworking001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworking_SteamNetworking002.h"

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

SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking002_CreateListenSocket(struct w_steam_iface *_this, int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    SNetListenSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_CreateListenSocket(_this->u_iface, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket(_this->u_iface, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking002_CreateConnectionSocket(struct w_steam_iface *_this, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_CreateConnectionSocket(_this->u_iface, nIP, nPort, nTimeoutSec);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking002_DestroySocket(struct w_steam_iface *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_DestroySocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking002_DestroyListenSocket(struct w_steam_iface *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_DestroyListenSocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking002_SendDataOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_SendDataOnSocket(_this->u_iface, hSocket, pubData, cubData, bReliable);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket(_this->u_iface, hSocket, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking002_RetrieveDataFromSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket(_this->u_iface, hSocket, pubDest, cubDest, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking002_IsDataAvailable(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_IsDataAvailable(_this->u_iface, hListenSocket, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking002_RetrieveData(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_RetrieveData(_this->u_iface, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking002_GetSocketInfo(struct w_steam_iface *_this, SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_GetSocketInfo(_this->u_iface, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking002_GetListenSocketInfo(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_GetListenSocketInfo(_this->u_iface, hListenSocket, pnIP, pnPort);
    return _ret;
}

ESNetSocketConnectionType __thiscall winISteamNetworking_SteamNetworking002_GetSocketConnectionType(struct w_steam_iface *_this, SNetSocket_t hSocket)
{
    ESNetSocketConnectionType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_GetSocketConnectionType(_this->u_iface, hSocket);
    return _ret;
}

int __thiscall winISteamNetworking_SteamNetworking002_GetMaxPacketSize(struct w_steam_iface *_this, SNetSocket_t hSocket)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking002_GetMaxPacketSize(_this->u_iface, hSocket);
    return _ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworking_SteamNetworking002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking002_vtable, 14, "SteamNetworking002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworking_SteamNetworking003.h"

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

bool __thiscall winISteamNetworking_SteamNetworking003_SendP2PPacket(struct w_steam_iface *_this, CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_SendP2PPacket(_this->u_iface, steamIDRemote, pubData, cubData, eP2PSendType);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_IsP2PPacketAvailable(struct w_steam_iface *_this, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_IsP2PPacketAvailable(_this->u_iface, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_ReadP2PPacket(struct w_steam_iface *_this, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_ReadP2PPacket(_this->u_iface, pubDest, cubDest, pcubMsgSize, psteamIDRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser(_this->u_iface, steamIDRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser(_this->u_iface, steamIDRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_GetP2PSessionState(struct w_steam_iface *_this, CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_GetP2PSessionState(_this->u_iface, steamIDRemote, pConnectionState);
    return _ret;
}

SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking003_CreateListenSocket(struct w_steam_iface *_this, int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    SNetListenSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_CreateListenSocket(_this->u_iface, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket(_this->u_iface, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking003_CreateConnectionSocket(struct w_steam_iface *_this, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_CreateConnectionSocket(_this->u_iface, nIP, nPort, nTimeoutSec);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_DestroySocket(struct w_steam_iface *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_DestroySocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_DestroyListenSocket(struct w_steam_iface *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_DestroyListenSocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_SendDataOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_SendDataOnSocket(_this->u_iface, hSocket, pubData, cubData, bReliable);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket(_this->u_iface, hSocket, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_RetrieveDataFromSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_RetrieveDataFromSocket(_this->u_iface, hSocket, pubDest, cubDest, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_IsDataAvailable(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_IsDataAvailable(_this->u_iface, hListenSocket, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_RetrieveData(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_RetrieveData(_this->u_iface, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_GetSocketInfo(struct w_steam_iface *_this, SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_GetSocketInfo(_this->u_iface, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking003_GetListenSocketInfo(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_GetListenSocketInfo(_this->u_iface, hListenSocket, pnIP, pnPort);
    return _ret;
}

ESNetSocketConnectionType __thiscall winISteamNetworking_SteamNetworking003_GetSocketConnectionType(struct w_steam_iface *_this, SNetSocket_t hSocket)
{
    ESNetSocketConnectionType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_GetSocketConnectionType(_this->u_iface, hSocket);
    return _ret;
}

int __thiscall winISteamNetworking_SteamNetworking003_GetMaxPacketSize(struct w_steam_iface *_this, SNetSocket_t hSocket)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking003_GetMaxPacketSize(_this->u_iface, hSocket);
    return _ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworking_SteamNetworking003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking003_vtable, 20, "SteamNetworking003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworking_SteamNetworking004.h"

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

bool __thiscall winISteamNetworking_SteamNetworking004_SendP2PPacket(struct w_steam_iface *_this, CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int nVirtualPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_SendP2PPacket(_this->u_iface, steamIDRemote, pubData, cubData, eP2PSendType, nVirtualPort);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_IsP2PPacketAvailable(struct w_steam_iface *_this, uint32 *pcubMsgSize, int nVirtualPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_IsP2PPacketAvailable(_this->u_iface, pcubMsgSize, nVirtualPort);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_ReadP2PPacket(struct w_steam_iface *_this, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int nVirtualPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_ReadP2PPacket(_this->u_iface, pubDest, cubDest, pcubMsgSize, psteamIDRemote, nVirtualPort);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser(_this->u_iface, steamIDRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser(_this->u_iface, steamIDRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_GetP2PSessionState(struct w_steam_iface *_this, CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_GetP2PSessionState(_this->u_iface, steamIDRemote, pConnectionState);
    return _ret;
}

SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking004_CreateListenSocket(struct w_steam_iface *_this, int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    SNetListenSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_CreateListenSocket(_this->u_iface, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket(_this->u_iface, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking004_CreateConnectionSocket(struct w_steam_iface *_this, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_CreateConnectionSocket(_this->u_iface, nIP, nPort, nTimeoutSec);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_DestroySocket(struct w_steam_iface *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_DestroySocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_DestroyListenSocket(struct w_steam_iface *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_DestroyListenSocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_SendDataOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_SendDataOnSocket(_this->u_iface, hSocket, pubData, cubData, bReliable);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket(_this->u_iface, hSocket, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_RetrieveDataFromSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_RetrieveDataFromSocket(_this->u_iface, hSocket, pubDest, cubDest, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_IsDataAvailable(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_IsDataAvailable(_this->u_iface, hListenSocket, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_RetrieveData(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_RetrieveData(_this->u_iface, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_GetSocketInfo(struct w_steam_iface *_this, SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_GetSocketInfo(_this->u_iface, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking004_GetListenSocketInfo(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_GetListenSocketInfo(_this->u_iface, hListenSocket, pnIP, pnPort);
    return _ret;
}

ESNetSocketConnectionType __thiscall winISteamNetworking_SteamNetworking004_GetSocketConnectionType(struct w_steam_iface *_this, SNetSocket_t hSocket)
{
    ESNetSocketConnectionType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_GetSocketConnectionType(_this->u_iface, hSocket);
    return _ret;
}

int __thiscall winISteamNetworking_SteamNetworking004_GetMaxPacketSize(struct w_steam_iface *_this, SNetSocket_t hSocket)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking004_GetMaxPacketSize(_this->u_iface, hSocket);
    return _ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworking_SteamNetworking004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking004_vtable, 20, "SteamNetworking004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworking_SteamNetworking005.h"

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

bool __thiscall winISteamNetworking_SteamNetworking005_SendP2PPacket(struct w_steam_iface *_this, CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_SendP2PPacket(_this->u_iface, steamIDRemote, pubData, cubData, eP2PSendType, nChannel);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_IsP2PPacketAvailable(struct w_steam_iface *_this, uint32 *pcubMsgSize, int nChannel)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_IsP2PPacketAvailable(_this->u_iface, pcubMsgSize, nChannel);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_ReadP2PPacket(struct w_steam_iface *_this, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int nChannel)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_ReadP2PPacket(_this->u_iface, pubDest, cubDest, pcubMsgSize, psteamIDRemote, nChannel);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser(_this->u_iface, steamIDRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser(_this->u_iface, steamIDRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote, int nChannel)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser(_this->u_iface, steamIDRemote, nChannel);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_GetP2PSessionState(struct w_steam_iface *_this, CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_GetP2PSessionState(_this->u_iface, steamIDRemote, pConnectionState);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_AllowP2PPacketRelay(struct w_steam_iface *_this, bool bAllow)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_AllowP2PPacketRelay(_this->u_iface, bAllow);
    return _ret;
}

SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking005_CreateListenSocket(struct w_steam_iface *_this, int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    SNetListenSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_CreateListenSocket(_this->u_iface, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket(_this->u_iface, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking005_CreateConnectionSocket(struct w_steam_iface *_this, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_CreateConnectionSocket(_this->u_iface, nIP, nPort, nTimeoutSec);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_DestroySocket(struct w_steam_iface *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_DestroySocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_DestroyListenSocket(struct w_steam_iface *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_DestroyListenSocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_SendDataOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_SendDataOnSocket(_this->u_iface, hSocket, pubData, cubData, bReliable);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket(_this->u_iface, hSocket, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_RetrieveDataFromSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_RetrieveDataFromSocket(_this->u_iface, hSocket, pubDest, cubDest, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_IsDataAvailable(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_IsDataAvailable(_this->u_iface, hListenSocket, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_RetrieveData(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_RetrieveData(_this->u_iface, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_GetSocketInfo(struct w_steam_iface *_this, SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_GetSocketInfo(_this->u_iface, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking005_GetListenSocketInfo(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_GetListenSocketInfo(_this->u_iface, hListenSocket, pnIP, pnPort);
    return _ret;
}

ESNetSocketConnectionType __thiscall winISteamNetworking_SteamNetworking005_GetSocketConnectionType(struct w_steam_iface *_this, SNetSocket_t hSocket)
{
    ESNetSocketConnectionType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_GetSocketConnectionType(_this->u_iface, hSocket);
    return _ret;
}

int __thiscall winISteamNetworking_SteamNetworking005_GetMaxPacketSize(struct w_steam_iface *_this, SNetSocket_t hSocket)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking005_GetMaxPacketSize(_this->u_iface, hSocket);
    return _ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworking_SteamNetworking005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking005_vtable, 22, "SteamNetworking005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworking_SteamNetworking006.h"

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

bool __thiscall winISteamNetworking_SteamNetworking006_SendP2PPacket(struct w_steam_iface *_this, CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_SendP2PPacket(_this->u_iface, steamIDRemote, pubData, cubData, eP2PSendType, nChannel);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_IsP2PPacketAvailable(struct w_steam_iface *_this, uint32 *pcubMsgSize, int nChannel)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_IsP2PPacketAvailable(_this->u_iface, pcubMsgSize, nChannel);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_ReadP2PPacket(struct w_steam_iface *_this, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int nChannel)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_ReadP2PPacket(_this->u_iface, pubDest, cubDest, pcubMsgSize, psteamIDRemote, nChannel);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser(_this->u_iface, steamIDRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser(_this->u_iface, steamIDRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser(struct w_steam_iface *_this, CSteamID steamIDRemote, int nChannel)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser(_this->u_iface, steamIDRemote, nChannel);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_GetP2PSessionState(struct w_steam_iface *_this, CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_GetP2PSessionState(_this->u_iface, steamIDRemote, pConnectionState);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_AllowP2PPacketRelay(struct w_steam_iface *_this, bool bAllow)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_AllowP2PPacketRelay(_this->u_iface, bAllow);
    return _ret;
}

SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking006_CreateListenSocket(struct w_steam_iface *_this, int nVirtualP2PPort, SteamIPAddress_t nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    SNetListenSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_CreateListenSocket(_this->u_iface, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket(struct w_steam_iface *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket(_this->u_iface, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
    return _ret;
}

SNetSocket_t __thiscall winISteamNetworking_SteamNetworking006_CreateConnectionSocket(struct w_steam_iface *_this, SteamIPAddress_t nIP, uint16 nPort, int nTimeoutSec)
{
    SNetSocket_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_CreateConnectionSocket(_this->u_iface, nIP, nPort, nTimeoutSec);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_DestroySocket(struct w_steam_iface *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_DestroySocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_DestroyListenSocket(struct w_steam_iface *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_DestroyListenSocket(_this->u_iface, hSocket, bNotifyRemoteEnd);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_SendDataOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_SendDataOnSocket(_this->u_iface, hSocket, pubData, cubData, bReliable);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket(_this->u_iface, hSocket, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_RetrieveDataFromSocket(struct w_steam_iface *_this, SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_RetrieveDataFromSocket(_this->u_iface, hSocket, pubDest, cubDest, pcubMsgSize);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_IsDataAvailable(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_IsDataAvailable(_this->u_iface, hListenSocket, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_RetrieveData(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_RetrieveData(_this->u_iface, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_GetSocketInfo(struct w_steam_iface *_this, SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, SteamIPAddress_t *punIPRemote, uint16 *punPortRemote)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_GetSocketInfo(_this->u_iface, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
    return _ret;
}

bool __thiscall winISteamNetworking_SteamNetworking006_GetListenSocketInfo(struct w_steam_iface *_this, SNetListenSocket_t hListenSocket, SteamIPAddress_t *pnIP, uint16 *pnPort)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_GetListenSocketInfo(_this->u_iface, hListenSocket, pnIP, pnPort);
    return _ret;
}

ESNetSocketConnectionType __thiscall winISteamNetworking_SteamNetworking006_GetSocketConnectionType(struct w_steam_iface *_this, SNetSocket_t hSocket)
{
    ESNetSocketConnectionType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_GetSocketConnectionType(_this->u_iface, hSocket);
    return _ret;
}

int __thiscall winISteamNetworking_SteamNetworking006_GetMaxPacketSize(struct w_steam_iface *_this, SNetSocket_t hSocket)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworking_SteamNetworking006_GetMaxPacketSize(_this->u_iface, hSocket);
    return _ret;
}

extern vtable_ptr winISteamNetworking_SteamNetworking006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworking_SteamNetworking006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworking006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworking_SteamNetworking006_vtable, 22, "SteamNetworking006");
    r->u_iface = u_iface;
    return r;
}

