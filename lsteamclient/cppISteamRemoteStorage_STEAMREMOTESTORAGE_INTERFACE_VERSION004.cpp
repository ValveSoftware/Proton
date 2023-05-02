#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_116/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_116
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004.h"
bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite(void *linux_side, const char * pchFile, const void * pvData, int32 cubData)
{
    return ((ISteamRemoteStorage*)linux_side)->FileWrite((const char *)pchFile, (const void *)pvData, (int32)cubData);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead(void *linux_side, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    return ((ISteamRemoteStorage*)linux_side)->FileRead((const char *)pchFile, (void *)pvData, (int32)cubDataToRead);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->FileForget((const char *)pchFile);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->FileDelete((const char *)pchFile);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->FileShare((const char *)pchFile);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms(void *linux_side, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    return ((ISteamRemoteStorage*)linux_side)->SetSyncPlatforms((const char *)pchFile, (ERemoteStoragePlatform)eRemoteStoragePlatform);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->FileExists((const char *)pchFile);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->FilePersisted((const char *)pchFile);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->GetFileSize((const char *)pchFile);
}

int64 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->GetFileTimestamp((const char *)pchFile);
}

ERemoteStoragePlatform cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->GetSyncPlatforms((const char *)pchFile);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount(void *linux_side)
{
    return ((ISteamRemoteStorage*)linux_side)->GetFileCount();
}

const char * cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize(void *linux_side, int iFile, int32 * pnFileSizeInBytes)
{
    return ((ISteamRemoteStorage*)linux_side)->GetFileNameAndSize((int)iFile, (int32 *)pnFileSizeInBytes);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota(void *linux_side, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    return ((ISteamRemoteStorage*)linux_side)->GetQuota((int32 *)pnTotalBytes, (int32 *)puAvailableBytes);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount(void *linux_side)
{
    return ((ISteamRemoteStorage*)linux_side)->IsCloudEnabledForAccount();
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp(void *linux_side)
{
    return ((ISteamRemoteStorage*)linux_side)->IsCloudEnabledForApp();
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp(void *linux_side, bool bEnabled)
{
    ((ISteamRemoteStorage*)linux_side)->SetCloudEnabledForApp((bool)bEnabled);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload(void *linux_side, UGCHandle_t hContent)
{
    return ((ISteamRemoteStorage*)linux_side)->UGCDownload((UGCHandle_t)hContent);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails(void *linux_side, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    return ((ISteamRemoteStorage*)linux_side)->GetUGCDetails((UGCHandle_t)hContent, (AppId_t *)pnAppID, (char **)ppchName, (int32 *)pnFileSizeInBytes, (CSteamID *)pSteamIDOwner);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead(void *linux_side, UGCHandle_t hContent, void * pvData, int32 cubDataToRead)
{
    return ((ISteamRemoteStorage*)linux_side)->UGCRead((UGCHandle_t)hContent, (void *)pvData, (int32)cubDataToRead);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount(void *linux_side)
{
    return ((ISteamRemoteStorage*)linux_side)->GetCachedUGCCount();
}

UGCHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle(void *linux_side, int32 iCachedContent)
{
    return ((ISteamRemoteStorage*)linux_side)->GetCachedUGCHandle((int32)iCachedContent);
}

#ifdef __cplusplus
}
#endif
