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

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile, const void * pvData, uint32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile, uint32 nOffset, uint32 cubToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync(_this->linux_side, pchFile, nOffset, cubToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, SteamAPICall_t hReadCall, void * pvBuffer, uint32 cubToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete(_this->linux_side, hReadCall, pvBuffer, cubToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen, 8)
UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk(_this->linux_side, writeHandle, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, uint64 * pnTotalBytes, uint64 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, UGCHandle_t hContent, uint32 unPriority)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload(_this->linux_side, hContent, unPriority);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress(_this->linux_side, hContent, pnBytesDownloaded, pnBytesExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead, 28)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead, cOffset, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile, 36)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile(_this->linux_side, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest, 12)
PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile(_this->linux_side, updateHandle, pchFile ? lin_pchFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile(_this->linux_side, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle(_this->linux_side, updateHandle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription(_this->linux_side, updateHandle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility(_this->linux_side, updateHandle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileUpdateHandle_t updateHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate(_this->linux_side, updateHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails(_this->linux_side, unPublishedFileId, unMaxSecondsOld);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription(_this->linux_side, updateHandle, pchChangeDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote(_this->linux_side, unPublishedFileId, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles, 24)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles(_this->linux_side, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo, 40)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo(_this->linux_side, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction(_this->linux_side, unPublishedFileId, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction(_this->linux_side, eAction, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles, 28)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles(_this->linux_side, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation, 20)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *_this, UGCHandle_t hContent, const char * pchLocation, uint32 unPriority)
{
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation(_this->linux_side, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile, const void * pvData, uint32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile, uint32 nOffset, uint32 cubToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync(_this->linux_side, pchFile, nOffset, cubToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, SteamAPICall_t hReadCall, void * pvBuffer, uint32 cubToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete(_this->linux_side, hReadCall, pvBuffer, cubToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen, 8)
UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk(_this->linux_side, writeHandle, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, UGCHandle_t hContent, uint32 unPriority)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload(_this->linux_side, hContent, unPriority);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress(_this->linux_side, hContent, pnBytesDownloaded, pnBytesExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead, 28)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead, cOffset, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile, 36)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile(_this->linux_side, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest, 12)
PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile(_this->linux_side, updateHandle, pchFile ? lin_pchFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile(_this->linux_side, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle(_this->linux_side, updateHandle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription(_this->linux_side, updateHandle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility(_this->linux_side, updateHandle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileUpdateHandle_t updateHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate(_this->linux_side, updateHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails(_this->linux_side, unPublishedFileId, unMaxSecondsOld);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription(_this->linux_side, updateHandle, pchChangeDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote(_this->linux_side, unPublishedFileId, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles, 24)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles(_this->linux_side, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo, 40)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo(_this->linux_side, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction(_this->linux_side, unPublishedFileId, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction(_this->linux_side, eAction, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles, 28)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles(_this->linux_side, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation, 20)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *_this, UGCHandle_t hContent, const char * pchLocation, uint32 unPriority)
{
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation(_this->linux_side, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteAsync)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsync)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileReadAsyncComplete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_UGCDownloadToLocation)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION013_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen, 8)
UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk(_this->linux_side, writeHandle, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, UGCHandle_t hContent, uint32 unPriority)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload(_this->linux_side, hContent, unPriority);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress(_this->linux_side, hContent, pnBytesDownloaded, pnBytesExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead, 28)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead, cOffset, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile, 36)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile(_this->linux_side, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest, 12)
PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile(_this->linux_side, updateHandle, pchFile ? lin_pchFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile(_this->linux_side, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle(_this->linux_side, updateHandle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription(_this->linux_side, updateHandle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility(_this->linux_side, updateHandle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileUpdateHandle_t updateHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate(_this->linux_side, updateHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails(_this->linux_side, unPublishedFileId, unMaxSecondsOld);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription(_this->linux_side, updateHandle, pchChangeDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote(_this->linux_side, unPublishedFileId, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles, 24)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles(_this->linux_side, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo, 40)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo(_this->linux_side, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction(_this->linux_side, unPublishedFileId, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction(_this->linux_side, eAction, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles, 28)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles(_this->linux_side, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation, 20)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *_this, UGCHandle_t hContent, const char * pchLocation, uint32 unPriority)
{
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation(_this->linux_side, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen, 8)
UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk(_this->linux_side, writeHandle, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, UGCHandle_t hContent, uint32 unPriority)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload(_this->linux_side, hContent, unPriority);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress(_this->linux_side, hContent, pnBytesDownloaded, pnBytesExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead, 24)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead, uint32 cOffset)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead, cOffset);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile, 36)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile(_this->linux_side, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest, 12)
PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile(_this->linux_side, updateHandle, pchFile ? lin_pchFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile(_this->linux_side, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle(_this->linux_side, updateHandle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription(_this->linux_side, updateHandle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility(_this->linux_side, updateHandle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileUpdateHandle_t updateHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate(_this->linux_side, updateHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails(_this->linux_side, unPublishedFileId, unMaxSecondsOld);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription(_this->linux_side, updateHandle, pchChangeDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote(_this->linux_side, unPublishedFileId, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles, 24)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles(_this->linux_side, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo, 40)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo(_this->linux_side, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction(_this->linux_side, unPublishedFileId, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction(_this->linux_side, eAction, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles, 28)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles(_this->linux_side, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation, 20)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *_this, UGCHandle_t hContent, const char * pchLocation, uint32 unPriority)
{
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation(_this->linux_side, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen, 8)
UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk(_this->linux_side, writeHandle, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, UGCHandle_t hContent, uint32 unPriority)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload(_this->linux_side, hContent, unPriority);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress(_this->linux_side, hContent, pnBytesDownloaded, pnBytesExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead, 24)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead, uint32 cOffset)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead, cOffset);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile, 36)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile(_this->linux_side, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest, 12)
PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile(_this->linux_side, updateHandle, pchFile ? lin_pchFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile(_this->linux_side, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle(_this->linux_side, updateHandle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription(_this->linux_side, updateHandle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility(_this->linux_side, updateHandle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileUpdateHandle_t updateHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate(_this->linux_side, updateHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription(_this->linux_side, updateHandle, pchChangeDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote(_this->linux_side, unPublishedFileId, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles, 24)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles(_this->linux_side, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo, 40)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo(_this->linux_side, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction(_this->linux_side, unPublishedFileId, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction(_this->linux_side, eAction, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles, 28)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles(_this->linux_side, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation, 20)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *_this, UGCHandle_t hContent, const char * pchLocation, uint32 unPriority)
{
    char lin_pchLocation[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchLocation, lin_pchLocation, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation(_this->linux_side, hContent, pchLocation ? lin_pchLocation : NULL, unPriority);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen, 8)
UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk(_this->linux_side, writeHandle, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, UGCHandle_t hContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload(_this->linux_side, hContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress(_this->linux_side, hContent, pnBytesDownloaded, pnBytesExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead, 24)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead, uint32 cOffset)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead, cOffset);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile, 36)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile(_this->linux_side, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest, 12)
PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile(_this->linux_side, updateHandle, pchFile ? lin_pchFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile(_this->linux_side, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle(_this->linux_side, updateHandle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription(_this->linux_side, updateHandle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility(_this->linux_side, updateHandle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileUpdateHandle_t updateHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate(_this->linux_side, updateHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription(_this->linux_side, updateHandle, pchChangeDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote(_this->linux_side, unPublishedFileId, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles, 24)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles(_this->linux_side, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo, 40)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo(_this->linux_side, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction(_this->linux_side, unPublishedFileId, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction(_this->linux_side, eAction, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles, 28)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles(_this->linux_side, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen, 8)
UGCFileWriteStreamHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk(_this->linux_side, writeHandle, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, UGCFileWriteStreamHandle_t writeHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel(_this->linux_side, writeHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, UGCHandle_t hContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload(_this->linux_side, hContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress(_this->linux_side, hContent, pnBytesDownloaded, pnBytesExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead, 20)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile, 36)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile(_this->linux_side, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest, 12)
PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile(_this->linux_side, updateHandle, pchFile ? lin_pchFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile(_this->linux_side, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle(_this->linux_side, updateHandle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription(_this->linux_side, updateHandle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility(_this->linux_side, updateHandle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileUpdateHandle_t updateHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate(_this->linux_side, updateHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription(_this->linux_side, updateHandle, pchChangeDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote(_this->linux_side, unPublishedFileId, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles, 24)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles(_this->linux_side, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo, 40)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo(_this->linux_side, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction(_this->linux_side, unPublishedFileId, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction(_this->linux_side, eAction, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles, 28)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles(_this->linux_side, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, UGCHandle_t hContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload(_this->linux_side, hContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress(_this->linux_side, hContent, pnBytesDownloaded, pnBytesExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead, 20)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile, 36)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile(_this->linux_side, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest, 12)
PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile(_this->linux_side, updateHandle, pchFile ? lin_pchFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile(_this->linux_side, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle(_this->linux_side, updateHandle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription(_this->linux_side, updateHandle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility(_this->linux_side, updateHandle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileUpdateHandle_t updateHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate(_this->linux_side, updateHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription(_this->linux_side, updateHandle, pchChangeDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote(_this->linux_side, unPublishedFileId, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles, 24)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles(_this->linux_side, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo, 40)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo(_this->linux_side, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction(_this->linux_side, unPublishedFileId, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction(_this->linux_side, eAction, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles, 28)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles(_this->linux_side, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, UGCHandle_t hContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload(_this->linux_side, hContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress, 20)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress(_this->linux_side, hContent, pnBytesDownloaded, pnBytesExpected);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead, 20)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile, 36)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile(_this->linux_side, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest, 12)
PublishedFileUpdateHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile(_this->linux_side, updateHandle, pchFile ? lin_pchFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile(_this->linux_side, updateHandle, pchPreviewFile ? lin_pchPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle(_this->linux_side, updateHandle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription(_this->linux_side, updateHandle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility(_this->linux_side, updateHandle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileUpdateHandle_t updateHandle)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate(_this->linux_side, updateHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription(_this->linux_side, updateHandle, pchChangeDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote(_this->linux_side, unPublishedFileId, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles, 24)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles(_this->linux_side, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo, 32)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, const char * pchVideoURL, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo(_this->linux_side, pchVideoURL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction, 16)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction(_this->linux_side, unPublishedFileId, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction(_this->linux_side, eAction, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles, 28)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *_this, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles(_this->linux_side, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, UGCHandle_t hContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload(_this->linux_side, hContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead, 20)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile, 32)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile(_this->linux_side, pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile, 28)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, SteamParamStringArray_t * pTags)
{
    char lin_pchFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchFile, lin_pchFile, 0);
    char lin_pchPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchPreviewFile, lin_pchPreviewFile, 0);
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile(_this->linux_side, pchFile ? lin_pchFile : NULL, pchPreviewFile ? lin_pchPreviewFile : NULL, nConsumerAppId, pchTitle, pchDescription, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile, 44)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, RemoteStorageUpdatePublishedFileRequest_t updatePublishedFileRequest)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile(_this->linux_side, updatePublishedFileRequest);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, uint32 unStartIndex)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles(_this->linux_side, unStartIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *_this, PublishedFileId_t unPublishedFileId)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile(_this->linux_side, unPublishedFileId);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms(_this->linux_side, pchFile, eRemoteStoragePlatform);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms, 8)
ERemoteStoragePlatform __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, UGCHandle_t hContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload(_this->linux_side, hContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead, 20)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare, 8)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp, 8)
int64 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp, 4)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp, 8)
void __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, bool bEnabled)
{
    TRACE("%p\n", _this);
    cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp(_this->linux_side, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload, 12)
SteamAPICall_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, UGCHandle_t hContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload(_this->linux_side, hContent);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails, 28)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails(_this->linux_side, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead, 20)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, UGCHandle_t hContent, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead(_this->linux_side, hContent, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle, 8)
UGCHandle_t __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *_this, int32 iCachedContent)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle(_this->linux_side, iCachedContent);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001.h"

typedef struct __winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite, 16)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *_this, const char * pchFile, const void * pvData, int32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite(_this->linux_side, pchFile, pvData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize, 8)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead, 16)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *_this, const char * pchFile, void * pvData, int32 cubDataToRead)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead(_this->linux_side, pchFile, pvData, cubDataToRead);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete, 8)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *_this, const char * pchFile)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete(_this->linux_side, pchFile);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount, 4)
int32 __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize, 12)
const char * __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *_this, int iFile, int32 * pnFileSizeInBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize(_this->linux_side, iFile, pnFileSizeInBytes);
}

DEFINE_THISCALL_WRAPPER(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota, 12)
bool __thiscall winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *_this, int32 * pnTotalBytes, int32 * puAvailableBytes)
{
    TRACE("%p\n", _this);
    return cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota(_this->linux_side, pnTotalBytes, puAvailableBytes);
}

extern vtable_ptr winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize)
        VTABLE_ADD_FUNC(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota)
    );
#ifndef __GNUC__
}
#endif

winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *create_winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001(void *linux_side)
{
    winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_vtable;
    r->linux_side = linux_side;
    return r;
}

