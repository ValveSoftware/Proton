/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps, 4)
DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps, 12)
DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName, 16)
DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir, 16)
DEFINE_THISCALL_WRAPPER(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId, 8)

uint32_t __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps(struct w_steam_iface *_this)
{
    struct ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps, &params );
    return params._ret;
}

uint32_t __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps(struct w_steam_iface *_this, uint32_t *pvecAppID, uint32_t unMaxAppIDs)
{
    struct ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps_params params =
    {
        .linux_side = _this->u_iface,
        .pvecAppID = pvecAppID,
        .unMaxAppIDs = unMaxAppIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps, &params );
    return params._ret;
}

int32_t __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName(struct w_steam_iface *_this, uint32_t nAppID, char *pchName, int32_t cchNameMax)
{
    struct ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .pchName = pchName,
        .cchNameMax = cchNameMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName, &params );
    return params._ret;
}

int32_t __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir(struct w_steam_iface *_this, uint32_t nAppID, char *pchDirectory, int32_t cchNameMax)
{
    struct ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .pchDirectory = pchDirectory,
        .cchNameMax = cchNameMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir, &params );
    return params._ret;
}

int32_t __thiscall winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId(struct w_steam_iface *_this, uint32_t nAppID)
{
    struct ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId, &params );
    return params._ret;
}

extern vtable_ptr winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_vtable;

DEFINE_RTTI_DATA0(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001, 0, ".?AVISteamAppList@@")

__ASM_BLOCK_BEGIN(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_vtables)
    __ASM_VTABLE(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps)
        VTABLE_ADD_FUNC(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps)
        VTABLE_ADD_FUNC(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName)
        VTABLE_ADD_FUNC(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir)
        VTABLE_ADD_FUNC(winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPLIST_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_vtable, 5, "STEAMAPPLIST_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamAppList_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_rtti( base );
#endif /* __x86_64__ */
}
