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

struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint32_t GetNumInstalledApps(  ) = 0;
    virtual uint32_t GetInstalledApps( uint32_t *, uint32_t ) = 0;
    virtual int32_t GetAppName( uint32_t, char *, int32_t ) = 0;
    virtual int32_t GetAppInstallDir( uint32_t, char *, int32_t ) = 0;
    virtual int32_t GetAppBuildId( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps_params *params )
{
    struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *iface = (struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetNumInstalledApps(  );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps_params *params )
{
    struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *iface = (struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetInstalledApps( params->pvecAppID, params->unMaxAppIDs );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName_params *params )
{
    struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *iface = (struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppName( params->nAppID, params->pchName, params->cchNameMax );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir_params *params )
{
    struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *iface = (struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->nAppID, params->pchDirectory, params->cchNameMax );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId_params *params )
{
    struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *iface = (struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppBuildId( params->nAppID );
}

#ifdef __cplusplus
}
#endif
