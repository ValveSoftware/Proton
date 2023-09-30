/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION004.h"

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, params->pAppID, params->pbAvailable, params->pchName, params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
}

