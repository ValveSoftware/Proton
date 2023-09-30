/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, params->pAppID, params->pbAvailable, params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION004 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
    return 0;
}

