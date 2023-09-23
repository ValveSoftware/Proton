#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_132/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_132
#include "struct_converters.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION003.h"

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, SteamUGCDetails_t * ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, bool * ) = 0;
    virtual bool GetItemUpdateInfo( uint64_t, bool *, bool *, uint64_t *, uint64_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    SteamUGCDetails_t lin_pDetails;
    win_to_lin_struct_SteamUGCDetails_t_132( params->pDetails, &lin_pDetails );
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &lin_pDetails );
    lin_to_win_struct_SteamUGCDetails_t_132( &lin_pDetails, params->pDetails );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemContent( params->handle, params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemPreview( params->handle, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->pbLegacyItem );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetItemUpdateInfo( params->nPublishedFileID, params->pbNeedsUpdate, params->pbIsDownloading, params->punBytesDownloaded, params->punBytesTotal );
}

#ifdef __cplusplus
}
#endif
