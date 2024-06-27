/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting, 8)

void __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL(struct w_steam_iface *_this, uint32_t unVideoAppID)
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL, &params );
}

int8_t __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting(struct w_steam_iface *_this, int32_t *pnNumViewers)
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params params =
    {
        .linux_side = _this->u_iface,
        .pnNumViewers = pnNumViewers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting, &params );
    return params._ret;
}

extern vtable_ptr winISteamVideo_STEAMVIDEO_INTERFACE_V001_vtable;

DEFINE_RTTI_DATA0(winISteamVideo_STEAMVIDEO_INTERFACE_V001, 0, ".?AVISteamVideo@@")

__ASM_BLOCK_BEGIN(winISteamVideo_STEAMVIDEO_INTERFACE_V001_vtables)
    __ASM_VTABLE(winISteamVideo_STEAMVIDEO_INTERFACE_V001,
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamVideo_STEAMVIDEO_INTERFACE_V001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMVIDEO_INTERFACE_V001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamVideo_STEAMVIDEO_INTERFACE_V001_vtable, 2, "STEAMVIDEO_INTERFACE_V001");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp, 16)

void __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL(struct w_steam_iface *_this, uint32_t unVideoAppID)
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL, &params );
}

int8_t __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting(struct w_steam_iface *_this, int32_t *pnNumViewers)
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params params =
    {
        .linux_side = _this->u_iface,
        .pnNumViewers = pnNumViewers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting, &params );
    return params._ret;
}

void __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings(struct w_steam_iface *_this, uint32_t unVideoAppID)
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings, &params );
}

int8_t __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp(struct w_steam_iface *_this, uint32_t unVideoAppID, char *pchBuffer, int32_t *pnBufferSize)
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
        .pchBuffer = pchBuffer,
        .pnBufferSize = pnBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp, &params );
    return params._ret;
}

extern vtable_ptr winISteamVideo_STEAMVIDEO_INTERFACE_V002_vtable;

DEFINE_RTTI_DATA0(winISteamVideo_STEAMVIDEO_INTERFACE_V002, 0, ".?AVISteamVideo@@")

__ASM_BLOCK_BEGIN(winISteamVideo_STEAMVIDEO_INTERFACE_V002_vtables)
    __ASM_VTABLE(winISteamVideo_STEAMVIDEO_INTERFACE_V002,
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamVideo_STEAMVIDEO_INTERFACE_V002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMVIDEO_INTERFACE_V002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamVideo_STEAMVIDEO_INTERFACE_V002_vtable, 4, "STEAMVIDEO_INTERFACE_V002");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V007_GetVideoURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V007_IsBroadcasting, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V007_GetOPFSettings, 8)
DEFINE_THISCALL_WRAPPER(winISteamVideo_STEAMVIDEO_INTERFACE_V007_GetOPFStringForApp, 16)

void __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V007_GetVideoURL(struct w_steam_iface *_this, uint32_t unVideoAppID)
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V007_GetVideoURL_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamVideo_STEAMVIDEO_INTERFACE_V007_GetVideoURL, &params );
}

int8_t __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V007_IsBroadcasting(struct w_steam_iface *_this, int32_t *pnNumViewers)
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V007_IsBroadcasting_params params =
    {
        .linux_side = _this->u_iface,
        .pnNumViewers = pnNumViewers,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamVideo_STEAMVIDEO_INTERFACE_V007_IsBroadcasting, &params );
    return params._ret;
}

void __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V007_GetOPFSettings(struct w_steam_iface *_this, uint32_t unVideoAppID)
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V007_GetOPFSettings_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamVideo_STEAMVIDEO_INTERFACE_V007_GetOPFSettings, &params );
}

int8_t __thiscall winISteamVideo_STEAMVIDEO_INTERFACE_V007_GetOPFStringForApp(struct w_steam_iface *_this, uint32_t unVideoAppID, char *pchBuffer, int32_t *pnBufferSize)
{
    struct ISteamVideo_STEAMVIDEO_INTERFACE_V007_GetOPFStringForApp_params params =
    {
        .linux_side = _this->u_iface,
        .unVideoAppID = unVideoAppID,
        .pchBuffer = pchBuffer,
        .pnBufferSize = pnBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamVideo_STEAMVIDEO_INTERFACE_V007_GetOPFStringForApp, &params );
    return params._ret;
}

extern vtable_ptr winISteamVideo_STEAMVIDEO_INTERFACE_V007_vtable;

DEFINE_RTTI_DATA0(winISteamVideo_STEAMVIDEO_INTERFACE_V007, 0, ".?AVISteamVideo@@")

__ASM_BLOCK_BEGIN(winISteamVideo_STEAMVIDEO_INTERFACE_V007_vtables)
    __ASM_VTABLE(winISteamVideo_STEAMVIDEO_INTERFACE_V007,
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V007_GetVideoURL)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V007_IsBroadcasting)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V007_GetOPFSettings)
        VTABLE_ADD_FUNC(winISteamVideo_STEAMVIDEO_INTERFACE_V007_GetOPFStringForApp)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamVideo_STEAMVIDEO_INTERFACE_V007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMVIDEO_INTERFACE_V007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamVideo_STEAMVIDEO_INTERFACE_V007_vtable, 4, "STEAMVIDEO_INTERFACE_V007");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamVideo_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamVideo_STEAMVIDEO_INTERFACE_V001_rtti( base );
    init_winISteamVideo_STEAMVIDEO_INTERFACE_V002_rtti( base );
    init_winISteamVideo_STEAMVIDEO_INTERFACE_V007_rtti( base );
#endif /* __x86_64__ */
}
