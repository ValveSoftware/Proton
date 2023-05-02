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
bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsSubscribed();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsLowViolence();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsCybercafe();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsVACBanned();
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage(void *linux_side)
{
    return ((ISteamApps*)linux_side)->GetCurrentGameLanguage();
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages(void *linux_side)
{
    return ((ISteamApps*)linux_side)->GetAvailableGameLanguages();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp(void *linux_side, AppId_t appID)
{
    return ((ISteamApps*)linux_side)->BIsSubscribedApp((AppId_t)appID);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled(void *linux_side, AppId_t appID)
{
    return ((ISteamApps*)linux_side)->BIsDlcInstalled((AppId_t)appID);
}

uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime(void *linux_side, AppId_t nAppID)
{
    return ((ISteamApps*)linux_side)->GetEarliestPurchaseUnixTime((AppId_t)nAppID);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend(void *linux_side)
{
    return ((ISteamApps*)linux_side)->BIsSubscribedFromFreeWeekend();
}

int cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount(void *linux_side)
{
    return ((ISteamApps*)linux_side)->GetDLCCount();
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex(void *linux_side, int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize)
{
    return ((ISteamApps*)linux_side)->BGetDLCDataByIndex((int)iDLC, (AppId_t *)pAppID, (bool *)pbAvailable, (char *)pchName, (int)cchNameBufferSize);
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC(void *linux_side, AppId_t nAppID)
{
    ((ISteamApps*)linux_side)->InstallDLC((AppId_t)nAppID);
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC(void *linux_side, AppId_t nAppID)
{
    ((ISteamApps*)linux_side)->UninstallDLC((AppId_t)nAppID);
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey(void *linux_side, AppId_t nAppID)
{
    ((ISteamApps*)linux_side)->RequestAppProofOfPurchaseKey((AppId_t)nAppID);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName(void *linux_side, char * pchName, int cchNameBufferSize)
{
    return ((ISteamApps*)linux_side)->GetCurrentBetaName((char *)pchName, (int)cchNameBufferSize);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt(void *linux_side, bool bMissingFilesOnly)
{
    return ((ISteamApps*)linux_side)->MarkContentCorrupt((bool)bMissingFilesOnly);
}

uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots(void *linux_side, AppId_t appID, DepotId_t * pvecDepots, uint32 cMaxDepots)
{
    return ((ISteamApps*)linux_side)->GetInstalledDepots((AppId_t)appID, (DepotId_t *)pvecDepots, (uint32)cMaxDepots);
}

uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir(void *linux_side, AppId_t appID, char * pchFolder, uint32 cchFolderBufferSize)
{
    return ((ISteamApps*)linux_side)->GetAppInstallDir((AppId_t)appID, (char *)pchFolder, (uint32)cchFolderBufferSize);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled(void *linux_side, AppId_t appID)
{
    return ((ISteamApps*)linux_side)->BIsAppInstalled((AppId_t)appID);
}

CSteamID cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner(void *linux_side)
{
    return ((ISteamApps*)linux_side)->GetAppOwner();
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam(void *linux_side, const char * pchKey)
{
    return ((ISteamApps*)linux_side)->GetLaunchQueryParam((const char *)pchKey);
}

#ifdef __cplusplus
}
#endif
