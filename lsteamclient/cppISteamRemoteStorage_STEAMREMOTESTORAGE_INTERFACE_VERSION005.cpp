/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( params->pchFile, params->eRemoteStoragePlatform );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( params->pchFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetUGCDetails( params->hContent, params->pnAppID, params->ppchName, params->pnFileSizeInBytes, params->pSteamIDOwner );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->PublishFile( params->pchFile, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    char *u_pchFile = steamclient_dos_to_unix_path( params->pchFile, 0 );
    char *u_pchPreviewFile = steamclient_dos_to_unix_path( params->pchPreviewFile, 0 );
    params->_ret = iface->PublishWorkshopFile( u_pchFile, u_pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->pTags );
    steamclient_free_path( u_pchFile );
    steamclient_free_path( u_pchPreviewFile );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFile( params->updatePublishedFileRequest );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
    return 0;
}

NTSTATUS ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile( void *args )
{
    struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile_params *params = (struct ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile_params *)args;
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
    return 0;
}

