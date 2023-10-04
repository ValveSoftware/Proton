/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume, 4)

int8_t __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled(struct w_steam_iface *_this)
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled, &params );
    return params._ret;
}

int8_t __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying(struct w_steam_iface *_this)
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying, &params );
    return params._ret;
}

uint32_t __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus(struct w_steam_iface *_this)
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus, &params );
    return params._ret;
}

void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play(struct w_steam_iface *_this)
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play, &params );
}

void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause(struct w_steam_iface *_this)
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause, &params );
}

void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious(struct w_steam_iface *_this)
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious, &params );
}

void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext(struct w_steam_iface *_this)
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext, &params );
}

void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume(struct w_steam_iface *_this, float flVolume)
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume_params params =
    {
        .linux_side = _this->u_iface,
        .flVolume = flVolume,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume, &params );
}

float __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume(struct w_steam_iface *_this)
{
    struct ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume, &params );
    return params._ret;
}

extern vtable_ptr winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_vtable;

DEFINE_RTTI_DATA0(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001, 0, ".?AVISteamMusic@@")

__ASM_BLOCK_BEGIN(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMMUSIC_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_vtable, 9, "STEAMMUSIC_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamMusic_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_rtti( base );
#endif /* __x86_64__ */
}
