/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION001.h"

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION001 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppData( params->nAppID, params->pchKey, params->pchValue, params->cchValueMax );
}

