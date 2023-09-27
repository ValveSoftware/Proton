#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_134/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_134
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012.h"
void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWrite_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWrite( (const char *)params->pchFile, (const void *)params->pvData, (int32)params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileRead_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileRead( (const char *)params->pchFile, (void *)params->pvData, (int32)params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileForget_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileForget( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileDelete_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileDelete( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileShare_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileShare( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetSyncPlatforms_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->SetSyncPlatforms( (const char *)params->pchFile, (ERemoteStoragePlatform)params->eRemoteStoragePlatform );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamOpen_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWriteStreamOpen( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamWriteChunk_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWriteStreamWriteChunk( (UGCFileWriteStreamHandle_t)params->writeHandle, (const void *)params->pvData, (int32)params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamClose_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWriteStreamClose( (UGCFileWriteStreamHandle_t)params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileWriteStreamCancel_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWriteStreamCancel( (UGCFileWriteStreamHandle_t)params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FileExists_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileExists( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_FilePersisted_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FilePersisted( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileSize_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileSize( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileTimestamp_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileTimestamp( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetSyncPlatforms_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetSyncPlatforms( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileCount_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetFileNameAndSize_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileNameAndSize( (int)params->iFile, (int32 *)params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetQuota_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetQuota( (int32 *)params->pnTotalBytes, (int32 *)params->puAvailableBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForAccount_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->IsCloudEnabledForAccount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_IsCloudEnabledForApp_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->IsCloudEnabledForApp(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetCloudEnabledForApp_params *params )
{
    ((ISteamRemoteStorage*)params->linux_side)->SetCloudEnabledForApp( (bool)params->bEnabled );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownload_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UGCDownload( (UGCHandle_t)params->hContent, (uint32)params->unPriority );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDownloadProgress_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetUGCDownloadProgress( (UGCHandle_t)params->hContent, (int32 *)params->pnBytesDownloaded, (int32 *)params->pnBytesExpected );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUGCDetails_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetUGCDetails( (UGCHandle_t)params->hContent, (AppId_t *)params->pnAppID, (char **)params->ppchName, (int32 *)params->pnFileSizeInBytes, (CSteamID *)params->pSteamIDOwner );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCRead_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UGCRead( (UGCHandle_t)params->hContent, (void *)params->pvData, (int32)params->cubDataToRead, (uint32)params->cOffset, (EUGCReadAction)params->eAction );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCCount_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetCachedUGCCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetCachedUGCHandle_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetCachedUGCHandle( (int32)params->iCachedContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishWorkshopFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->PublishWorkshopFile( (const char *)params->pchFile, (const char *)params->pchPreviewFile, (AppId_t)params->nConsumerAppId, (const char *)params->pchTitle, (const char *)params->pchDescription, (ERemoteStoragePublishedFileVisibility)params->eVisibility, (SteamParamStringArray_t *)params->pTags, (EWorkshopFileType)params->eWorkshopFileType );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CreatePublishedFileUpdateRequest_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->CreatePublishedFileUpdateRequest( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileFile( (PublishedFileUpdateHandle_t)params->updateHandle, (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFilePreviewFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFilePreviewFile( (PublishedFileUpdateHandle_t)params->updateHandle, (const char *)params->pchPreviewFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTitle_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileTitle( (PublishedFileUpdateHandle_t)params->updateHandle, (const char *)params->pchTitle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileDescription_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileDescription( (PublishedFileUpdateHandle_t)params->updateHandle, (const char *)params->pchDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileVisibility_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileVisibility( (PublishedFileUpdateHandle_t)params->updateHandle, (ERemoteStoragePublishedFileVisibility)params->eVisibility );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileTags_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileTags( (PublishedFileUpdateHandle_t)params->updateHandle, (SteamParamStringArray_t *)params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_CommitPublishedFileUpdate_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->CommitPublishedFileUpdate( (PublishedFileUpdateHandle_t)params->updateHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedFileDetails_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetPublishedFileDetails( (PublishedFileId_t)params->unPublishedFileId, (uint32)params->unMaxSecondsOld );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_DeletePublishedFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->DeletePublishedFile( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserPublishedFiles_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->EnumerateUserPublishedFiles( (uint32)params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SubscribePublishedFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->SubscribePublishedFile( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSubscribedFiles_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->EnumerateUserSubscribedFiles( (uint32)params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UnsubscribePublishedFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UnsubscribePublishedFile( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdatePublishedFileSetChangeDescription_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileSetChangeDescription( (PublishedFileUpdateHandle_t)params->updateHandle, (const char *)params->pchChangeDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetPublishedItemVoteDetails_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetPublishedItemVoteDetails( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UpdateUserPublishedItemVote_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdateUserPublishedItemVote( (PublishedFileId_t)params->unPublishedFileId, (bool)params->bVoteUp );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_GetUserPublishedItemVoteDetails_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetUserPublishedItemVoteDetails( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumerateUserSharedWorkshopFiles_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->EnumerateUserSharedWorkshopFiles( (CSteamID)params->steamId, (uint32)params->unStartIndex, (SteamParamStringArray_t *)params->pRequiredTags, (SteamParamStringArray_t *)params->pExcludedTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_PublishVideo_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->PublishVideo( (EWorkshopVideoProvider)params->eVideoProvider, (const char *)params->pchVideoAccount, (const char *)params->pchVideoIdentifier, (const char *)params->pchPreviewFile, (AppId_t)params->nConsumerAppId, (const char *)params->pchTitle, (const char *)params->pchDescription, (ERemoteStoragePublishedFileVisibility)params->eVisibility, (SteamParamStringArray_t *)params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_SetUserPublishedFileAction_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->SetUserPublishedFileAction( (PublishedFileId_t)params->unPublishedFileId, (EWorkshopFileAction)params->eAction );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedFilesByUserAction_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->EnumeratePublishedFilesByUserAction( (EWorkshopFileAction)params->eAction, (uint32)params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_EnumeratePublishedWorkshopFiles_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->EnumeratePublishedWorkshopFiles( (EWorkshopEnumerationType)params->eEnumerationType, (uint32)params->unStartIndex, (uint32)params->unCount, (uint32)params->unDays, (SteamParamStringArray_t *)params->pTags, (SteamParamStringArray_t *)params->pUserTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION012_UGCDownloadToLocation_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UGCDownloadToLocation( (UGCHandle_t)params->hContent, (const char *)params->pchLocation, (uint32)params->unPriority );
}

#ifdef __cplusplus
}
#endif
