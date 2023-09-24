/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps, 4)
DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps, 12)
DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName, 16)
DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir, 16)
DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId, 8)

uint32 __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps(struct w_steam_iface *_this, AppId_t *pvecAppID, uint32 unMaxAppIDs)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps(_this->u_iface, pvecAppID, unMaxAppIDs);
    return _ret;
}

int __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName(struct w_steam_iface *_this, AppId_t nAppID, char *pchName, int cchNameMax)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName(_this->u_iface, nAppID, pchName, cchNameMax);
    return _ret;
}

int __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir(struct w_steam_iface *_this, AppId_t nAppID, char *pchDirectory, int cchNameMax)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir(_this->u_iface, nAppID, pchDirectory, cchNameMax);
    _ret = steamclient_unix_path_to_dos_path(_ret, pchDirectory, pchDirectory, cchNameMax, 0);
    return _ret;
}

int __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId(struct w_steam_iface *_this, AppId_t nAppID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId(_this->u_iface, nAppID);
    return _ret;
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

struct w_steam_iface *create_winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPLIST_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_vtable, 5, "STEAMAPPLIST_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

