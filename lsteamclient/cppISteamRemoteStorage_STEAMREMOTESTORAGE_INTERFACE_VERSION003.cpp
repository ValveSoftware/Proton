/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003.h"

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileWrite_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->FileWrite( params->pchFile, params->pvData, params->cubData );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileRead_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->FileRead( params->pchFile, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileForget_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->FileForget( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileDelete_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->FileDelete( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileShare_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->FileShare( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FileExists_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->FileExists( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_FilePersisted_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->FilePersisted( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileSize_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetFileSize( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileTimestamp_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetFileTimestamp( params->pchFile );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileCount_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetFileCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetFileNameAndSize_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetFileNameAndSize( params->iFile, params->pnFileSizeInBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetQuota_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetQuota( params->pnTotalBytes, params->puAvailableBytes );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForAccount_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForAccount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_IsCloudEnabledForApp_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->IsCloudEnabledForApp(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_SetCloudEnabledForApp_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    iface->SetCloudEnabledForApp( params->bEnabled );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCDownload_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->UGCDownload( params->hContent );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetUGCDetails_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetUGCDetails( params->hContent, params->pnAppID, params->ppchName, params->pnFileSizeInBytes, params->pSteamIDOwner );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_UGCRead_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->UGCRead( params->hContent, params->pvData, params->cubDataToRead );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCCount_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetCachedUGCCount(  );
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003_GetCachedUGCHandle_params *params )
{
    struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *iface = (struct u_ISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetCachedUGCHandle( params->iCachedContent );
}

