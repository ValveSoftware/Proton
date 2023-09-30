/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008.h"

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( params->pchFile, params->eRemoteStoragePlatform );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FileWriteStreamOpen( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FileWriteStreamWriteChunk( params->writeHandle, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FileWriteStreamClose( params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FileWriteStreamCancel( params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetUGCDownloadProgress( params->hContent, params->pnBytesDownloaded, params->pnBytesExpected );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetUGCDetails( params->hContent, params->pnAppID, params->ppchName, params->pnFileSizeInBytes, params->pSteamIDOwner );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->PublishWorkshopFile( params->pchFile, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags, params->eWorkshopFileType );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->CreatePublishedFileUpdateRequest( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileFile( params->updateHandle, params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFilePreviewFile( params->updateHandle, params->pchPreviewFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTitle( params->updateHandle, params->pchTitle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileDescription( params->updateHandle, params->pchDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileVisibility( params->updateHandle, params->eVisibility );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTags( params->updateHandle, params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->CommitPublishedFileUpdate( params->updateHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileSetChangeDescription( params->updateHandle, params->pchChangeDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetPublishedItemVoteDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UpdateUserPublishedItemVote( params->unPublishedFileId, params->bVoteUp );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetUserPublishedItemVoteDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->EnumerateUserSharedWorkshopFiles( params->steamId, params->unStartIndex, params->pRequiredTags, params->pExcludedTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->PublishVideo( params->eVideoProvider, params->pchVideoAccount, params->pchVideoIdentifier, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetUserPublishedFileAction( params->unPublishedFileId, params->eAction );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedFilesByUserAction( params->eAction, params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedWorkshopFiles( params->eEnumerationType, params->unStartIndex, params->unCount, params->unDays, params->pTags, params->pUserTags );
}

