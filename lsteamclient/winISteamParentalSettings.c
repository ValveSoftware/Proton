/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked, 4)
DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked, 8)
DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList, 8)
DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked, 8)
DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList, 8)

int8_t __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled(struct w_steam_iface *_this)
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled, &params );
    return params._ret;
}

int8_t __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked(struct w_steam_iface *_this)
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked, &params );
    return params._ret;
}

int8_t __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked, &params );
    return params._ret;
}

int8_t __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList, &params );
    return params._ret;
}

int8_t __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked(struct w_steam_iface *_this, uint32_t eFeature)
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked_params params =
    {
        .linux_side = _this->u_iface,
        .eFeature = eFeature,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked, &params );
    return params._ret;
}

int8_t __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList(struct w_steam_iface *_this, uint32_t eFeature)
{
    struct ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList_params params =
    {
        .linux_side = _this->u_iface,
        .eFeature = eFeature,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList, &params );
    return params._ret;
}

extern vtable_ptr winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_vtable;

DEFINE_RTTI_DATA0(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001, 0, ".?AVISteamParentalSettings@@")

__ASM_BLOCK_BEGIN(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_vtables)
    __ASM_VTABLE(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled)
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked)
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked)
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList)
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked)
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMPARENTALSETTINGS_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_vtable, 6, "STEAMPARENTALSETTINGS_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamParentalSettings_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_rtti( base );
#endif /* __x86_64__ */
}
