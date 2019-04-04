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

#include "cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001.h"

typedef struct __winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled, 4)
bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked, 4)
bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked, 8)
bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList, 8)
bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked, 8)
bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *_this, EParentalFeature eFeature)
{
    TRACE("%p\n", _this);
    return cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked(_this->linux_side, eFeature);
}

DEFINE_THISCALL_WRAPPER(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList, 8)
bool __thiscall winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *_this, EParentalFeature eFeature)
{
    TRACE("%p\n", _this);
    return cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList(_this->linux_side, eFeature);
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

winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *create_winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001(void *linux_side)
{
    winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_vtable;
    r->linux_side = linux_side;
    return r;
}

