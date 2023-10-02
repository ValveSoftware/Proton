/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, params->pAppID, params->pbAvailable, params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    iface->RequestAppProofOfPurchaseKey( params->nAppID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetCurrentBetaName( params->pchName, params->cchNameBufferSize );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->MarkContentCorrupt( params->bMissingFilesOnly );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetInstalledDepots( params->appID, params->pvecDepots, params->cMaxDepots );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->appID, params->pchFolder, params->cchFolderBufferSize );
    params->_ret = steamclient_unix_path_to_dos_path( params->_ret, params->pchFolder, params->pchFolder, params->cchFolderBufferSize, 0 );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsAppInstalled( params->appID );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    *params->_ret = iface->GetAppOwner(  );
    return 0;
}

NTSTATUS ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam( void *args )
{
    struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam_params *params = (struct ISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam_params *)args;
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetLaunchQueryParam( params->pchKey );
    return 0;
}

