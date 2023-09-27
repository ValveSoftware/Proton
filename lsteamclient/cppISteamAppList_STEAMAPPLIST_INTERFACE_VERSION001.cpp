#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001.h"
void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps_params *params )
{
    params->_ret = ((ISteamAppList*)params->linux_side)->GetNumInstalledApps(  );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps_params *params )
{
    params->_ret = ((ISteamAppList*)params->linux_side)->GetInstalledApps( (AppId_t *)params->pvecAppID, (uint32)params->unMaxAppIDs );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName_params *params )
{
    params->_ret = ((ISteamAppList*)params->linux_side)->GetAppName( (AppId_t)params->nAppID, (char *)params->pchName, (int)params->cchNameMax );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir_params *params )
{
    params->_ret = ((ISteamAppList*)params->linux_side)->GetAppInstallDir( (AppId_t)params->nAppID, (char *)params->pchDirectory, (int)params->cchNameMax );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId_params *params )
{
    params->_ret = ((ISteamAppList*)params->linux_side)->GetAppBuildId( (AppId_t)params->nAppID );
}

#ifdef __cplusplus
}
#endif
