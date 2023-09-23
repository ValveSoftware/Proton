#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_116/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_116
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004.h"

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004
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
    virtual bool GetUGCDetails( uint64_t, uint32_t *, char **, int32_t *, CSteamID * ) = 0;
    virtual int32_t UGCRead( uint64_t, void *, int32_t ) = 0;
    virtual int32_t GetCachedUGCCount(  ) = 0;
    virtual uint64_t GetCachedUGCHandle( int32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileWrite_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileRead_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileForget_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileDelete_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileShare_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetSyncPlatforms_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetSyncPlatforms( params->pchFile, params->eRemoteStoragePlatform );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FileExists_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_FilePersisted_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileSize_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileTimestamp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetSyncPlatforms_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetSyncPlatforms( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileCount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetFileNameAndSize_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetQuota_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForAccount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_IsCloudEnabledForApp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_SetCloudEnabledForApp_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCDownload_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetUGCDetails_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetUGCDetails( params->hContent, params->pnAppID, params->ppchName, params->pnFileSizeInBytes, params->pSteamIDOwner );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_UGCRead_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCCount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004_GetCachedUGCHandle_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
}

#ifdef __cplusplus
}
#endif
