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
uint32 __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID, 8)
RemotePlaySessionID_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, int iSessionIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID(_this->linux_side, iSessionIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID, 12)
CSteamID *__thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, CSteamID *_r, RemotePlaySessionID_t unSessionID)
{
    TRACE("%p\n", _this);
    *_r = cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID(_this->linux_side, unSessionID);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName, 8)
const char * __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, RemotePlaySessionID_t unSessionID)
{
    TRACE("%p\n", _this);
    return cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName(_this->linux_side, unSessionID);
}

DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor, 8)
ESteamDeviceFormFactor __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, RemotePlaySessionID_t unSessionID)
{
    TRACE("%p\n", _this);
    return cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor(_this->linux_side, unSessionID);
}

DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution, 16)
bool __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, RemotePlaySessionID_t unSessionID, int * pnResolutionX, int * pnResolutionY)
{
    TRACE("%p\n", _this);
    return cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution(_this->linux_side, unSessionID, pnResolutionX, pnResolutionY);
}

DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite, 12)
bool __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *_this, CSteamID steamIDFriend)
{
    TRACE("%p\n", _this);
    return cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite(_this->linux_side, steamIDFriend);
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
    winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_vtable;
    r->linux_side = linux_side;
    return r;
}

