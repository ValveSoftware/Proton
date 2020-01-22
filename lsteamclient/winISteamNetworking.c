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

#include "cppISteamNetworking_SteamNetworking006.h"

typedef struct __winISteamNetworking_SteamNetworking006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworking_SteamNetworking006;

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_SendP2PPacket, 28)
bool __thiscall winISteamNetworking_SteamNetworking006_SendP2PPacket(winISteamNetworking_SteamNetworking006 *_this, CSteamID steamIDRemote, const void * pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_SendP2PPacket(_this->linux_side, steamIDRemote, pubData, cubData, eP2PSendType, nChannel);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_IsP2PPacketAvailable, 12)
bool __thiscall winISteamNetworking_SteamNetworking006_IsP2PPacketAvailable(winISteamNetworking_SteamNetworking006 *_this, uint32 * pcubMsgSize, int nChannel)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_IsP2PPacketAvailable(_this->linux_side, pcubMsgSize, nChannel);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_ReadP2PPacket, 24)
bool __thiscall winISteamNetworking_SteamNetworking006_ReadP2PPacket(winISteamNetworking_SteamNetworking006 *_this, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, CSteamID * psteamIDRemote, int nChannel)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_ReadP2PPacket(_this->linux_side, pubDest, cubDest, pcubMsgSize, psteamIDRemote, nChannel);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser, 12)
bool __thiscall winISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser(winISteamNetworking_SteamNetworking006 *_this, CSteamID steamIDRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser(_this->linux_side, steamIDRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser, 12)
bool __thiscall winISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser(winISteamNetworking_SteamNetworking006 *_this, CSteamID steamIDRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser(_this->linux_side, steamIDRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser, 16)
bool __thiscall winISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser(winISteamNetworking_SteamNetworking006 *_this, CSteamID steamIDRemote, int nChannel)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser(_this->linux_side, steamIDRemote, nChannel);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_GetP2PSessionState, 16)
bool __thiscall winISteamNetworking_SteamNetworking006_GetP2PSessionState(winISteamNetworking_SteamNetworking006 *_this, CSteamID steamIDRemote, P2PSessionState_t * pConnectionState)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_GetP2PSessionState(_this->linux_side, steamIDRemote, pConnectionState);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_AllowP2PPacketRelay, 8)
bool __thiscall winISteamNetworking_SteamNetworking006_AllowP2PPacketRelay(winISteamNetworking_SteamNetworking006 *_this, bool bAllow)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_AllowP2PPacketRelay(_this->linux_side, bAllow);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_CreateListenSocket, 20)
SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking006_CreateListenSocket(winISteamNetworking_SteamNetworking006 *_this, int nVirtualP2PPort, SteamIPAddress_t nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_CreateListenSocket(_this->linux_side, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket, 24)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket(winISteamNetworking_SteamNetworking006 *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket(_this->linux_side, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_CreateConnectionSocket, 16)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking006_CreateConnectionSocket(winISteamNetworking_SteamNetworking006 *_this, SteamIPAddress_t nIP, uint16 nPort, int nTimeoutSec)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_CreateConnectionSocket(_this->linux_side, nIP, nPort, nTimeoutSec);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_DestroySocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking006_DestroySocket(winISteamNetworking_SteamNetworking006 *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_DestroySocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_DestroyListenSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking006_DestroyListenSocket(winISteamNetworking_SteamNetworking006 *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_DestroyListenSocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_SendDataOnSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking006_SendDataOnSocket(winISteamNetworking_SteamNetworking006 *_this, SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_SendDataOnSocket(_this->linux_side, hSocket, pubData, cubData, bReliable);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket(winISteamNetworking_SteamNetworking006 *_this, SNetSocket_t hSocket, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket(_this->linux_side, hSocket, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_RetrieveDataFromSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking006_RetrieveDataFromSocket(winISteamNetworking_SteamNetworking006 *_this, SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_RetrieveDataFromSocket(_this->linux_side, hSocket, pubDest, cubDest, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_IsDataAvailable, 16)
bool __thiscall winISteamNetworking_SteamNetworking006_IsDataAvailable(winISteamNetworking_SteamNetworking006 *_this, SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_IsDataAvailable(_this->linux_side, hListenSocket, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_RetrieveData, 24)
bool __thiscall winISteamNetworking_SteamNetworking006_RetrieveData(winISteamNetworking_SteamNetworking006 *_this, SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_RetrieveData(_this->linux_side, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_GetSocketInfo, 24)
bool __thiscall winISteamNetworking_SteamNetworking006_GetSocketInfo(winISteamNetworking_SteamNetworking006 *_this, SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, SteamIPAddress_t * punIPRemote, uint16 * punPortRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_GetSocketInfo(_this->linux_side, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_GetListenSocketInfo, 16)
bool __thiscall winISteamNetworking_SteamNetworking006_GetListenSocketInfo(winISteamNetworking_SteamNetworking006 *_this, SNetListenSocket_t hListenSocket, SteamIPAddress_t * pnIP, uint16 * pnPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_GetListenSocketInfo(_this->linux_side, hListenSocket, pnIP, pnPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_GetSocketConnectionType, 8)
ESNetSocketConnectionType __thiscall winISteamNetworking_SteamNetworking006_GetSocketConnectionType(winISteamNetworking_SteamNetworking006 *_this, SNetSocket_t hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_GetSocketConnectionType(_this->linux_side, hSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking006_GetMaxPacketSize, 8)
int __thiscall winISteamNetworking_SteamNetworking006_GetMaxPacketSize(winISteamNetworking_SteamNetworking006 *_this, SNetSocket_t hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking006_GetMaxPacketSize(_this->linux_side, hSocket);
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

winISteamNetworking_SteamNetworking006 *create_winISteamNetworking_SteamNetworking006(void *linux_side)
{
    winISteamNetworking_SteamNetworking006 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworking_SteamNetworking006));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworking_SteamNetworking006_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworking_SteamNetworking005.h"

typedef struct __winISteamNetworking_SteamNetworking005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworking_SteamNetworking005;

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_SendP2PPacket, 28)
bool __thiscall winISteamNetworking_SteamNetworking005_SendP2PPacket(winISteamNetworking_SteamNetworking005 *_this, CSteamID steamIDRemote, const void * pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_SendP2PPacket(_this->linux_side, steamIDRemote, pubData, cubData, eP2PSendType, nChannel);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_IsP2PPacketAvailable, 12)
bool __thiscall winISteamNetworking_SteamNetworking005_IsP2PPacketAvailable(winISteamNetworking_SteamNetworking005 *_this, uint32 * pcubMsgSize, int nChannel)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_IsP2PPacketAvailable(_this->linux_side, pcubMsgSize, nChannel);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_ReadP2PPacket, 24)
bool __thiscall winISteamNetworking_SteamNetworking005_ReadP2PPacket(winISteamNetworking_SteamNetworking005 *_this, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, CSteamID * psteamIDRemote, int nChannel)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_ReadP2PPacket(_this->linux_side, pubDest, cubDest, pcubMsgSize, psteamIDRemote, nChannel);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser, 12)
bool __thiscall winISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser(winISteamNetworking_SteamNetworking005 *_this, CSteamID steamIDRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser(_this->linux_side, steamIDRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser, 12)
bool __thiscall winISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser(winISteamNetworking_SteamNetworking005 *_this, CSteamID steamIDRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser(_this->linux_side, steamIDRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser, 16)
bool __thiscall winISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser(winISteamNetworking_SteamNetworking005 *_this, CSteamID steamIDRemote, int nChannel)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser(_this->linux_side, steamIDRemote, nChannel);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_GetP2PSessionState, 16)
bool __thiscall winISteamNetworking_SteamNetworking005_GetP2PSessionState(winISteamNetworking_SteamNetworking005 *_this, CSteamID steamIDRemote, P2PSessionState_t * pConnectionState)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_GetP2PSessionState(_this->linux_side, steamIDRemote, pConnectionState);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_AllowP2PPacketRelay, 8)
bool __thiscall winISteamNetworking_SteamNetworking005_AllowP2PPacketRelay(winISteamNetworking_SteamNetworking005 *_this, bool bAllow)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_AllowP2PPacketRelay(_this->linux_side, bAllow);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_CreateListenSocket, 20)
SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking005_CreateListenSocket(winISteamNetworking_SteamNetworking005 *_this, int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_CreateListenSocket(_this->linux_side, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket, 24)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket(winISteamNetworking_SteamNetworking005 *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket(_this->linux_side, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_CreateConnectionSocket, 16)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking005_CreateConnectionSocket(winISteamNetworking_SteamNetworking005 *_this, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_CreateConnectionSocket(_this->linux_side, nIP, nPort, nTimeoutSec);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_DestroySocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking005_DestroySocket(winISteamNetworking_SteamNetworking005 *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_DestroySocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_DestroyListenSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking005_DestroyListenSocket(winISteamNetworking_SteamNetworking005 *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_DestroyListenSocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_SendDataOnSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking005_SendDataOnSocket(winISteamNetworking_SteamNetworking005 *_this, SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_SendDataOnSocket(_this->linux_side, hSocket, pubData, cubData, bReliable);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket(winISteamNetworking_SteamNetworking005 *_this, SNetSocket_t hSocket, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket(_this->linux_side, hSocket, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_RetrieveDataFromSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking005_RetrieveDataFromSocket(winISteamNetworking_SteamNetworking005 *_this, SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_RetrieveDataFromSocket(_this->linux_side, hSocket, pubDest, cubDest, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_IsDataAvailable, 16)
bool __thiscall winISteamNetworking_SteamNetworking005_IsDataAvailable(winISteamNetworking_SteamNetworking005 *_this, SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_IsDataAvailable(_this->linux_side, hListenSocket, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_RetrieveData, 24)
bool __thiscall winISteamNetworking_SteamNetworking005_RetrieveData(winISteamNetworking_SteamNetworking005 *_this, SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_RetrieveData(_this->linux_side, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_GetSocketInfo, 24)
bool __thiscall winISteamNetworking_SteamNetworking005_GetSocketInfo(winISteamNetworking_SteamNetworking005 *_this, SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_GetSocketInfo(_this->linux_side, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_GetListenSocketInfo, 16)
bool __thiscall winISteamNetworking_SteamNetworking005_GetListenSocketInfo(winISteamNetworking_SteamNetworking005 *_this, SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_GetListenSocketInfo(_this->linux_side, hListenSocket, pnIP, pnPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_GetSocketConnectionType, 8)
ESNetSocketConnectionType __thiscall winISteamNetworking_SteamNetworking005_GetSocketConnectionType(winISteamNetworking_SteamNetworking005 *_this, SNetSocket_t hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_GetSocketConnectionType(_this->linux_side, hSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking005_GetMaxPacketSize, 8)
int __thiscall winISteamNetworking_SteamNetworking005_GetMaxPacketSize(winISteamNetworking_SteamNetworking005 *_this, SNetSocket_t hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking005_GetMaxPacketSize(_this->linux_side, hSocket);
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

winISteamNetworking_SteamNetworking005 *create_winISteamNetworking_SteamNetworking005(void *linux_side)
{
    winISteamNetworking_SteamNetworking005 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworking_SteamNetworking005));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworking_SteamNetworking005_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworking_SteamNetworking004.h"

typedef struct __winISteamNetworking_SteamNetworking004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworking_SteamNetworking004;

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_SendP2PPacket, 28)
bool __thiscall winISteamNetworking_SteamNetworking004_SendP2PPacket(winISteamNetworking_SteamNetworking004 *_this, CSteamID steamIDRemote, const void * pubData, uint32 cubData, EP2PSend eP2PSendType, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_SendP2PPacket(_this->linux_side, steamIDRemote, pubData, cubData, eP2PSendType, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_IsP2PPacketAvailable, 12)
bool __thiscall winISteamNetworking_SteamNetworking004_IsP2PPacketAvailable(winISteamNetworking_SteamNetworking004 *_this, uint32 * pcubMsgSize, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_IsP2PPacketAvailable(_this->linux_side, pcubMsgSize, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_ReadP2PPacket, 24)
bool __thiscall winISteamNetworking_SteamNetworking004_ReadP2PPacket(winISteamNetworking_SteamNetworking004 *_this, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, CSteamID * psteamIDRemote, int nVirtualPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_ReadP2PPacket(_this->linux_side, pubDest, cubDest, pcubMsgSize, psteamIDRemote, nVirtualPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser, 12)
bool __thiscall winISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser(winISteamNetworking_SteamNetworking004 *_this, CSteamID steamIDRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser(_this->linux_side, steamIDRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser, 12)
bool __thiscall winISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser(winISteamNetworking_SteamNetworking004 *_this, CSteamID steamIDRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser(_this->linux_side, steamIDRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_GetP2PSessionState, 16)
bool __thiscall winISteamNetworking_SteamNetworking004_GetP2PSessionState(winISteamNetworking_SteamNetworking004 *_this, CSteamID steamIDRemote, P2PSessionState_t * pConnectionState)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_GetP2PSessionState(_this->linux_side, steamIDRemote, pConnectionState);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_CreateListenSocket, 20)
SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking004_CreateListenSocket(winISteamNetworking_SteamNetworking004 *_this, int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_CreateListenSocket(_this->linux_side, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket, 24)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket(winISteamNetworking_SteamNetworking004 *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket(_this->linux_side, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_CreateConnectionSocket, 16)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking004_CreateConnectionSocket(winISteamNetworking_SteamNetworking004 *_this, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_CreateConnectionSocket(_this->linux_side, nIP, nPort, nTimeoutSec);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_DestroySocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking004_DestroySocket(winISteamNetworking_SteamNetworking004 *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_DestroySocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_DestroyListenSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking004_DestroyListenSocket(winISteamNetworking_SteamNetworking004 *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_DestroyListenSocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_SendDataOnSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking004_SendDataOnSocket(winISteamNetworking_SteamNetworking004 *_this, SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_SendDataOnSocket(_this->linux_side, hSocket, pubData, cubData, bReliable);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket(winISteamNetworking_SteamNetworking004 *_this, SNetSocket_t hSocket, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket(_this->linux_side, hSocket, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_RetrieveDataFromSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking004_RetrieveDataFromSocket(winISteamNetworking_SteamNetworking004 *_this, SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_RetrieveDataFromSocket(_this->linux_side, hSocket, pubDest, cubDest, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_IsDataAvailable, 16)
bool __thiscall winISteamNetworking_SteamNetworking004_IsDataAvailable(winISteamNetworking_SteamNetworking004 *_this, SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_IsDataAvailable(_this->linux_side, hListenSocket, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_RetrieveData, 24)
bool __thiscall winISteamNetworking_SteamNetworking004_RetrieveData(winISteamNetworking_SteamNetworking004 *_this, SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_RetrieveData(_this->linux_side, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_GetSocketInfo, 24)
bool __thiscall winISteamNetworking_SteamNetworking004_GetSocketInfo(winISteamNetworking_SteamNetworking004 *_this, SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_GetSocketInfo(_this->linux_side, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_GetListenSocketInfo, 16)
bool __thiscall winISteamNetworking_SteamNetworking004_GetListenSocketInfo(winISteamNetworking_SteamNetworking004 *_this, SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_GetListenSocketInfo(_this->linux_side, hListenSocket, pnIP, pnPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_GetSocketConnectionType, 8)
ESNetSocketConnectionType __thiscall winISteamNetworking_SteamNetworking004_GetSocketConnectionType(winISteamNetworking_SteamNetworking004 *_this, SNetSocket_t hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_GetSocketConnectionType(_this->linux_side, hSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking004_GetMaxPacketSize, 8)
int __thiscall winISteamNetworking_SteamNetworking004_GetMaxPacketSize(winISteamNetworking_SteamNetworking004 *_this, SNetSocket_t hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking004_GetMaxPacketSize(_this->linux_side, hSocket);
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

winISteamNetworking_SteamNetworking004 *create_winISteamNetworking_SteamNetworking004(void *linux_side)
{
    winISteamNetworking_SteamNetworking004 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworking_SteamNetworking004));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworking_SteamNetworking004_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworking_SteamNetworking003.h"

typedef struct __winISteamNetworking_SteamNetworking003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworking_SteamNetworking003;

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_SendP2PPacket, 24)
bool __thiscall winISteamNetworking_SteamNetworking003_SendP2PPacket(winISteamNetworking_SteamNetworking003 *_this, CSteamID steamIDRemote, const void * pubData, uint32 cubData, EP2PSend eP2PSendType)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_SendP2PPacket(_this->linux_side, steamIDRemote, pubData, cubData, eP2PSendType);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_IsP2PPacketAvailable, 8)
bool __thiscall winISteamNetworking_SteamNetworking003_IsP2PPacketAvailable(winISteamNetworking_SteamNetworking003 *_this, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_IsP2PPacketAvailable(_this->linux_side, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_ReadP2PPacket, 20)
bool __thiscall winISteamNetworking_SteamNetworking003_ReadP2PPacket(winISteamNetworking_SteamNetworking003 *_this, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, CSteamID * psteamIDRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_ReadP2PPacket(_this->linux_side, pubDest, cubDest, pcubMsgSize, psteamIDRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser, 12)
bool __thiscall winISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser(winISteamNetworking_SteamNetworking003 *_this, CSteamID steamIDRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser(_this->linux_side, steamIDRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser, 12)
bool __thiscall winISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser(winISteamNetworking_SteamNetworking003 *_this, CSteamID steamIDRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser(_this->linux_side, steamIDRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_GetP2PSessionState, 16)
bool __thiscall winISteamNetworking_SteamNetworking003_GetP2PSessionState(winISteamNetworking_SteamNetworking003 *_this, CSteamID steamIDRemote, P2PSessionState_t * pConnectionState)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_GetP2PSessionState(_this->linux_side, steamIDRemote, pConnectionState);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_CreateListenSocket, 20)
SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking003_CreateListenSocket(winISteamNetworking_SteamNetworking003 *_this, int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_CreateListenSocket(_this->linux_side, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket, 24)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket(winISteamNetworking_SteamNetworking003 *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket(_this->linux_side, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_CreateConnectionSocket, 16)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking003_CreateConnectionSocket(winISteamNetworking_SteamNetworking003 *_this, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_CreateConnectionSocket(_this->linux_side, nIP, nPort, nTimeoutSec);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_DestroySocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking003_DestroySocket(winISteamNetworking_SteamNetworking003 *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_DestroySocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_DestroyListenSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking003_DestroyListenSocket(winISteamNetworking_SteamNetworking003 *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_DestroyListenSocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_SendDataOnSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking003_SendDataOnSocket(winISteamNetworking_SteamNetworking003 *_this, SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_SendDataOnSocket(_this->linux_side, hSocket, pubData, cubData, bReliable);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket(winISteamNetworking_SteamNetworking003 *_this, SNetSocket_t hSocket, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket(_this->linux_side, hSocket, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_RetrieveDataFromSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking003_RetrieveDataFromSocket(winISteamNetworking_SteamNetworking003 *_this, SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_RetrieveDataFromSocket(_this->linux_side, hSocket, pubDest, cubDest, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_IsDataAvailable, 16)
bool __thiscall winISteamNetworking_SteamNetworking003_IsDataAvailable(winISteamNetworking_SteamNetworking003 *_this, SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_IsDataAvailable(_this->linux_side, hListenSocket, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_RetrieveData, 24)
bool __thiscall winISteamNetworking_SteamNetworking003_RetrieveData(winISteamNetworking_SteamNetworking003 *_this, SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_RetrieveData(_this->linux_side, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_GetSocketInfo, 24)
bool __thiscall winISteamNetworking_SteamNetworking003_GetSocketInfo(winISteamNetworking_SteamNetworking003 *_this, SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_GetSocketInfo(_this->linux_side, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_GetListenSocketInfo, 16)
bool __thiscall winISteamNetworking_SteamNetworking003_GetListenSocketInfo(winISteamNetworking_SteamNetworking003 *_this, SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_GetListenSocketInfo(_this->linux_side, hListenSocket, pnIP, pnPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_GetSocketConnectionType, 8)
ESNetSocketConnectionType __thiscall winISteamNetworking_SteamNetworking003_GetSocketConnectionType(winISteamNetworking_SteamNetworking003 *_this, SNetSocket_t hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_GetSocketConnectionType(_this->linux_side, hSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking003_GetMaxPacketSize, 8)
int __thiscall winISteamNetworking_SteamNetworking003_GetMaxPacketSize(winISteamNetworking_SteamNetworking003 *_this, SNetSocket_t hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking003_GetMaxPacketSize(_this->linux_side, hSocket);
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

winISteamNetworking_SteamNetworking003 *create_winISteamNetworking_SteamNetworking003(void *linux_side)
{
    winISteamNetworking_SteamNetworking003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworking_SteamNetworking003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworking_SteamNetworking003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworking_SteamNetworking002.h"

typedef struct __winISteamNetworking_SteamNetworking002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworking_SteamNetworking002;

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_CreateListenSocket, 20)
SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking002_CreateListenSocket(winISteamNetworking_SteamNetworking002 *_this, int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_CreateListenSocket(_this->linux_side, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket, 24)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket(winISteamNetworking_SteamNetworking002 *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_CreateP2PConnectionSocket(_this->linux_side, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_CreateConnectionSocket, 16)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking002_CreateConnectionSocket(winISteamNetworking_SteamNetworking002 *_this, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_CreateConnectionSocket(_this->linux_side, nIP, nPort, nTimeoutSec);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_DestroySocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking002_DestroySocket(winISteamNetworking_SteamNetworking002 *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_DestroySocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_DestroyListenSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking002_DestroyListenSocket(winISteamNetworking_SteamNetworking002 *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_DestroyListenSocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_SendDataOnSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking002_SendDataOnSocket(winISteamNetworking_SteamNetworking002 *_this, SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_SendDataOnSocket(_this->linux_side, hSocket, pubData, cubData, bReliable);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket(winISteamNetworking_SteamNetworking002 *_this, SNetSocket_t hSocket, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_IsDataAvailableOnSocket(_this->linux_side, hSocket, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_RetrieveDataFromSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking002_RetrieveDataFromSocket(winISteamNetworking_SteamNetworking002 *_this, SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_RetrieveDataFromSocket(_this->linux_side, hSocket, pubDest, cubDest, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_IsDataAvailable, 16)
bool __thiscall winISteamNetworking_SteamNetworking002_IsDataAvailable(winISteamNetworking_SteamNetworking002 *_this, SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_IsDataAvailable(_this->linux_side, hListenSocket, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_RetrieveData, 24)
bool __thiscall winISteamNetworking_SteamNetworking002_RetrieveData(winISteamNetworking_SteamNetworking002 *_this, SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_RetrieveData(_this->linux_side, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_GetSocketInfo, 24)
bool __thiscall winISteamNetworking_SteamNetworking002_GetSocketInfo(winISteamNetworking_SteamNetworking002 *_this, SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_GetSocketInfo(_this->linux_side, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_GetListenSocketInfo, 16)
bool __thiscall winISteamNetworking_SteamNetworking002_GetListenSocketInfo(winISteamNetworking_SteamNetworking002 *_this, SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_GetListenSocketInfo(_this->linux_side, hListenSocket, pnIP, pnPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_GetSocketConnectionType, 8)
ESNetSocketConnectionType __thiscall winISteamNetworking_SteamNetworking002_GetSocketConnectionType(winISteamNetworking_SteamNetworking002 *_this, SNetSocket_t hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_GetSocketConnectionType(_this->linux_side, hSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking002_GetMaxPacketSize, 8)
int __thiscall winISteamNetworking_SteamNetworking002_GetMaxPacketSize(winISteamNetworking_SteamNetworking002 *_this, SNetSocket_t hSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking002_GetMaxPacketSize(_this->linux_side, hSocket);
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

winISteamNetworking_SteamNetworking002 *create_winISteamNetworking_SteamNetworking002(void *linux_side)
{
    winISteamNetworking_SteamNetworking002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworking_SteamNetworking002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworking_SteamNetworking002_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworking_SteamNetworking001.h"

typedef struct __winISteamNetworking_SteamNetworking001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworking_SteamNetworking001;

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_CreateListenSocket, 16)
SNetListenSocket_t __thiscall winISteamNetworking_SteamNetworking001_CreateListenSocket(winISteamNetworking_SteamNetworking001 *_this, int nVirtualP2PPort, uint32 nIP, uint16 nPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_CreateListenSocket(_this->linux_side, nVirtualP2PPort, nIP, nPort);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket, 20)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket(winISteamNetworking_SteamNetworking001 *_this, CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket(_this->linux_side, steamIDTarget, nVirtualPort, nTimeoutSec);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_CreateConnectionSocket, 16)
SNetSocket_t __thiscall winISteamNetworking_SteamNetworking001_CreateConnectionSocket(winISteamNetworking_SteamNetworking001 *_this, uint32 nIP, uint16 nPort, int nTimeoutSec)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_CreateConnectionSocket(_this->linux_side, nIP, nPort, nTimeoutSec);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_DestroySocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking001_DestroySocket(winISteamNetworking_SteamNetworking001 *_this, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_DestroySocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_DestroyListenSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking001_DestroyListenSocket(winISteamNetworking_SteamNetworking001 *_this, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_DestroyListenSocket(_this->linux_side, hSocket, bNotifyRemoteEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_SendDataOnSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking001_SendDataOnSocket(winISteamNetworking_SteamNetworking001 *_this, SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_SendDataOnSocket(_this->linux_side, hSocket, pubData, cubData, bReliable);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket, 12)
bool __thiscall winISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket(winISteamNetworking_SteamNetworking001 *_this, SNetSocket_t hSocket, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket(_this->linux_side, hSocket, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_RetrieveDataFromSocket, 20)
bool __thiscall winISteamNetworking_SteamNetworking001_RetrieveDataFromSocket(winISteamNetworking_SteamNetworking001 *_this, SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket(_this->linux_side, hSocket, pubDest, cubDest, pcubMsgSize);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_IsDataAvailable, 16)
bool __thiscall winISteamNetworking_SteamNetworking001_IsDataAvailable(winISteamNetworking_SteamNetworking001 *_this, SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_IsDataAvailable(_this->linux_side, hListenSocket, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_RetrieveData, 24)
bool __thiscall winISteamNetworking_SteamNetworking001_RetrieveData(winISteamNetworking_SteamNetworking001 *_this, SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_RetrieveData(_this->linux_side, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_GetSocketInfo, 24)
bool __thiscall winISteamNetworking_SteamNetworking001_GetSocketInfo(winISteamNetworking_SteamNetworking001 *_this, SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_GetSocketInfo(_this->linux_side, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworking_SteamNetworking001_GetListenSocketInfo, 16)
bool __thiscall winISteamNetworking_SteamNetworking001_GetListenSocketInfo(winISteamNetworking_SteamNetworking001 *_this, SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort)
{
    TRACE("%p\n", _this);
    return cppISteamNetworking_SteamNetworking001_GetListenSocketInfo(_this->linux_side, hListenSocket, pnIP, pnPort);
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

winISteamNetworking_SteamNetworking001 *create_winISteamNetworking_SteamNetworking001(void *linux_side)
{
    winISteamNetworking_SteamNetworking001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworking_SteamNetworking001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworking_SteamNetworking001_vtable;
    r->linux_side = linux_side;
    return r;
}

