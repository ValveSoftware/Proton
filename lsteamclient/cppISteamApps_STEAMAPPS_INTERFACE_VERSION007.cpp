#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_136/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_136
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION007.h"
void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedApp( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsDlcInstalled( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetEarliestPurchaseUnixTime( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BGetDLCDataByIndex( (int)params->iDLC, (AppId_t *)params->pAppID, (bool *)params->pbAvailable, (char *)params->pchName, (int)params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC_params *params )
{
    ((ISteamApps*)params->linux_side)->InstallDLC( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC_params *params )
{
    ((ISteamApps*)params->linux_side)->UninstallDLC( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey_params *params )
{
    ((ISteamApps*)params->linux_side)->RequestAppProofOfPurchaseKey( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetCurrentBetaName( (char *)params->pchName, (int)params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->MarkContentCorrupt( (bool)params->bMissingFilesOnly );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetInstalledDepots( (AppId_t)params->appID, (DepotId_t *)params->pvecDepots, (uint32)params->cMaxDepots );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAppInstallDir( (AppId_t)params->appID, (char *)params->pchFolder, (uint32)params->cchFolderBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsAppInstalled( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner_params *params )
{
    *params->_ret = ((ISteamApps*)params->linux_side)->GetAppOwner(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetLaunchQueryParam( (const char *)params->pchKey );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetDlcDownloadProgress( (AppId_t)params->nAppID, (uint64 *)params->punBytesDownloaded, (uint64 *)params->punBytesTotal );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAppBuildId(  );
}

#ifdef __cplusplus
}
#endif
