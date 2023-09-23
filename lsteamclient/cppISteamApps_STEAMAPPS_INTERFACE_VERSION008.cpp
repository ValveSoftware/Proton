#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION008.h"
bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsSubscribed();
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsLowViolence();
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsCybercafe();
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsVACBanned();
    return (_ret);
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage(void *linux_side)
{
    const char * _ret;
    _ret = ((ISteamApps*)linux_side)->GetCurrentGameLanguage();
    return (_ret);
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages(void *linux_side)
{
    const char * _ret;
    _ret = ((ISteamApps*)linux_side)->GetAvailableGameLanguages();
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp(void *linux_side, AppId_t appID)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsSubscribedApp((AppId_t)appID);
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled(void *linux_side, AppId_t appID)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsDlcInstalled((AppId_t)appID);
    return (_ret);
}

uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime(void *linux_side, AppId_t nAppID)
{
    uint32 _ret;
    _ret = ((ISteamApps*)linux_side)->GetEarliestPurchaseUnixTime((AppId_t)nAppID);
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsSubscribedFromFreeWeekend();
    return (_ret);
}

int cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount(void *linux_side)
{
    int _ret;
    _ret = ((ISteamApps*)linux_side)->GetDLCCount();
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex(void *linux_side, int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BGetDLCDataByIndex((int)iDLC, (AppId_t *)pAppID, (bool *)pbAvailable, (char *)pchName, (int)cchNameBufferSize);
    return (_ret);
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC(void *linux_side, AppId_t nAppID)
{
    ((ISteamApps*)linux_side)->InstallDLC((AppId_t)nAppID);
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC(void *linux_side, AppId_t nAppID)
{
    ((ISteamApps*)linux_side)->UninstallDLC((AppId_t)nAppID);
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey(void *linux_side, AppId_t nAppID)
{
    ((ISteamApps*)linux_side)->RequestAppProofOfPurchaseKey((AppId_t)nAppID);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName(void *linux_side, char *pchName, int cchNameBufferSize)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->GetCurrentBetaName((char *)pchName, (int)cchNameBufferSize);
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt(void *linux_side, bool bMissingFilesOnly)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->MarkContentCorrupt((bool)bMissingFilesOnly);
    return (_ret);
}

uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots(void *linux_side, AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)
{
    uint32 _ret;
    _ret = ((ISteamApps*)linux_side)->GetInstalledDepots((AppId_t)appID, (DepotId_t *)pvecDepots, (uint32)cMaxDepots);
    return (_ret);
}

uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir(void *linux_side, AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)
{
    uint32 _ret;
    _ret = ((ISteamApps*)linux_side)->GetAppInstallDir((AppId_t)appID, (char *)pchFolder, (uint32)cchFolderBufferSize);
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled(void *linux_side, AppId_t appID)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsAppInstalled((AppId_t)appID);
    return (_ret);
}

CSteamID cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner(void *linux_side)
{
    CSteamID _ret;
    _ret = ((ISteamApps*)linux_side)->GetAppOwner();
    return (_ret);
}

const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam(void *linux_side, const char *pchKey)
{
    const char * _ret;
    _ret = ((ISteamApps*)linux_side)->GetLaunchQueryParam((const char *)pchKey);
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress(void *linux_side, AppId_t nAppID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->GetDlcDownloadProgress((AppId_t)nAppID, (uint64 *)punBytesDownloaded, (uint64 *)punBytesTotal);
    return (_ret);
}

int cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId(void *linux_side)
{
    int _ret;
    _ret = ((ISteamApps*)linux_side)->GetAppBuildId();
    return (_ret);
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys(void *linux_side)
{
    ((ISteamApps*)linux_side)->RequestAllProofOfPurchaseKeys();
}

SteamAPICall_t cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails(void *linux_side, const char *pszFileName)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamApps*)linux_side)->GetFileDetails((const char *)pszFileName);
    return (_ret);
}

int cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine(void *linux_side, char *pszCommandLine, int cubCommandLine)
{
    int _ret;
    _ret = ((ISteamApps*)linux_side)->GetLaunchCommandLine((char *)pszCommandLine, (int)cubCommandLine);
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsSubscribedFromFamilySharing();
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial(void *linux_side, uint32 *punSecondsAllowed, uint32 *punSecondsPlayed)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->BIsTimedTrial((uint32 *)punSecondsAllowed, (uint32 *)punSecondsPlayed);
    return (_ret);
}

bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext(void *linux_side, AppId_t nAppID)
{
    bool _ret;
    _ret = ((ISteamApps*)linux_side)->SetDlcContext((AppId_t)nAppID);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
