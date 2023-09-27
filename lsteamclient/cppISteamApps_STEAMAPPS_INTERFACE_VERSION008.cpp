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
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION008.h"
void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedApp( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsDlcInstalled( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetEarliestPurchaseUnixTime( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BGetDLCDataByIndex( (int)params->iDLC, (AppId_t *)params->pAppID, (bool *)params->pbAvailable, (char *)params->pchName, (int)params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC_params *params )
{
    ((ISteamApps*)params->linux_side)->InstallDLC( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC_params *params )
{
    ((ISteamApps*)params->linux_side)->UninstallDLC( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey_params *params )
{
    ((ISteamApps*)params->linux_side)->RequestAppProofOfPurchaseKey( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetCurrentBetaName( (char *)params->pchName, (int)params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->MarkContentCorrupt( (bool)params->bMissingFilesOnly );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetInstalledDepots( (AppId_t)params->appID, (DepotId_t *)params->pvecDepots, (uint32)params->cMaxDepots );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAppInstallDir( (AppId_t)params->appID, (char *)params->pchFolder, (uint32)params->cchFolderBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsAppInstalled( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner_params *params )
{
    *params->_ret = ((ISteamApps*)params->linux_side)->GetAppOwner(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetLaunchQueryParam( (const char *)params->pchKey );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetDlcDownloadProgress( (AppId_t)params->nAppID, (uint64 *)params->punBytesDownloaded, (uint64 *)params->punBytesTotal );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAppBuildId(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys_params *params )
{
    ((ISteamApps*)params->linux_side)->RequestAllProofOfPurchaseKeys(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetFileDetails( (const char *)params->pszFileName );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetLaunchCommandLine( (char *)params->pszCommandLine, (int)params->cubCommandLine );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedFromFamilySharing(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsTimedTrial( (uint32 *)params->punSecondsAllowed, (uint32 *)params->punSecondsPlayed );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->SetDlcContext( (AppId_t)params->nAppID );
}

#ifdef __cplusplus
}
#endif
