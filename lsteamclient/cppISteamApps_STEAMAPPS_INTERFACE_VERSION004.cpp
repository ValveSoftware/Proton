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
bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsSubscribed();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsLowViolence();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsCybercafe();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsVACBanned();
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage(void *linux_side)
{
    return ((ISteamApps*)linux_side)->GetCurrentGameLanguage();
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages(void *linux_side)
{
    return ((ISteamApps*)linux_side)->GetAvailableGameLanguages();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp(void *linux_side, AppId_t appID)
{
    return ((ISteamApps*)linux_side)->BIsSubscribedApp((AppId_t)appID);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled(void *linux_side, AppId_t appID)
{
    return ((ISteamApps*)linux_side)->BIsDlcInstalled((AppId_t)appID);
}

uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime(void *linux_side, AppId_t nAppID)
{
    return ((ISteamApps*)linux_side)->GetEarliestPurchaseUnixTime((AppId_t)nAppID);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsSubscribedFromFreeWeekend();
}

int cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount(void *linux_side)
{
    return ((ISteamApps*)linux_side)->GetDLCCount();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex(void *linux_side, int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize)
{
    return ((ISteamApps*)linux_side)->BGetDLCDataByIndex((int)iDLC, (AppId_t *)pAppID, (bool *)pbAvailable, (char *)pchName, (int)cchNameBufferSize);
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC(void *linux_side, AppId_t nAppID)
{
    ((ISteamApps*)linux_side)->InstallDLC((AppId_t)nAppID);
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC(void *linux_side, AppId_t nAppID)
{
    ((ISteamApps*)linux_side)->UninstallDLC((AppId_t)nAppID);
}

#ifdef __cplusplus
}
#endif
