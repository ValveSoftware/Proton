#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_102x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_102x
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001.h"

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual bool FileWrite( const char *, const void *, int32_t ) = 0;
    virtual int32_t GetFileSize( const char * ) = 0;
    virtual int32_t FileRead( const char *, void *, int32_t ) = 0;
    virtual bool FileExists( const char * ) = 0;
    virtual bool FileDelete( const char * ) = 0;
    virtual int32_t GetFileCount(  ) = 0;
    virtual const char * GetFileNameAndSize( int32_t, int32_t * ) = 0;
    virtual bool GetQuota( int32_t *, int32_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota_params *params )
{
    struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *iface = (struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
}

#ifdef __cplusplus
}
#endif
