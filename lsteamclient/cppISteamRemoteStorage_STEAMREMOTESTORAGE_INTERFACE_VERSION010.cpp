/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( params->pchFile, params->eRemoteStoragePlatform );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FileWriteStreamOpen( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FileWriteStreamWriteChunk( params->writeHandle, params->pvData, params->cubData );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FileWriteStreamClose( params->writeHandle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FileWriteStreamCancel( params->writeHandle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent, params->unPriority );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUGCDownloadProgress( params->hContent, params->pnBytesDownloaded, params->pnBytesExpected );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUGCDetails( params->hContent, params->pnAppID, params->ppchName, params->pnFileSizeInBytes, params->pSteamIDOwner );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead, params->cOffset );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    char *u_pchFile = steamclient_dos_to_unix_path( params->pchFile, 0 );
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( params->pchPreviewFile, 0 );
    params->_ret = iface->PublishWorkshopFile( u_pchFile, u_pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags, params->eWorkshopFileType );
    steamclient_free_path( u_pchFile );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->CreatePublishedFileUpdateRequest( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    char *u_pchFile = steamclient_dos_to_unix_path( params->pchFile, 0 );
    params->_ret = iface->UpdatePublishedFileFile( params->updateHandle, u_pchFile );
    steamclient_free_path( u_pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( params->pchPreviewFile, 0 );
    params->_ret = iface->UpdatePublishedFilePreviewFile( params->updateHandle, u_pchPreviewFile );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTitle( params->updateHandle, params->pchTitle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileDescription( params->updateHandle, params->pchDescription );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileVisibility( params->updateHandle, params->eVisibility );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTags( params->updateHandle, params->pTags );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->CommitPublishedFileUpdate( params->updateHandle );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileSetChangeDescription( params->updateHandle, params->pchChangeDescription );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetPublishedItemVoteDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->UpdateUserPublishedItemVote( params->unPublishedFileId, params->bVoteUp );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->GetUserPublishedItemVoteDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->EnumerateUserSharedWorkshopFiles( params->steamId, params->unStartIndex, params->pRequiredTags, params->pExcludedTags );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( params->pchPreviewFile, 0 );
    params->_ret = iface->PublishVideo( params->eVideoProvider, params->pchVideoAccount, params->pchVideoIdentifier, u_pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->SetUserPublishedFileAction( params->unPublishedFileId, params->eAction );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedFilesByUserAction( params->eAction, params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedWorkshopFiles( params->eEnumerationType, params->unStartIndex, params->unCount, params->unDays, params->pTags, params->pUserTags );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010 *)params->linux_side;
    char *u_pchLocation = steamclient_dos_to_unix_path( params->pchLocation, 0 );
    params->_ret = iface->UGCDownloadToLocation( params->hContent, u_pchLocation, params->unPriority );
    steamclient_free_path( u_pchLocation );
    return 0;
}

