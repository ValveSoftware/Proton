/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002.h"

typedef struct __winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous, 24)
void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, CSteamID steamIDRemote, uint32 unConnectionIDSrc, const void * pMsgRendezvous, uint32 cbRendezvous)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous(_this->linux_side, steamIDRemote, unConnectionIDSrc, pMsgRendezvous, cbRendezvous);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure, 24)
void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, CSteamID steamIDRemote, uint32 unConnectionIDDest, uint32 nReason, const char * pszReason)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure(_this->linux_side, steamIDRemote, unConnectionIDDest, nReason, pszReason);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync, 4)
SteamAPICall_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON, 12)
int __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, void * buf, uint32 cbBuf)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON(_this->linux_side, buf, cbBuf);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket, 12)
void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, const void * pTicket, uint32 cbTicket)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket(_this->linux_side, pTicket, cbTicket);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount, 4)
uint32 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket, 16)
int __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, uint32 idxTicket, void * buf, uint32 cbBuf)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket(_this->linux_side, idxTicket, buf, cbBuf);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg, 12)
void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, const void * pMsg, uint32 cbMsg)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg(_this->linux_side, pMsg, cbMsg);
}

extern vtable_ptr winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002,
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg)
    );
#ifndef __GNUC__
}
#endif

winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *create_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002(void *linux_side)
{
    winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_vtable;
    r->linux_side = linux_side;
    return r;
}

