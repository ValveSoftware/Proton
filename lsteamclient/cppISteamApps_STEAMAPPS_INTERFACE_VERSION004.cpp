#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_117/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_117
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION004.h"
void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedApp( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsDlcInstalled( (AppId_t)params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetEarliestPurchaseUnixTime( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BGetDLCDataByIndex( (int)params->iDLC, (AppId_t *)params->pAppID, (bool *)params->pbAvailable, (char *)params->pchName, (int)params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC_params *params )
{
    ((ISteamApps*)params->linux_side)->InstallDLC( (AppId_t)params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC_params *params )
{
    ((ISteamApps*)params->linux_side)->UninstallDLC( (AppId_t)params->nAppID );
}

#ifdef __cplusplus
}
#endif
