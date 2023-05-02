#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_119/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_119
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006.h"
bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite(void *linux_side, const char * pchFile, const void * pvData, int32 cubData)
{
    return ((ISteamRemoteStorage*)linux_side)->FileWrite((const char *)pchFile, (const void *)pvData, (int32)cubData);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead(void *linux_side, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    return ((ISteamRemoteStorage*)linux_side)->FileRead((const char *)pchFile, (void *)pvData, (int32)cubDataToRead);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->FileForget((const char *)pchFile);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->FileDelete((const char *)pchFile);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->FileShare((const char *)pchFile);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms(void *linux_side, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    return ((ISteamRemoteStorage*)linux_side)->SetSyncPlatforms((const char *)pchFile, (ERemoteStoragePlatform)eRemoteStoragePlatform);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->FileExists((const char *)pchFile);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->FilePersisted((const char *)pchFile);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->GetFileSize((const char *)pchFile);
}

int64 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->GetFileTimestamp((const char *)pchFile);
}

ERemoteStoragePlatform cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms(void *linux_side, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->GetSyncPlatforms((const char *)pchFile);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount(void *linux_side)
{
    return ((ISteamRemoteStorage*)linux_side)->GetFileCount();
}

const char * cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize(void *linux_side, int iFile, int32 * pnFileSizeInBytes)
{
    return ((ISteamRemoteStorage*)linux_side)->GetFileNameAndSize((int)iFile, (int32 *)pnFileSizeInBytes);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota(void *linux_side, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    return ((ISteamRemoteStorage*)linux_side)->GetQuota((int32 *)pnTotalBytes, (int32 *)puAvailableBytes);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount(void *linux_side)
{
    return ((ISteamRemoteStorage*)linux_side)->IsCloudEnabledForAccount();
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp(void *linux_side)
{
    return ((ISteamRemoteStorage*)linux_side)->IsCloudEnabledForApp();
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp(void *linux_side, bool bEnabled)
{
    ((ISteamRemoteStorage*)linux_side)->SetCloudEnabledForApp((bool)bEnabled);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload(void *linux_side, UGCHandle_t hContent)
{
    return ((ISteamRemoteStorage*)linux_side)->UGCDownload((UGCHandle_t)hContent);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress(void *linux_side, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
    return ((ISteamRemoteStorage*)linux_side)->GetUGCDownloadProgress((UGCHandle_t)hContent, (int32 *)pnBytesDownloaded, (int32 *)pnBytesExpected);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails(void *linux_side, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    return ((ISteamRemoteStorage*)linux_side)->GetUGCDetails((UGCHandle_t)hContent, (AppId_t *)pnAppID, (char **)ppchName, (int32 *)pnFileSizeInBytes, (CSteamID *)pSteamIDOwner);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead(void *linux_side, UGCHandle_t hContent, void * pvData, int32 cubDataToRead)
{
    return ((ISteamRemoteStorage*)linux_side)->UGCRead((UGCHandle_t)hContent, (void *)pvData, (int32)cubDataToRead);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount(void *linux_side)
{
    return ((ISteamRemoteStorage*)linux_side)->GetCachedUGCCount();
}

UGCHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle(void *linux_side, int32 iCachedContent)
{
    return ((ISteamRemoteStorage*)linux_side)->GetCachedUGCHandle((int32)iCachedContent);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile(void *linux_side, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
    return ((ISteamRemoteStorage*)linux_side)->PublishWorkshopFile((const char *)pchFile, (const char *)pchPreviewFile, (AppId_t)nConsumerAppId, (const char *)pchTitle, (const char *)pchDescription, (ERemoteStoragePublishedFileVisibility)eVisibility, (SteamParamStringArray_t *)pTags, (EWorkshopFileType)eWorkshopFileType);
}

PublishedFileUpdateHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    return ((ISteamRemoteStorage*)linux_side)->CreatePublishedFileUpdateRequest((PublishedFileId_t)unPublishedFileId);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile(void *linux_side, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
    return ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileFile((PublishedFileUpdateHandle_t)updateHandle, (const char *)pchFile);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile(void *linux_side, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
    return ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFilePreviewFile((PublishedFileUpdateHandle_t)updateHandle, (const char *)pchPreviewFile);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle(void *linux_side, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
    return ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileTitle((PublishedFileUpdateHandle_t)updateHandle, (const char *)pchTitle);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription(void *linux_side, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
    return ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileDescription((PublishedFileUpdateHandle_t)updateHandle, (const char *)pchDescription);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility(void *linux_side, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    return ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileVisibility((PublishedFileUpdateHandle_t)updateHandle, (ERemoteStoragePublishedFileVisibility)eVisibility);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags(void *linux_side, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)
{
    return ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileTags((PublishedFileUpdateHandle_t)updateHandle, (SteamParamStringArray_t *)pTags);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate(void *linux_side, PublishedFileUpdateHandle_t updateHandle)
{
    return ((ISteamRemoteStorage*)linux_side)->CommitPublishedFileUpdate((PublishedFileUpdateHandle_t)updateHandle);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    return ((ISteamRemoteStorage*)linux_side)->GetPublishedFileDetails((PublishedFileId_t)unPublishedFileId);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    return ((ISteamRemoteStorage*)linux_side)->DeletePublishedFile((PublishedFileId_t)unPublishedFileId);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles(void *linux_side, uint32 unStartIndex)
{
    return ((ISteamRemoteStorage*)linux_side)->EnumerateUserPublishedFiles((uint32)unStartIndex);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    return ((ISteamRemoteStorage*)linux_side)->SubscribePublishedFile((PublishedFileId_t)unPublishedFileId);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles(void *linux_side, uint32 unStartIndex)
{
    return ((ISteamRemoteStorage*)linux_side)->EnumerateUserSubscribedFiles((uint32)unStartIndex);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    return ((ISteamRemoteStorage*)linux_side)->UnsubscribePublishedFile((PublishedFileId_t)unPublishedFileId);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription(void *linux_side, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
    return ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileSetChangeDescription((PublishedFileUpdateHandle_t)updateHandle, (const char *)pchChangeDescription);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    return ((ISteamRemoteStorage*)linux_side)->GetPublishedItemVoteDetails((PublishedFileId_t)unPublishedFileId);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote(void *linux_side, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    return ((ISteamRemoteStorage*)linux_side)->UpdateUserPublishedItemVote((PublishedFileId_t)unPublishedFileId, (bool)bVoteUp);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    return ((ISteamRemoteStorage*)linux_side)->GetUserPublishedItemVoteDetails((PublishedFileId_t)unPublishedFileId);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles(void *linux_side, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)
{
    return ((ISteamRemoteStorage*)linux_side)->EnumerateUserSharedWorkshopFiles((CSteamID)steamId, (uint32)unStartIndex, (SteamParamStringArray_t *)pRequiredTags, (SteamParamStringArray_t *)pExcludedTags);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo(void *linux_side, const char * pchVideoURL, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    return ((ISteamRemoteStorage*)linux_side)->PublishVideo((const char *)pchVideoURL, (const char *)pchPreviewFile, (AppId_t)nConsumerAppId, (const char *)pchTitle, (const char *)pchDescription, (ERemoteStoragePublishedFileVisibility)eVisibility, (SteamParamStringArray_t *)pTags);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction(void *linux_side, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    return ((ISteamRemoteStorage*)linux_side)->SetUserPublishedFileAction((PublishedFileId_t)unPublishedFileId, (EWorkshopFileAction)eAction);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction(void *linux_side, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    return ((ISteamRemoteStorage*)linux_side)->EnumeratePublishedFilesByUserAction((EWorkshopFileAction)eAction, (uint32)unStartIndex);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles(void *linux_side, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)
{
    return ((ISteamRemoteStorage*)linux_side)->EnumeratePublishedWorkshopFiles((EWorkshopEnumerationType)eEnumerationType, (uint32)unStartIndex, (uint32)unCount, (uint32)unDays, (SteamParamStringArray_t *)pTags, (SteamParamStringArray_t *)pUserTags);
}

#ifdef __cplusplus
}
#endif
