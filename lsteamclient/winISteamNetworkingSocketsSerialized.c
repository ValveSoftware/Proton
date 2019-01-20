/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003.h"

typedef struct __winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous, 24)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *_this, CSteamID _a, uint32 _b, const void * _c, uint32 _d)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous(_this->linux_side, _a, _b, _c, _d);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure, 24)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *_this, CSteamID _a, uint32 _b, uint32 _c, const char * _d)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure(_this->linux_side, _a, _b, _c, _d);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync, 4)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON, 16)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *_this, void * _a, uint32 _b, const char * _c)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON(_this->linux_side, _a, _b, _c);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket, 12)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *_this, const void * _a, uint32 _b)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket(_this->linux_side, _a, _b);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount, 4)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket, 20)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *_this, uint32 _a, void * _b, uint32 _c, uint32 _d)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket(_this->linux_side, _a, _b, _c, _d);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg, 12)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *_this, const void * _a, uint32 _b)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg(_this->linux_side, _a, _b);
}

extern vtable_ptr winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003,
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg)
    );
#ifndef __GNUC__
}
#endif

winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *create_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003(void *linux_side)
{
    winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002.h"

typedef struct __winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous, 24)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, CSteamID _a, uint32 _b, const void * _c, uint32 _d)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous(_this->linux_side, _a, _b, _c, _d);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure, 24)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, CSteamID _a, uint32 _b, uint32 _c, const char * _d)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure(_this->linux_side, _a, _b, _c, _d);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync, 4)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON, 12)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, void * _a, uint32 _b)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON(_this->linux_side, _a, _b);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket, 12)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, const void * _a, uint32 _b)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket(_this->linux_side, _a, _b);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount, 4)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket, 16)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, uint32 _a, void * _b, uint32 _c)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket(_this->linux_side, _a, _b, _c);
}

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg, 12)
uint64 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002 *_this, const void * _a, uint32 _b)
{
    TRACE("%p\n", _this);
    return cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg(_this->linux_side, _a, _b);
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

