#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_125/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_125
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION005.h"
void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedApp( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsDlcInstalled( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetEarliestPurchaseUnixTime( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BGetDLCDataByIndex( (int)params->iDLC, (AppId_t *)params->pAppID, (bool *)params->pbAvailable, (char *)params->pchName, (int)params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC_params *params )
{
    ((ISteamApps*)params->linux_side)->InstallDLC( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC_params *params )
{
    ((ISteamApps*)params->linux_side)->UninstallDLC( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey_params *params )
{
    ((ISteamApps*)params->linux_side)->RequestAppProofOfPurchaseKey( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetCurrentBetaName( (char *)params->pchName, (int)params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->MarkContentCorrupt( (bool)params->bMissingFilesOnly );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetInstalledDepots( (DepotId_t *)params->pvecDepots, (uint32)params->cMaxDepots );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAppInstallDir( (AppId_t)params->appID, (char *)params->pchFolder, (uint32)params->cchFolderBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsAppInstalled( (AppId_t)params->appID );
}

#ifdef __cplusplus
}
#endif
