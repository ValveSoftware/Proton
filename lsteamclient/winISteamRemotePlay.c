/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite, 12)

uint32_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount(struct w_steam_iface *_this)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID(struct w_steam_iface *_this, int32_t iSessionIndex)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID_params params =
    {
        .linux_side = _this->u_iface,
        .iSessionIndex = iSessionIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID(struct w_steam_iface *_this, CSteamID *_ret, uint32_t unSessionID)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unSessionID = unSessionID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID, &params );
    return params._ret;
}

const char * __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName(struct w_steam_iface *_this, uint32_t unSessionID)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName_params params =
    {
        .linux_side = _this->u_iface,
        .unSessionID = unSessionID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor(struct w_steam_iface *_this, uint32_t unSessionID)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor_params params =
    {
        .linux_side = _this->u_iface,
        .unSessionID = unSessionID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution(struct w_steam_iface *_this, uint32_t unSessionID, int32_t *pnResolutionX, int32_t *pnResolutionY)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution_params params =
    {
        .linux_side = _this->u_iface,
        .unSessionID = unSessionID,
        .pnResolutionX = pnResolutionX,
        .pnResolutionY = pnResolutionY,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_vtable;

DEFINE_RTTI_DATA0(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001, 0, ".?AVISteamRemotePlay@@")

__ASM_BLOCK_BEGIN(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_vtables)
    __ASM_VTABLE(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution)
        VTABLE_ADD_FUNC(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTEPLAY_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_vtable, 7, "STEAMREMOTEPLAY_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionID, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionSteamID, 12)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientName, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientFormFactor, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BGetSessionClientResolution, 16)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BStartRemotePlayTogether, 8)
DEFINE_THISCALL_WRAPPER(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BSendRemotePlayTogetherInvite, 12)

uint32_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionCount(struct w_steam_iface *_this)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionCount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionID(struct w_steam_iface *_this, int32_t iSessionIndex)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionID_params params =
    {
        .linux_side = _this->u_iface,
        .iSessionIndex = iSessionIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionID, &params );
    return params._ret;
}

CSteamID * __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionSteamID(struct w_steam_iface *_this, CSteamID *_ret, uint32_t unSessionID)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .unSessionID = unSessionID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionSteamID, &params );
    return params._ret;
}

const char * __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientName(struct w_steam_iface *_this, uint32_t unSessionID)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientName_params params =
    {
        .linux_side = _this->u_iface,
        .unSessionID = unSessionID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientName, &params );
    return params._ret;
}

uint32_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientFormFactor(struct w_steam_iface *_this, uint32_t unSessionID)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientFormFactor_params params =
    {
        .linux_side = _this->u_iface,
        .unSessionID = unSessionID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_GetSessionClientFormFactor, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BGetSessionClientResolution(struct w_steam_iface *_this, uint32_t unSessionID, int32_t *pnResolutionX, int32_t *pnResolutionY)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BGetSessionClientResolution_params params =
    {
        .linux_side = _this->u_iface,
        .unSessionID = unSessionID,
        .pnResolutionX = pnResolutionX,
        .pnResolutionY = pnResolutionY,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BGetSessionClientResolution, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BStartRemotePlayTogether(struct w_steam_iface *_this, int8_t bShowOverlay)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BStartRemotePlayTogether_params params =
    {
        .linux_side = _this->u_iface,
        .bShowOverlay = bShowOverlay,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BStartRemotePlayTogether, &params );
    return params._ret;
}

int8_t __thiscall winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BSendRemotePlayTogetherInvite(struct w_steam_iface *_this, CSteamID steamIDFriend)
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BSendRemotePlayTogetherInvite_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDFriend = steamIDFriend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_BSendRemotePlayTogetherInvite, &params );
    return params._ret;
}

extern vtable_ptr winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_vtable;

DEFINE_RTTI_DATA0(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002, 0, ".?AVISteamRemotePlay@@")

__ASM_BLOCK_BEGIN(winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMREMOTEPLAY_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_vtable, 8, "STEAMREMOTEPLAY_INTERFACE_VERSION002");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamRemotePlay_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_rtti( base );
    init_winISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION002_rtti( base );
#endif /* __x86_64__ */
}
