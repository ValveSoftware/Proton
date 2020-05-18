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

#include "cppISteamTV_STEAMTV_INTERFACE_V001.h"

typedef struct __winISteamTV_STEAMTV_INTERFACE_V001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamTV_STEAMTV_INTERFACE_V001;

DEFINE_THISCALL_WRAPPER(winISteamTV_STEAMTV_INTERFACE_V001_IsBroadcasting, 8)
bool __thiscall winISteamTV_STEAMTV_INTERFACE_V001_IsBroadcasting(winISteamTV_STEAMTV_INTERFACE_V001 *_this, int * pnNumViewers )
{
    TRACE("%p\n", _this);
    return cppISteamTV_STEAMTV_INTERFACE_V001_IsBroadcasting(_this->linux_side, pnNumViewers);
}

DEFINE_THISCALL_WRAPPER(winISteamTV_STEAMTV_INTERFACE_V001_AddBroadcastGameData, 12)
void __thiscall winISteamTV_STEAMTV_INTERFACE_V001_AddBroadcastGameData(winISteamTV_STEAMTV_INTERFACE_V001 *_this, const char * pchKey, const char * pchValue )
{
    TRACE("%p\n", _this);
    return cppISteamTV_STEAMTV_INTERFACE_V001_AddBroadcastGameData(_this->linux_side, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamTV_STEAMTV_INTERFACE_V001_RemoveBroadcastGameData, 8)
void __thiscall winISteamTV_STEAMTV_INTERFACE_V001_RemoveBroadcastGameData(winISteamTV_STEAMTV_INTERFACE_V001 *_this, const char * pchKey )
{
    TRACE("%p\n", _this);
    return cppISteamTV_STEAMTV_INTERFACE_V001_RemoveBroadcastGameData(_this->linux_side, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamTV_STEAMTV_INTERFACE_V001_AddTimelineMarker, 24)
void __thiscall winISteamTV_STEAMTV_INTERFACE_V001_AddTimelineMarker(winISteamTV_STEAMTV_INTERFACE_V001 *_this, const char * pchTemplateName, bool bPersistent, uint8 nColorR, uint8 nColorG, uint8 nColorB )
{
    TRACE("%p\n", _this);
    return cppISteamTV_STEAMTV_INTERFACE_V001_AddTimelineMarker(_this->linux_side, pchTemplateName, bPersistent, nColorR, nColorG, nColorB);
}

DEFINE_THISCALL_WRAPPER(winISteamTV_STEAMTV_INTERFACE_V001_RemoveTimelineMarker, 8)
void __thiscall winISteamTV_STEAMTV_INTERFACE_V001_RemoveTimelineMarker(winISteamTV_STEAMTV_INTERFACE_V001 *_this )
{
    TRACE("%p\n", _this);
    return cppISteamTV_STEAMTV_INTERFACE_V001_RemoveTimelineMarker(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamTV_STEAMTV_INTERFACE_V001_AddRegion, 20)
uint32 __thiscall winISteamTV_STEAMTV_INTERFACE_V001_AddRegion(winISteamTV_STEAMTV_INTERFACE_V001 *_this, const char * pchElementName, const char * pchTimelineDataSection, const SteamTVRegion_t * pSteamTVRegion, ESteamTVRegionBehavior eSteamTVRegionBehavior )
{
    TRACE("%p\n", _this);
    return cppISteamTV_STEAMTV_INTERFACE_V001_AddRegion(_this->linux_side, pchElementName, pchTimelineDataSection, pSteamTVRegion, eSteamTVRegionBehavior);
}

DEFINE_THISCALL_WRAPPER(winISteamTV_STEAMTV_INTERFACE_V001_RemoveRegion, 8)
void __thiscall winISteamTV_STEAMTV_INTERFACE_V001_RemoveRegion(winISteamTV_STEAMTV_INTERFACE_V001 *_this, uint32 unRegionHandle )
{
    TRACE("%p\n", _this);
    return cppISteamTV_STEAMTV_INTERFACE_V001_RemoveRegion(_this->linux_side, unRegionHandle);
}


extern vtable_ptr winISteamTV_STEAMTV_INTERFACE_V001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamTV_STEAMTV_INTERFACE_V001,
        VTABLE_ADD_FUNC(winISteamTV_STEAMTV_INTERFACE_V001_IsBroadcasting)
        VTABLE_ADD_FUNC(winISteamTV_STEAMTV_INTERFACE_V001_AddBroadcastGameData)
        VTABLE_ADD_FUNC(winISteamTV_STEAMTV_INTERFACE_V001_RemoveBroadcastGameData)
        VTABLE_ADD_FUNC(winISteamTV_STEAMTV_INTERFACE_V001_AddTimelineMarker)
        VTABLE_ADD_FUNC(winISteamTV_STEAMTV_INTERFACE_V001_RemoveTimelineMarker)
        VTABLE_ADD_FUNC(winISteamTV_STEAMTV_INTERFACE_V001_AddRegion)
        VTABLE_ADD_FUNC(winISteamTV_STEAMTV_INTERFACE_V001_RemoveRegion)
    );
#ifndef __GNUC__
}
#endif

winISteamTV_STEAMTV_INTERFACE_V001 *create_winISteamTV_STEAMTV_INTERFACE_V001(void *linux_side)
{
    winISteamTV_STEAMTV_INTERFACE_V001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamTV_STEAMTV_INTERFACE_V001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamTV_STEAMTV_INTERFACE_V001_vtable;
    r->linux_side = linux_side;
    return r;
}

