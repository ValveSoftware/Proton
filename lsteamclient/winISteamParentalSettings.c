/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked, 4)
DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked, 8)
DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList, 8)
DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked, 8)
DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList, 8)

bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked(struct w_steam_iface *_this, AppId_t nAppID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked(_this->u_iface, nAppID);
    return _ret;
}

bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList(struct w_steam_iface *_this, AppId_t nAppID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList(_this->u_iface, nAppID);
    return _ret;
}

bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked(struct w_steam_iface *_this, EParentalFeature eFeature)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked(_this->u_iface, eFeature);
    return _ret;
}

bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList(struct w_steam_iface *_this, EParentalFeature eFeature)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList(_this->u_iface, eFeature);
    return _ret;
}

extern vtable_ptr winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled)
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked)
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked)
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList)
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked)
        VTABLE_ADD_FUNC(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMPARENTALSETTINGS_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_vtable, 6, "STEAMPARENTALSETTINGS_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

