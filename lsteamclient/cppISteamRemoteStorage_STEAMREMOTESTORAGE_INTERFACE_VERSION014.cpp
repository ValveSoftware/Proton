#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_151/steam_api.h"
#include "steamworks_sdk_151/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_151
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014.h"

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual uint64_t FileWriteAsync( const char *, const void *, uint32_t ) = 0;
    virtual uint64_t FileReadAsync( const char *, uint32_t, uint32_t ) = 0;
    virtual bool FileReadAsyncComplete( uint64_t, void *, uint32_t ) = 0;
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
    virtual bool GetQuota( uint64_t *, uint64_t * ) = 0;
    virtual bool IsCloudEnabledForAccount(  ) = 0;
    virtual bool IsCloudEnabledForApp(  ) = 0;
    virtual void SetCloudEnabledForApp( bool ) = 0;
    virtual uint64_t UGCDownload( uint64_t, uint32_t ) = 0;
    virtual bool GetUGCDownloadProgress( uint64_t, int32_t *, int32_t * ) = 0;
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t, uint32_t, uint32_t ) = 0;
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
    virtual uint64_t GetPublishedFileDetails( uint64_t, uint32_t ) = 0;
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
    virtual uint64_t UGCDownloadToLocation( uint64_t, const char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWrite_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileRead_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteAsync_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileWriteAsync( params->pchFile, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsync_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileReadAsync( params->pchFile, params->nOffset, params->cubToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileReadAsyncComplete_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileReadAsyncComplete( params->hReadCall, params->pvBuffer, params->cubToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileForget_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileDelete_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileShare_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetSyncPlatforms_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( params->pchFile, params->eRemoteStoragePlatform );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamOpen_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileWriteStreamOpen( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamWriteChunk_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileWriteStreamWriteChunk( params->writeHandle, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamClose_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileWriteStreamClose( params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileWriteStreamCancel_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileWriteStreamCancel( params->writeHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FileExists_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_FilePersisted_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileSize_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileTimestamp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetSyncPlatforms_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileCount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetFileNameAndSize_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetQuota_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForAccount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_IsCloudEnabledForApp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetCloudEnabledForApp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownload_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent, params->unPriority );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDownloadProgress_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetUGCDownloadProgress( params->hContent, params->pnBytesDownloaded, params->pnBytesExpected );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUGCDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetUGCDetails( params->hContent, params->pnAppID, params->ppchName, params->pnFileSizeInBytes, params->pSteamIDOwner );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCRead_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead, params->cOffset, params->eAction );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCCount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetCachedUGCHandle_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishWorkshopFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->PublishWorkshopFile( params->pchFile, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags, params->eWorkshopFileType );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CreatePublishedFileUpdateRequest_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->CreatePublishedFileUpdateRequest( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileFile( params->updateHandle, params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFilePreviewFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFilePreviewFile( params->updateHandle, params->pchPreviewFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTitle_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTitle( params->updateHandle, params->pchTitle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileDescription_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileDescription( params->updateHandle, params->pchDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileVisibility_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileVisibility( params->updateHandle, params->eVisibility );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileTags_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileTags( params->updateHandle, params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_CommitPublishedFileUpdate_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->CommitPublishedFileUpdate( params->updateHandle );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedFileDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetPublishedFileDetails( params->unPublishedFileId, params->unMaxSecondsOld );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_DeletePublishedFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->DeletePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserPublishedFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->EnumerateUserPublishedFiles( params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SubscribePublishedFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->SubscribePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSubscribedFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->EnumerateUserSubscribedFiles( params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UnsubscribePublishedFile_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UnsubscribePublishedFile( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdatePublishedFileSetChangeDescription_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UpdatePublishedFileSetChangeDescription( params->updateHandle, params->pchChangeDescription );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetPublishedItemVoteDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetPublishedItemVoteDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UpdateUserPublishedItemVote_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UpdateUserPublishedItemVote( params->unPublishedFileId, params->bVoteUp );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_GetUserPublishedItemVoteDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->GetUserPublishedItemVoteDetails( params->unPublishedFileId );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumerateUserSharedWorkshopFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->EnumerateUserSharedWorkshopFiles( params->steamId, params->unStartIndex, params->pRequiredTags, params->pExcludedTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_PublishVideo_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->PublishVideo( params->eVideoProvider, params->pchVideoAccount, params->pchVideoIdentifier, params->pchPreviewFile, params->nConsumerAppId, params->pchTitle, params->pchDescription, params->eVisibility, params->pTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_SetUserPublishedFileAction_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->SetUserPublishedFileAction( params->unPublishedFileId, params->eAction );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedFilesByUserAction_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedFilesByUserAction( params->eAction, params->unStartIndex );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_EnumeratePublishedWorkshopFiles_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->EnumeratePublishedWorkshopFiles( params->eEnumerationType, params->unStartIndex, params->unCount, params->unDays, params->pTags, params->pUserTags );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014_UGCDownloadToLocation_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION014 *)params->linux_side;
    params->_ret = iface->UGCDownloadToLocation( params->hContent, params->pchLocation, params->unPriority );
}

#ifdef __cplusplus
}
#endif
