/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION001.h"

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_126 * ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    u_SteamUGCDetails_t_126 u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID );
}

