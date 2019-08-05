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

#include "cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001.h"

typedef struct __winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps, 4)
uint32 __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps, 12)
uint32 __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *_this, AppId_t * pvecAppID, uint32 unMaxAppIDs)
{
    TRACE("%p\n", _this);
    return cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps(_this->linux_side, pvecAppID, unMaxAppIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName, 16)
int __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *_this, AppId_t nAppID, char * pchName, int cchNameMax)
{
    TRACE("%p\n", _this);
    return cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName(_this->linux_side, nAppID, pchName, cchNameMax);
}

DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir, 16)
int __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *_this, AppId_t nAppID, char * pchDirectory, int cchNameMax)
{
    uint32 path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir(_this->linux_side, nAppID, pchDirectory, cchNameMax);
    path_result = steamclient_unix_path_to_dos_path(path_result, pchDirectory, pchDirectory, cchNameMax, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId, 8)
int __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId(_this->linux_side, nAppID);
}

extern vtable_ptr winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps)
        VTABLE_ADD_FUNC(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps)
        VTABLE_ADD_FUNC(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName)
        VTABLE_ADD_FUNC(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir)
        VTABLE_ADD_FUNC(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId)
    );
#ifndef __GNUC__
}
#endif

winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *create_winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001(void *linux_side)
{
    winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_vtable;
    r->linux_side = linux_side;
    return r;
}

