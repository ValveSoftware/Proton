#include "steam_defs.h"
#include "steamworks_sdk_142/steam_api.h"
#include "steamclient_private.h"
#include "cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "struct_converters_142.h"
uint32 cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps(void *linux_side)
{
    return ((ISteamAppList*)linux_side)->GetNumInstalledApps();
}

uint32 cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps(void *linux_side, AppId_t * pvecAppID, uint32 unMaxAppIDs)
{
    return ((ISteamAppList*)linux_side)->GetInstalledApps((AppId_t *)pvecAppID, (uint32)unMaxAppIDs);
}

int cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName(void *linux_side, AppId_t nAppID, char * pchName, int cchNameMax)
{
    return ((ISteamAppList*)linux_side)->GetAppName((AppId_t)nAppID, (char *)pchName, (int)cchNameMax);
}

int cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir(void *linux_side, AppId_t nAppID, char * pchDirectory, int cchNameMax)
{
    return ((ISteamAppList*)linux_side)->GetAppInstallDir((AppId_t)nAppID, (char *)pchDirectory, (int)cchNameMax);
}

int cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId(void *linux_side, AppId_t nAppID)
{
    return ((ISteamAppList*)linux_side)->GetAppBuildId((AppId_t)nAppID);
}

#ifdef __cplusplus
}
#endif
