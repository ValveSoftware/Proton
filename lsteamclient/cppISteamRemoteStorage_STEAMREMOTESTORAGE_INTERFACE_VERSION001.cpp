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
void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileWrite_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileWrite( (const char *)params->pchFile, (const void *)params->pvData, (int32)params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileSize_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileSize( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileRead_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileRead( (const char *)params->pchFile, (void *)params->pvData, (int32)params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileExists_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileExists( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_FileDelete_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->FileDelete( (const char *)params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileCount_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetFileNameAndSize_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetFileNameAndSize( (int)params->iFile, (int32 *)params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION001_GetQuota_params *params )
{
    params->_ret = ((ISteamRemoteStorage*)params->linux_side)->GetQuota( (int32 *)params->pnTotalBytes, (int32 *)params->puAvailableBytes );
}

#ifdef __cplusplus
}
#endif
