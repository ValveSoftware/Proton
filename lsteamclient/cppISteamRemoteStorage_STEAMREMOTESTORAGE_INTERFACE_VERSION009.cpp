#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_121x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_121x
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009.h"

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileForget( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual uint64_t FileShare( const char * ) = 0;
    virtual bool SetSyncPlatforms( const char *, uint32_t ) = 0;
    virtual uint64_t FileWriteStreamOpen( const char * ) = 0;
    virtual bool FileWriteStreamWriteChunk( uint64_t, const void *, int32_t ) = 0;
    virtual bool FileWriteStreamClose( uint64_t ) = 0;
    virtual bool FileWriteStreamCancel( uint64_t ) = 0;
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
    virtual int32_t UGCRead( uint64_t, void *, int32_t, uint32_t ) = 0;
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
    virtual uint64_t PublishVideo( uint32_t, const char *, const char *, const char *, uint32_t, const char *, const char *, uint32_t, SteamParamStringArray_t * ) = 0;
    virtual uint64_t SetUserPublishedFileAction( uint64_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedFilesByUserAction( uint32_t, uint32_t ) = 0;
    virtual uint64_t EnumeratePublishedWorkshopFiles( uint32_t, uint32_t, uint32_t, uint32_t, SteamParamStringArray_t *, SteamParamStringArray_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWrite_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileRead_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileForget_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileDelete_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileShare_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetSyncPlatforms_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( params->pchFile, params->eRemoteStoragePlatform );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamOpen_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FileWriteStreamOpen( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamWriteChunk_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FileWriteStreamWriteChunk( params->writeHandle, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamClose_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FileWriteStreamClose( params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileWriteStreamCancel_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FileWriteStreamCancel( params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FileExists_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_FilePersisted_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileSize_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileTimestamp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetSyncPlatforms_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileCount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetFileNameAndSize_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetQuota_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForAccount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_IsCloudEnabledForApp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetCloudEnabledForApp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCDownload_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDownloadProgress_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetUGCDownloadProgress( params->hContent, params->pnBytesDownloaded, params->pnBytesExpected );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUGCDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetUGCDetails( params->hContent, params->pnAppID, params->ppchName, params->pnFileSizeInBytes, params->pSteamIDOwner );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UGCRead_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead, params->cOffset );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCCount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetCachedUGCHandle_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishWorkshopFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->PublishWorkshopFile( params->pchFile, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags, params->eWorkshopFileType );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CreatePublishedFileUpdateRequest_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->CreatePublishedFileUpdateRequest( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileFile( params->updateHandle, params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFilePreviewFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFilePreviewFile( params->updateHandle, params->pchPreviewFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTitle_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTitle( params->updateHandle, params->pchTitle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileDescription_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileDescription( params->updateHandle, params->pchDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileVisibility_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileVisibility( params->updateHandle, params->eVisibility );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileTags_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTags( params->updateHandle, params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_CommitPublishedFileUpdate_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->CommitPublishedFileUpdate( params->updateHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedFileDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_DeletePublishedFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserPublishedFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SubscribePublishedFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSubscribedFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UnsubscribePublishedFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdatePublishedFileSetChangeDescription_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileSetChangeDescription( params->updateHandle, params->pchChangeDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetPublishedItemVoteDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetPublishedItemVoteDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_UpdateUserPublishedItemVote_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UpdateUserPublishedItemVote( params->unPublishedFileId, params->bVoteUp );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_GetUserPublishedItemVoteDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetUserPublishedItemVoteDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumerateUserSharedWorkshopFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->EnumerateUserSharedWorkshopFiles( params->steamId, params->unStartIndex, params->pRequiredTags, params->pExcludedTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_PublishVideo_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->PublishVideo( params->eVideoProvider, params->pchVideoAccount, params->pchVideoIdentifier, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_SetUserPublishedFileAction_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetUserPublishedFileAction( params->unPublishedFileId, params->eAction );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedFilesByUserAction_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedFilesByUserAction( params->eAction, params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009_EnumeratePublishedWorkshopFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedWorkshopFiles( params->eEnumerationType, params->unStartIndex, params->unCount, params->unDays, params->pTags, params->pUserTags );
}

#ifdef __cplusplus
}
#endif
