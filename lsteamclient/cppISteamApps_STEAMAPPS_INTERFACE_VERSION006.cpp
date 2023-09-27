#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_131/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_131
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION006.h"
void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedApp( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsDlcInstalled( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetEarliestPurchaseUnixTime( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BGetDLCDataByIndex( (int)params->iDLC, (AppId_t *)params->pAppID, (bool *)params->pbAvailable, (char *)params->pchName, (int)params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC_params *params )
{
    ((ISteamApps*)params->linux_side)->InstallDLC( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC_params *params )
{
    ((ISteamApps*)params->linux_side)->UninstallDLC( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey_params *params )
{
    ((ISteamApps*)params->linux_side)->RequestAppProofOfPurchaseKey( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetCurrentBetaName( (char *)params->pchName, (int)params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->MarkContentCorrupt( (bool)params->bMissingFilesOnly );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetInstalledDepots( (AppId_t)params->appID, (DepotId_t *)params->pvecDepots, (uint32)params->cMaxDepots );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAppInstallDir( (AppId_t)params->appID, (char *)params->pchFolder, (uint32)params->cchFolderBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsAppInstalled( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner_params *params )
{
    *params->_ret = ((ISteamApps*)params->linux_side)->GetAppOwner(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetLaunchQueryParam( (const char *)params->pchKey );
}

#ifdef __cplusplus
}
#endif
