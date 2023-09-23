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
bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockEnabled(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamParentalSettings*)linux_side)->BIsParentalLockEnabled();
    return (_ret);
}

bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsParentalLockLocked(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamParentalSettings*)linux_side)->BIsParentalLockLocked();
    return (_ret);
}

bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppBlocked(void *linux_side, AppId_t nAppID)
{
    bool _ret;
    _ret = ((ISteamParentalSettings*)linux_side)->BIsAppBlocked((AppId_t)nAppID);
    return (_ret);
}

bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsAppInBlockList(void *linux_side, AppId_t nAppID)
{
    bool _ret;
    _ret = ((ISteamParentalSettings*)linux_side)->BIsAppInBlockList((AppId_t)nAppID);
    return (_ret);
}

bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureBlocked(void *linux_side, EParentalFeature eFeature)
{
    bool _ret;
    _ret = ((ISteamParentalSettings*)linux_side)->BIsFeatureBlocked((EParentalFeature)eFeature);
    return (_ret);
}

bool cppISteamParentalSettings_STEAMPARENTALSETTINGS_INTERFACE_VERSION001_BIsFeatureInBlockList(void *linux_side, EParentalFeature eFeature)
{
    bool _ret;
    _ret = ((ISteamParentalSettings*)linux_side)->BIsFeatureInBlockList((EParentalFeature)eFeature);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
