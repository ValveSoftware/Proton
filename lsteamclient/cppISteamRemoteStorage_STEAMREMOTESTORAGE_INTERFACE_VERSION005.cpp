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
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005.h"
bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite(void *linux_side, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileWrite((const char *)pchFile, (const void *)pvData, (int32)cubData);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead(void *linux_side, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileRead((const char *)pchFile, (void *)pvData, (int32)cubDataToRead);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileForget((const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileDelete((const char *)pchFile);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare(void *linux_side, const char *pchFile)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileShare((const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms(void *linux_side, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->SetSyncPlatforms((const char *)pchFile, (ERemoteStoragePlatform)eRemoteStoragePlatform);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileExists((const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FilePersisted((const char *)pchFile);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize(void *linux_side, const char *pchFile)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileSize((const char *)pchFile);
    return (_ret);
}

int64 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp(void *linux_side, const char *pchFile)
{
    int64 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileTimestamp((const char *)pchFile);
    return (_ret);
}

ERemoteStoragePlatform cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms(void *linux_side, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetSyncPlatforms((const char *)pchFile);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount(void *linux_side)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileCount();
    return (_ret);
}

const char * cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize(void *linux_side, int iFile, int32 *pnFileSizeInBytes)
{
    const char * _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileNameAndSize((int)iFile, (int32 *)pnFileSizeInBytes);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota(void *linux_side, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetQuota((int32 *)pnTotalBytes, (int32 *)puAvailableBytes);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->IsCloudEnabledForAccount();
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->IsCloudEnabledForApp();
    return (_ret);
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp(void *linux_side, bool bEnabled)
{
    ((ISteamRemoteStorage*)linux_side)->SetCloudEnabledForApp((bool)bEnabled);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload(void *linux_side, UGCHandle_t hContent)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UGCDownload((UGCHandle_t)hContent);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails(void *linux_side, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetUGCDetails((UGCHandle_t)hContent, (AppId_t *)pnAppID, (char **)ppchName, (int32 *)pnFileSizeInBytes, (CSteamID *)pSteamIDOwner);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead(void *linux_side, UGCHandle_t hContent, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UGCRead((UGCHandle_t)hContent, (void *)pvData, (int32)cubDataToRead);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount(void *linux_side)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetCachedUGCCount();
    return (_ret);
}

UGCHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle(void *linux_side, int32 iCachedContent)
{
    UGCHandle_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetCachedUGCHandle((int32)iCachedContent);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile(void *linux_side, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->PublishFile((const char *)pchFile, (const char *)pchPreviewFile, (AppId_t)nConsumerAppId, (const char *)pchTitle, (const char *)pchDescription, (ERemoteStoragePublishedFileVisibility)eVisibility, (SteamParamStringArray_t *)pTags);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile(void *linux_side, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->PublishWorkshopFile((const char *)pchFile, (const char *)pchPreviewFile, (AppId_t)nConsumerAppId, (const char *)pchTitle, (const char *)pchDescription, (SteamParamStringArray_t *)pTags);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile(void *linux_side, RemoteStorageUpdatePublishedFileRequest_t updatePublishedFileRequest)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFile((RemoteStorageUpdatePublishedFileRequest_t)updatePublishedFileRequest);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetPublishedFileDetails((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->DeletePublishedFile((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles(void *linux_side, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->EnumerateUserPublishedFiles((uint32)unStartIndex);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->SubscribePublishedFile((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles(void *linux_side, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->EnumerateUserSubscribedFiles((uint32)unStartIndex);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UnsubscribePublishedFile((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
