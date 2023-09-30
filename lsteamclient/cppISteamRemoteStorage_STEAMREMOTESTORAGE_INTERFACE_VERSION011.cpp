/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011.h"

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( params->pchFile, params->eRemoteStoragePlatform );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamOpen( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamWriteChunk( params->writeHandle, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamClose( params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileWriteStreamCancel( params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent, params->unPriority );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUGCDownloadProgress( params->hContent, params->pnBytesDownloaded, params->pnBytesExpected );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUGCDetails( params->hContent, params->pnAppID, params->ppchName, params->pnFileSizeInBytes, params->pSteamIDOwner );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead, params->cOffset );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->PublishWorkshopFile( params->pchFile, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags, params->eWorkshopFileType );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->CreatePublishedFileUpdateRequest( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileFile( params->updateHandle, params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFilePreviewFile( params->updateHandle, params->pchPreviewFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTitle( params->updateHandle, params->pchTitle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileDescription( params->updateHandle, params->pchDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileVisibility( params->updateHandle, params->eVisibility );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTags( params->updateHandle, params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->CommitPublishedFileUpdate( params->updateHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId, params->unMaxSecondsOld );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileSetChangeDescription( params->updateHandle, params->pchChangeDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetPublishedItemVoteDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UpdateUserPublishedItemVote( params->unPublishedFileId, params->bVoteUp );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->GetUserPublishedItemVoteDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumerateUserSharedWorkshopFiles( params->steamId, params->unStartIndex, params->pRequiredTags, params->pExcludedTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->PublishVideo( params->eVideoProvider, params->pchVideoAccount, params->pchVideoIdentifier, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->SetUserPublishedFileAction( params->unPublishedFileId, params->eAction );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedFilesByUserAction( params->eAction, params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedWorkshopFiles( params->eEnumerationType, params->unStartIndex, params->unCount, params->unDays, params->pTags, params->pUserTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011 *)params->linux_side;
    params->_ret = iface->UGCDownloadToLocation( params->hContent, params->pchLocation, params->unPriority );
}

