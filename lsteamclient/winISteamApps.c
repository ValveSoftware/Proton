/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION008.h"

typedef struct __winISteamApps_STEAMAPPS_INTERFACE_VERSION008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamApps_STEAMAPPS_INTERFACE_VERSION008;

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime, 8)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount, 4)
int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex, 24)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex(_this->linux_side, iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName, 12)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, char * pchName, int cchNameBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName(_this->linux_side, pchName, cchNameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, bool bMissingFilesOnly)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt(_this->linux_side, bMissingFilesOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots, 16)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t appID, DepotId_t * pvecDepots, uint32 cMaxDepots)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots(_this->linux_side, appID, pvecDepots, cMaxDepots);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir, 16)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t appID, char * pchFolder, uint32 cchFolderBufferSize)
{
    uint32 path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir(_this->linux_side, appID, pchFolder, cchFolderBufferSize);
    path_result = steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderBufferSize, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner, 8)
CSteamID *__thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam, 8)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam(_this->linux_side, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress, 16)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t nAppID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress(_this->linux_side, nAppID, punBytesDownloaded, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId, 4)
int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys, 4)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails, 8)
SteamAPICall_t __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, const char * pszFileName)
{
    char lin_pszFileName[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFileName, lin_pszFileName, 0);
    uint32 path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails(_this->linux_side, pszFileName ? lin_pszFileName : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine, 12)
int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, char * pszCommandLine, int cubCommandLine)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine(_this->linux_side, pszCommandLine, cubCommandLine);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial, 12)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, uint32 * punSecondsAllowed, uint32 * punSecondsPlayed)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial(_this->linux_side, punSecondsAllowed, punSecondsPlayed);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext(winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext(_this->linux_side, nAppID);
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION008,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext)
    );
#ifndef __GNUC__
}
#endif

winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION008(void *linux_side)
{
    winISteamApps_STEAMAPPS_INTERFACE_VERSION008 *r = alloc_mem_for_iface(sizeof(winISteamApps_STEAMAPPS_INTERFACE_VERSION008), "STEAMAPPS_INTERFACE_VERSION008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION008_vtable, 30, "STEAMAPPS_INTERFACE_VERSION008");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION007.h"

typedef struct __winISteamApps_STEAMAPPS_INTERFACE_VERSION007 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamApps_STEAMAPPS_INTERFACE_VERSION007;

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime, 8)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount, 4)
int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex, 24)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex(_this->linux_side, iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName, 12)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, char * pchName, int cchNameBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName(_this->linux_side, pchName, cchNameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, bool bMissingFilesOnly)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt(_this->linux_side, bMissingFilesOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots, 16)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, AppId_t appID, DepotId_t * pvecDepots, uint32 cMaxDepots)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots(_this->linux_side, appID, pvecDepots, cMaxDepots);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir, 16)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, AppId_t appID, char * pchFolder, uint32 cchFolderBufferSize)
{
    uint32 path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir(_this->linux_side, appID, pchFolder, cchFolderBufferSize);
    path_result = steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderBufferSize, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner, 8)
CSteamID *__thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam, 8)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam(_this->linux_side, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress, 16)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this, AppId_t nAppID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress(_this->linux_side, nAppID, punBytesDownloaded, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId, 4)
int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId(winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId(_this->linux_side);
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION007,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId)
    );
#ifndef __GNUC__
}
#endif

winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION007(void *linux_side)
{
    winISteamApps_STEAMAPPS_INTERFACE_VERSION007 *r = alloc_mem_for_iface(sizeof(winISteamApps_STEAMAPPS_INTERFACE_VERSION007), "STEAMAPPS_INTERFACE_VERSION007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION007_vtable, 24, "STEAMAPPS_INTERFACE_VERSION007");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION006.h"

typedef struct __winISteamApps_STEAMAPPS_INTERFACE_VERSION006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamApps_STEAMAPPS_INTERFACE_VERSION006;

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime, 8)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount, 4)
int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex, 24)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex(_this->linux_side, iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName, 12)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, char * pchName, int cchNameBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName(_this->linux_side, pchName, cchNameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, bool bMissingFilesOnly)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt(_this->linux_side, bMissingFilesOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots, 16)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, AppId_t appID, DepotId_t * pvecDepots, uint32 cMaxDepots)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots(_this->linux_side, appID, pvecDepots, cMaxDepots);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir, 16)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, AppId_t appID, char * pchFolder, uint32 cchFolderBufferSize)
{
    uint32 path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir(_this->linux_side, appID, pchFolder, cchFolderBufferSize);
    path_result = steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderBufferSize, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner, 8)
CSteamID *__thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, CSteamID *_r)
{
    TRACE("%p\n", _this);
    *_r = cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam, 8)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam(winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *_this, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam(_this->linux_side, pchKey);
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION006,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam)
    );
#ifndef __GNUC__
}
#endif

winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION006(void *linux_side)
{
    winISteamApps_STEAMAPPS_INTERFACE_VERSION006 *r = alloc_mem_for_iface(sizeof(winISteamApps_STEAMAPPS_INTERFACE_VERSION006), "STEAMAPPS_INTERFACE_VERSION006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION006_vtable, 22, "STEAMAPPS_INTERFACE_VERSION006");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION005.h"

typedef struct __winISteamApps_STEAMAPPS_INTERFACE_VERSION005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamApps_STEAMAPPS_INTERFACE_VERSION005;

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime, 8)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount, 4)
int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex, 24)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex(_this->linux_side, iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName, 12)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, char * pchName, int cchNameBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName(_this->linux_side, pchName, cchNameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, bool bMissingFilesOnly)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt(_this->linux_side, bMissingFilesOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots, 12)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, DepotId_t * pvecDepots, uint32 cMaxDepots)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots(_this->linux_side, pvecDepots, cMaxDepots);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir, 16)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, AppId_t appID, char * pchFolder, uint32 cchFolderBufferSize)
{
    uint32 path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir(_this->linux_side, appID, pchFolder, cchFolderBufferSize);
    path_result = steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderBufferSize, 0);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled(winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled(_this->linux_side, appID);
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION005,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled)
    );
#ifndef __GNUC__
}
#endif

winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION005(void *linux_side)
{
    winISteamApps_STEAMAPPS_INTERFACE_VERSION005 *r = alloc_mem_for_iface(sizeof(winISteamApps_STEAMAPPS_INTERFACE_VERSION005), "STEAMAPPS_INTERFACE_VERSION005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION005_vtable, 20, "STEAMAPPS_INTERFACE_VERSION005");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION004.h"

typedef struct __winISteamApps_STEAMAPPS_INTERFACE_VERSION004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamApps_STEAMAPPS_INTERFACE_VERSION004;

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime, 8)
uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount, 4)
int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex, 24)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this, int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex(_this->linux_side, iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC(_this->linux_side, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC, 8)
void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *_this, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC(_this->linux_side, nAppID);
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION004,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC)
    );
#ifndef __GNUC__
}
#endif

winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION004(void *linux_side)
{
    winISteamApps_STEAMAPPS_INTERFACE_VERSION004 *r = alloc_mem_for_iface(sizeof(winISteamApps_STEAMAPPS_INTERFACE_VERSION004), "STEAMAPPS_INTERFACE_VERSION004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION004_vtable, 14, "STEAMAPPS_INTERFACE_VERSION004");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION003.h"

typedef struct __winISteamApps_STEAMAPPS_INTERFACE_VERSION003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamApps_STEAMAPPS_INTERFACE_VERSION003;

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed(winISteamApps_STEAMAPPS_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence(winISteamApps_STEAMAPPS_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe(winISteamApps_STEAMAPPS_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned(winISteamApps_STEAMAPPS_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage(winISteamApps_STEAMAPPS_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages(winISteamApps_STEAMAPPS_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp(winISteamApps_STEAMAPPS_INTERFACE_VERSION003 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp(_this->linux_side, appID);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled(winISteamApps_STEAMAPPS_INTERFACE_VERSION003 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled(_this->linux_side, appID);
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION003,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled)
    );
#ifndef __GNUC__
}
#endif

winISteamApps_STEAMAPPS_INTERFACE_VERSION003 *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION003(void *linux_side)
{
    winISteamApps_STEAMAPPS_INTERFACE_VERSION003 *r = alloc_mem_for_iface(sizeof(winISteamApps_STEAMAPPS_INTERFACE_VERSION003), "STEAMAPPS_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION003_vtable, 8, "STEAMAPPS_INTERFACE_VERSION003");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION002.h"

typedef struct __winISteamApps_STEAMAPPS_INTERFACE_VERSION002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamApps_STEAMAPPS_INTERFACE_VERSION002;

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed(winISteamApps_STEAMAPPS_INTERFACE_VERSION002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence(winISteamApps_STEAMAPPS_INTERFACE_VERSION002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe(winISteamApps_STEAMAPPS_INTERFACE_VERSION002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned, 4)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned(winISteamApps_STEAMAPPS_INTERFACE_VERSION002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage(winISteamApps_STEAMAPPS_INTERFACE_VERSION002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages, 4)
const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages(winISteamApps_STEAMAPPS_INTERFACE_VERSION002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp, 8)
bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp(winISteamApps_STEAMAPPS_INTERFACE_VERSION002 *_this, AppId_t appID)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp(_this->linux_side, appID);
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp)
    );
#ifndef __GNUC__
}
#endif

winISteamApps_STEAMAPPS_INTERFACE_VERSION002 *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION002(void *linux_side)
{
    winISteamApps_STEAMAPPS_INTERFACE_VERSION002 *r = alloc_mem_for_iface(sizeof(winISteamApps_STEAMAPPS_INTERFACE_VERSION002), "STEAMAPPS_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION002_vtable, 7, "STEAMAPPS_INTERFACE_VERSION002");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION001.h"

typedef struct __winISteamApps_STEAMAPPS_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamApps_STEAMAPPS_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData, 20)
int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData(winISteamApps_STEAMAPPS_INTERFACE_VERSION001 *_this, AppId_t nAppID, const char * pchKey, char * pchValue, int cchValueMax)
{
    TRACE("%p\n", _this);
    return cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData(_this->linux_side, nAppID, pchKey, pchValue, cchValueMax);
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData)
    );
#ifndef __GNUC__
}
#endif

winISteamApps_STEAMAPPS_INTERFACE_VERSION001 *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION001(void *linux_side)
{
    winISteamApps_STEAMAPPS_INTERFACE_VERSION001 *r = alloc_mem_for_iface(sizeof(winISteamApps_STEAMAPPS_INTERFACE_VERSION001), "STEAMAPPS_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION001_vtable, 1, "STEAMAPPS_INTERFACE_VERSION001");
    r->linux_side = linux_side;
    return r;
}

