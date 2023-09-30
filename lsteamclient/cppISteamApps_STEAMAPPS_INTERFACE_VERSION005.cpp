/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION005.h"

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, params->pAppID, params->pbAvailable, params->pchName, params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    iface->RequestAppProofOfPurchaseKey( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetCurrentBetaName( params->pchName, params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->MarkContentCorrupt( params->bMissingFilesOnly );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetInstalledDepots( params->pvecDepots, params->cMaxDepots );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->appID, params->pchFolder, params->cchFolderBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->BIsAppInstalled( params->appID );
}

