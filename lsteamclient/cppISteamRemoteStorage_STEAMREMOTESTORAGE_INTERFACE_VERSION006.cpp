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

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FilePersisted( const char * ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int64_t GetFileTimestamp( const char * ) = 0;
    virtual uint32_t GetSyncPlatforms( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
    virtual uint64_t PublishWorkshopFile( const char *, const char *, uint32_t, const char *, const char *, uint32_t, SteamParamStringArray_t *, uint32_t ) = 0;
    virtual uint64_t CreatePublishedFileUpdateRequest( uint64_t ) = 0;
    virtual bool UpdatePublishedFileFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFilePreviewFile( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileTitle( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileDescription( uint64_t, const char * ) = 0;
    virtual bool UpdatePublishedFileVisibility( uint64_t, uint32_t ) = 0;
    virtual bool UpdatePublishedFileTags( uint64_t, SteamParamStringArray_t * ) = 0;
    virtual uint64_t CommitPublishedFileUpdate( uint64_t ) = 0;
    virtual uint64_t GetPublishedFileDetails( uint64_t ) = 0;
    virtual uint64_t DeletePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserPublishedFiles( uint32_t ) = 0;
    virtual uint64_t SubscribePublishedFile( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSubscribedFiles( uint32_t ) = 0;
    virtual uint64_t UnsubscribePublishedFile( uint64_t ) = 0;
    virtual bool UpdatePublishedFileSetChangeDescription( uint64_t, const char * ) = 0;
    virtual uint64_t GetPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t UpdateUserPublishedItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserPublishedItemVoteDetails( uint64_t ) = 0;
    virtual uint64_t EnumerateUserSharedWorkshopFiles( CSteamID, uint32_t, SteamParamStringArray_t *, SteamParamStringArray_t * ) = 0;
    virtual uint64_t PublishVideo( const char *, const char *, uint32_t, const char *, const char *, uint32_t, SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, SteamParamStringArray_t *, SteamParamStringArray_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( params->pchFile, params->eRemoteStoragePlatform );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetUGCDownloadProgress( params->hContent, params->pnBytesDownloaded, params->pnBytesExpected );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetUGCDetails( params->hContent, params->pnAppID, params->ppchName, params->pnFileSizeInBytes, params->pSteamIDOwner );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->PublishWorkshopFile( params->pchFile, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags, params->eWorkshopFileType );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->CreatePublishedFileUpdateRequest( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileFile( params->updateHandle, params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFilePreviewFile( params->updateHandle, params->pchPreviewFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTitle( params->updateHandle, params->pchTitle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileDescription( params->updateHandle, params->pchDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileVisibility( params->updateHandle, params->eVisibility );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTags( params->updateHandle, params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->CommitPublishedFileUpdate( params->updateHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileSetChangeDescription( params->updateHandle, params->pchChangeDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetPublishedItemVoteDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UpdateUserPublishedItemVote( params->unPublishedFileId, params->bVoteUp );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetUserPublishedItemVoteDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->EnumerateUserSharedWorkshopFiles( params->steamId, params->unStartIndex, params->pRequiredTags, params->pExcludedTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->PublishVideo( params->pchVideoURL, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetUserPublishedFileAction( params->unPublishedFileId, params->eAction );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedFilesByUserAction( params->eAction, params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedWorkshopFiles( params->eEnumerationType, params->unStartIndex, params->unCount, params->unDays, params->pTags, params->pUserTags );
}

#ifdef __cplusplus
}
#endif
