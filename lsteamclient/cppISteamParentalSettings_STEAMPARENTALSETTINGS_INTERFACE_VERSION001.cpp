#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#include "steamworks_sdk_158/isteamparentalsettings.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001.h"
void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled_params *params )
{
    params->_ret = ((ISteamParentalSettings*)params->linux_side)->BIsParentalLockEnabled(  );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked_params *params )
{
    params->_ret = ((ISteamParentalSettings*)params->linux_side)->BIsParentalLockLocked(  );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked_params *params )
{
    params->_ret = ((ISteamParentalSettings*)params->linux_side)->BIsAppBlocked( (AppId_t)params->nAppID );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList_params *params )
{
    params->_ret = ((ISteamParentalSettings*)params->linux_side)->BIsAppInBlockList( (AppId_t)params->nAppID );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked_params *params )
{
    params->_ret = ((ISteamParentalSettings*)params->linux_side)->BIsFeatureBlocked( (EParentalFeature)params->eFeature );
}

void cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList( struct cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList_params *params )
{
    params->_ret = ((ISteamParentalSettings*)params->linux_side)->BIsFeatureInBlockList( (EParentalFeature)params->eFeature );
}

#ifdef __cplusplus
}
#endif
