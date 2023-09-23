#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_111x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_111x
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003.h"
bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite(void *linux_side, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileWrite((const char *)pchFile, (const void *)pvData, (int32)cubData);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead(void *linux_side, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileRead((const char *)pchFile, (void *)pvData, (int32)cubDataToRead);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileForget((const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileDelete((const char *)pchFile);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare(void *linux_side, const char *pchFile)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileShare((const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileExists((const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FilePersisted((const char *)pchFile);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize(void *linux_side, const char *pchFile)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileSize((const char *)pchFile);
    return (_ret);
}

int64 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp(void *linux_side, const char *pchFile)
{
    int64 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileTimestamp((const char *)pchFile);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount(void *linux_side)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileCount();
    return (_ret);
}

const char * cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize(void *linux_side, int iFile, int32 *pnFileSizeInBytes)
{
    const char *_ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileNameAndSize((int)iFile, (int32 *)pnFileSizeInBytes);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota(void *linux_side, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetQuota((int32 *)pnTotalBytes, (int32 *)puAvailableBytes);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->IsCloudEnabledForAccount();
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->IsCloudEnabledForApp();
    return (_ret);
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp(void *linux_side, bool bEnabled)
{
    ((ISteamRemoteStorage*)linux_side)->SetCloudEnabledForApp((bool)bEnabled);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload(void *linux_side, UGCHandle_t hContent)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UGCDownload((UGCHandle_t)hContent);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails(void *linux_side, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetUGCDetails((UGCHandle_t)hContent, (AppId_t *)pnAppID, (char **)ppchName, (int32 *)pnFileSizeInBytes, (CSteamID *)pSteamIDOwner);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead(void *linux_side, UGCHandle_t hContent, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UGCRead((UGCHandle_t)hContent, (void *)pvData, (int32)cubDataToRead);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount(void *linux_side)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetCachedUGCCount();
    return (_ret);
}

UGCHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle(void *linux_side, int32 iCachedContent)
{
    UGCHandle_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetCachedUGCHandle((int32)iCachedContent);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
