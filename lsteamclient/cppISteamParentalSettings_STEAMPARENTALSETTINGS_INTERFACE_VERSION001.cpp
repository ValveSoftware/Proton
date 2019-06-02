#include "steam_defs.h"
#include "steamworks_sdk_144/steam_api.h"
#include "steamworks_sdk_144/steamnetworkingtypes.h"
#include "steamworks_sdk_144/isteamparentalsettings.h"
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_144
#include "struct_converters.h"
#include "cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001.h"
bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled(void *linux_side)
{
    return ((ISteamParentalSettings*)linux_side)->BIsParentalLockEnabled();
}

bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked(void *linux_side)
{
    return ((ISteamParentalSettings*)linux_side)->BIsParentalLockLocked();
}

bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked(void *linux_side, AppId_t nAppID)
{
    return ((ISteamParentalSettings*)linux_side)->BIsAppBlocked((AppId_t)nAppID);
}

bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList(void *linux_side, AppId_t nAppID)
{
    return ((ISteamParentalSettings*)linux_side)->BIsAppInBlockList((AppId_t)nAppID);
}

bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked(void *linux_side, EParentalFeature eFeature)
{
    return ((ISteamParentalSettings*)linux_side)->BIsFeatureBlocked((EParentalFeature)eFeature);
}

bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList(void *linux_side, EParentalFeature eFeature)
{
    return ((ISteamParentalSettings*)linux_side)->BIsFeatureInBlockList((EParentalFeature)eFeature);
}

#ifdef __cplusplus
}
#endif
