/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001.h"

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps_params *params )
{
    struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *iface = (struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetNumInstalledApps(  );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps_params *params )
{
    struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *iface = (struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetInstalledApps( params->pvecAppID, params->unMaxAppIDs );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName_params *params )
{
    struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *iface = (struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppName( params->nAppID, params->pchName, params->cchNameMax );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir_params *params )
{
    struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *iface = (struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->nAppID, params->pchDirectory, params->cchNameMax );
}

void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId_params *params )
{
    struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *iface = (struct u_ISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppBuildId( params->nAppID );
}

