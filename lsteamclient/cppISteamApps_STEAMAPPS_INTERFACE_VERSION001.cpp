/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION001 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppData( params->nAppID, params->pchKey, params->pchValue, params->cchValueMax );
    return 0;
}

