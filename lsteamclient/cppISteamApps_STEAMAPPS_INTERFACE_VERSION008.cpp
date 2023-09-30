/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION008.h"

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, params->pAppID, params->pbAvailable, params->pchName, params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->RequestAppProofOfPurchaseKey( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetCurrentBetaName( params->pchName, params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->MarkContentCorrupt( params->bMissingFilesOnly );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetInstalledDepots( params->appID, params->pvecDepots, params->cMaxDepots );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->appID, params->pchFolder, params->cchFolderBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsAppInstalled( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    *params->_ret = iface->GetAppOwner(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetLaunchQueryParam( params->pchKey );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetDlcDownloadProgress( params->nAppID, params->punBytesDownloaded, params->punBytesTotal );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetAppBuildId(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    iface->RequestAllProofOfPurchaseKeys(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetFileDetails( params->pszFileName );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetLaunchCommandLine( params->pszCommandLine, params->cubCommandLine );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFamilySharing(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BIsTimedTrial( params->punSecondsAllowed, params->punSecondsPlayed );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetDlcContext( params->nAppID );
}

