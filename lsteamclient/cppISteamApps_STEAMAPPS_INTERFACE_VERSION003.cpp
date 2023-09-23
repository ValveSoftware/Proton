#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_111/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_111
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION003.h"
bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsSubscribed();
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsLowViolence();
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsCybercafe();
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsVACBanned();
    return (_ret);
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage(void *linux_side)
{
    const char * _ret;
    _ret = ((ISteamApps*)linux_side)->GetCurrentGameLanguage();
    return (_ret);
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages(void *linux_side)
{
    const char * _ret;
    _ret = ((ISteamApps*)linux_side)->GetAvailableGameLanguages();
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp(void *linux_side, AppId_t appID)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsSubscribedApp((AppId_t)appID);
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled(void *linux_side, AppId_t appID)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsDlcInstalled((AppId_t)appID);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
