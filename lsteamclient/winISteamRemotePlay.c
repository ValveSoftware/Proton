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

#include "cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001.h"

typedef struct __winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite, 12)

uint32 __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount(_this->linux_side);
    return _ret;
}

RemotePlaySessionID_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, int iSessionIndex)
{
    RemotePlaySessionID_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID(_this->linux_side, iSessionIndex);
    return _ret;
}

CSteamID * __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, CSteamID *_ret, RemotePlaySessionID_t unSessionID)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID(_this->linux_side, unSessionID);
    return _ret;
}

const char * __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, RemotePlaySessionID_t unSessionID)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName(_this->linux_side, unSessionID);
    return _ret;
}

ESteamDeviceFormFactor __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, RemotePlaySessionID_t unSessionID)
{
    ESteamDeviceFormFactor _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor(_this->linux_side, unSessionID);
    return _ret;
}

bool __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution(_this->linux_side, unSessionID, pnResolutionX, pnResolutionY);
    return _ret;
}

bool __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, CSteamID steamIDFriend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite(_this->linux_side, steamIDFriend);
    return _ret;
}

extern vtable_ptr winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite)
    );
#ifndef __GNUC__
}
#endif

winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *create_winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001(void *linux_side)
{
    winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *r = alloc_mem_for_iface(sizeof(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001), "STEAMREMOTEPLAY_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_vtable, 7, "STEAMREMOTEPLAY_INTERFACE_VERSION001");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002.h"

typedef struct __winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002;

DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionID, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionSteamID, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientName, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientFormFactor, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BGetSessionClientResolution, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BStartRemotePlayTogether, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BSendRemotePlayTogetherInvite, 12)

uint32 __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionCount(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionCount(_this->linux_side);
    return _ret;
}

RemotePlaySessionID_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionID(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 *_this, int iSessionIndex)
{
    RemotePlaySessionID_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionID(_this->linux_side, iSessionIndex);
    return _ret;
}

CSteamID * __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionSteamID(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 *_this, CSteamID *_ret, RemotePlaySessionID_t unSessionID)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionSteamID(_this->linux_side, unSessionID);
    return _ret;
}

const char * __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientName(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 *_this, RemotePlaySessionID_t unSessionID)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientName(_this->linux_side, unSessionID);
    return _ret;
}

ESteamDeviceFormFactor __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientFormFactor(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 *_this, RemotePlaySessionID_t unSessionID)
{
    ESteamDeviceFormFactor _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientFormFactor(_this->linux_side, unSessionID);
    return _ret;
}

bool __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BGetSessionClientResolution(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 *_this, RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BGetSessionClientResolution(_this->linux_side, unSessionID, pnResolutionX, pnResolutionY);
    return _ret;
}

bool __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BStartRemotePlayTogether(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 *_this, bool bShowOverlay)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BStartRemotePlayTogether(_this->linux_side, bShowOverlay);
    return _ret;
}

bool __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BSendRemotePlayTogetherInvite(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 *_this, CSteamID steamIDFriend)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BSendRemotePlayTogetherInvite(_this->linux_side, steamIDFriend);
    return _ret;
}

extern vtable_ptr winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionCount)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionID)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionSteamID)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientName)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientFormFactor)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BGetSessionClientResolution)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BStartRemotePlayTogether)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BSendRemotePlayTogetherInvite)
    );
#ifndef __GNUC__
}
#endif

winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 *create_winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002(void *linux_side)
{
    winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002 *r = alloc_mem_for_iface(sizeof(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002), "STEAMREMOTEPLAY_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_vtable, 8, "STEAMREMOTEPLAY_INTERFACE_VERSION002");
    r->linux_side = linux_side;
    return r;
}

