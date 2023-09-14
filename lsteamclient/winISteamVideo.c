/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamVideo_STEAMVIDEO_INTERFACE_V001.h"

DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting, 8)

void __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL(struct w_steam_iface *_this, AppId_t unVideoAppID)
{
    struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
    };
    TRACE("%p\n", _this);
    cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL( &params );
}

bool __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting(struct w_steam_iface *_this, int32_t *pnNumViewers)
{
    struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params params =
    {
        .linux_side = _this->u_iface,
        .pnNumViewers = pnNumViewers,
    };
    TRACE("%p\n", _this);
    cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting( &params );
    return params._ret;
}

extern vtable_ptr winISteamVideo_STEAMVIDEO_INTERFACE_V001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamVideo_STEAMVIDEO_INTERFACE_V001,
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamVideo_STEAMVIDEO_INTERFACE_V001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMVIDEO_INTERFACE_V001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamVideo_STEAMVIDEO_INTERFACE_V001_vtable, 2, "STEAMVIDEO_INTERFACE_V001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamVideo_STEAMVIDEO_INTERFACE_V002.h"

DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp, 16)

void __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL(struct w_steam_iface *_this, AppId_t unVideoAppID)
{
    struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
    };
    TRACE("%p\n", _this);
    cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL( &params );
}

bool __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting(struct w_steam_iface *_this, int32_t *pnNumViewers)
{
    struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params params =
    {
        .linux_side = _this->u_iface,
        .pnNumViewers = pnNumViewers,
    };
    TRACE("%p\n", _this);
    cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting( &params );
    return params._ret;
}

void __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings(struct w_steam_iface *_this, AppId_t unVideoAppID)
{
    struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
    };
    TRACE("%p\n", _this);
    cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings( &params );
}

bool __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp(struct w_steam_iface *_this, AppId_t unVideoAppID, char *pchBuffer, int32_t *pnBufferSize)
{
    struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
        .pchBuffer = pchBuffer,
        .pnBufferSize = pnBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp( &params );
    return params._ret;
}

extern vtable_ptr winISteamVideo_STEAMVIDEO_INTERFACE_V002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamVideo_STEAMVIDEO_INTERFACE_V002,
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamVideo_STEAMVIDEO_INTERFACE_V002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMVIDEO_INTERFACE_V002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamVideo_STEAMVIDEO_INTERFACE_V002_vtable, 4, "STEAMVIDEO_INTERFACE_V002");
    r->u_iface = u_iface;
    return r;
}

