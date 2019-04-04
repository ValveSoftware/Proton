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

#include "cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001.h"

typedef struct __winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled, 4)
bool __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying, 4)
bool __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus, 4)
AudioPlayback_Status __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play, 4)
void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause, 4)
void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious, 4)
void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext, 4)
void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume, 8)
void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *_this, float flVolume)
{
    TRACE("%p\n", _this);
    cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume(_this->linux_side, flVolume);
}

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume, 4)
float __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume(_this->linux_side);
}

extern vtable_ptr winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume)
    );
#ifndef __GNUC__
}
#endif

winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *create_winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001(void *linux_side)
{
    winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_vtable;
    r->linux_side = linux_side;
    return r;
}

