#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_103/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_103
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION002.h"
void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp_params *params )
{
    params->_ret = ((ISteamApps*)params->linux_side)->BIsSubscribedApp( (AppId_t)params->appID );
}

#ifdef __cplusplus
}
#endif
