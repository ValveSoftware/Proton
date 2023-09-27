#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_125/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_125
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011.h"
void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWrite( (const char *)params->pchFile, (const void *)params->pvData, (int32)params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileRead( (const char *)params->pchFile, (void *)params->pvData, (int32)params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileForget( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileDelete( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileShare( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->SetSyncPlatforms( (const char *)params->pchFile, (ERemoteStoragePlatform)params->eRemoteStoragePlatform );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWriteStreamOpen( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWriteStreamWriteChunk( (UGCFileWriteStreamHandle_t)params->writeHandle, (const void *)params->pvData, (int32)params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWriteStreamClose( (UGCFileWriteStreamHandle_t)params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWriteStreamCancel( (UGCFileWriteStreamHandle_t)params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileExists( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FilePersisted( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileSize( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileTimestamp( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetSyncPlatforms( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileNameAndSize( (int)params->iFile, (int32 *)params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetQuota( (int32 *)params->pnTotalBytes, (int32 *)params->puAvailableBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->IsCloudEnabledForAccount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->IsCloudEnabledForApp(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp_params *params )
{
    ((ISteamRemoteStorage*)params->linux_side)->SetCloudEnabledForApp( (bool)params->bEnabled );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UGCDownload( (UGCHandle_t)params->hContent, (uint32)params->unPriority );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetUGCDownloadProgress( (UGCHandle_t)params->hContent, (int32 *)params->pnBytesDownloaded, (int32 *)params->pnBytesExpected );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetUGCDetails( (UGCHandle_t)params->hContent, (AppId_t *)params->pnAppID, (char **)params->ppchName, (int32 *)params->pnFileSizeInBytes, (CSteamID *)params->pSteamIDOwner );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UGCRead( (UGCHandle_t)params->hContent, (void *)params->pvData, (int32)params->cubDataToRead, (uint32)params->cOffset );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetCachedUGCCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetCachedUGCHandle( (int32)params->iCachedContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->PublishWorkshopFile( (const char *)params->pchFile, (const char *)params->pchPreviewFile, (AppId_t)params->nConsumerAppId, (const char *)params->pchTitle, (const char *)params->pchDescription, (ERemoteStoragePublishedFileVisibility)params->eVisibility, (SteamParamStringArray_t *)params->pTags, (EWorkshopFileType)params->eWorkshopFileType );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->CreatePublishedFileUpdateRequest( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileFile( (PublishedFileUpdateHandle_t)params->updateHandle, (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFilePreviewFile( (PublishedFileUpdateHandle_t)params->updateHandle, (const char *)params->pchPreviewFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileTitle( (PublishedFileUpdateHandle_t)params->updateHandle, (const char *)params->pchTitle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileDescription( (PublishedFileUpdateHandle_t)params->updateHandle, (const char *)params->pchDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileVisibility( (PublishedFileUpdateHandle_t)params->updateHandle, (ERemoteStoragePublishedFileVisibility)params->eVisibility );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileTags( (PublishedFileUpdateHandle_t)params->updateHandle, (SteamParamStringArray_t *)params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->CommitPublishedFileUpdate( (PublishedFileUpdateHandle_t)params->updateHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetPublishedFileDetails( (PublishedFileId_t)params->unPublishedFileId, (uint32)params->unMaxSecondsOld );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->DeletePublishedFile( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->EnumerateUserPublishedFiles( (uint32)params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->SubscribePublishedFile( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->EnumerateUserSubscribedFiles( (uint32)params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UnsubscribePublishedFile( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdatePublishedFileSetChangeDescription( (PublishedFileUpdateHandle_t)params->updateHandle, (const char *)params->pchChangeDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetPublishedItemVoteDetails( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UpdateUserPublishedItemVote( (PublishedFileId_t)params->unPublishedFileId, (bool)params->bVoteUp );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetUserPublishedItemVoteDetails( (PublishedFileId_t)params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->EnumerateUserSharedWorkshopFiles( (CSteamID)params->steamId, (uint32)params->unStartIndex, (SteamParamStringArray_t *)params->pRequiredTags, (SteamParamStringArray_t *)params->pExcludedTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->PublishVideo( (EWorkshopVideoProvider)params->eVideoProvider, (const char *)params->pchVideoAccount, (const char *)params->pchVideoIdentifier, (const char *)params->pchPreviewFile, (AppId_t)params->nConsumerAppId, (const char *)params->pchTitle, (const char *)params->pchDescription, (ERemoteStoragePublishedFileVisibility)params->eVisibility, (SteamParamStringArray_t *)params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->SetUserPublishedFileAction( (PublishedFileId_t)params->unPublishedFileId, (EWorkshopFileAction)params->eAction );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->EnumeratePublishedFilesByUserAction( (EWorkshopFileAction)params->eAction, (uint32)params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->EnumeratePublishedWorkshopFiles( (EWorkshopEnumerationType)params->eEnumerationType, (uint32)params->unStartIndex, (uint32)params->unCount, (uint32)params->unDays, (SteamParamStringArray_t *)params->pTags, (SteamParamStringArray_t *)params->pUserTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->UGCDownloadToLocation( (UGCHandle_t)params->hContent, (const char *)params->pchLocation, (uint32)params->unPriority );
}

#ifdef __cplusplus
}
#endif
