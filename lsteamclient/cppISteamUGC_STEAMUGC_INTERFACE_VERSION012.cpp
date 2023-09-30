/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION012.h"

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnOnlyIDs( uint64_t, bool ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetReturnPlaytimeStats( uint64_t, uint32_t ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const u_SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool SetAllowLegacyUpload( uint64_t, bool ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
    virtual uint64_t StartPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTracking( uint64_t *, uint32_t ) = 0;
    virtual uint64_t StopPlaytimeTrackingForAllItems(  ) = 0;
    virtual uint64_t AddDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t RemoveDependency( uint64_t, uint64_t ) = 0;
    virtual uint64_t AddAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t RemoveAppDependency( uint64_t, uint32_t ) = 0;
    virtual uint64_t GetAppDependencies( uint64_t ) = 0;
    virtual uint64_t DeleteItem( uint64_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUserUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_2_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->pchCursor );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUGCDetailsRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->CreateQueryUGCDetailsRequest( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SendQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCResult_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCPreviewURL_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetQueryUGCPreviewURL( params->handle, params->index, params->pchURL, params->cchURLSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetQueryUGCMetadata( params->handle, params->index, params->pchMetadata, params->cchMetadatasize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCChildren_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetQueryUGCChildren( params->handle, params->index, params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCStatistic_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetQueryUGCStatistic( params->handle, params->index, params->eStatType, params->pStatValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumAdditionalPreviews_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumAdditionalPreviews( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCAdditionalPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetQueryUGCAdditionalPreview( params->handle, params->index, params->previewIndex, params->pchURLOrVideoID, params->cchURLSize, params->pchOriginalFileName, params->cchOriginalFileNameSize, params->pPreviewType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumKeyValueTags( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCKeyValueTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetQueryUGCKeyValueTag( params->handle, params->index, params->keyValueTagIndex, params->pchKey, params->cchKeySize, params->pchValue, params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_ReleaseQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddExcludedTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnOnlyIDs_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetReturnOnlyIDs( params->handle, params->bReturnOnlyIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetReturnKeyValueTags( params->handle, params->bReturnKeyValueTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnLongDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetReturnMetadata( params->handle, params->bReturnMetadata );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnChildren_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetReturnChildren( params->handle, params->bReturnChildren );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnAdditionalPreviews_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetReturnAdditionalPreviews( params->handle, params->bReturnAdditionalPreviews );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnTotalOnly_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnPlaytimeStats_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetReturnPlaytimeStats( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetLanguage_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetLanguage( params->handle, params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowCachedResponse_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetCloudFileNameFilter_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetMatchAnyTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetSearchText_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetRankedByTrendDays_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredKeyValueTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->AddRequiredKeyValueTag( params->handle, params->pKey, params->pValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RequestUGCDetails_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTitle_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemUpdateLanguage_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetItemUpdateLanguage( params->handle, params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetItemMetadata( params->handle, params->pchMetaData );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemVisibility_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemContent_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetItemContent( params->handle, params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetItemPreview( params->handle, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowLegacyUpload( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowLegacyUpload_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetAllowLegacyUpload( params->handle, params->bAllowLegacyUpload );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->RemoveItemKeyValueTags( params->handle, params->pchKey );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemKeyValueTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->AddItemKeyValueTag( params->handle, params->pchKey, params->pchValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewFile_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->AddItemPreviewFile( params->handle, params->pszPreviewFile, params->type );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewVideo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->AddItemPreviewVideo( params->handle, params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewFile_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->UpdateItemPreviewFile( params->handle, params->index, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewVideo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->UpdateItemPreviewVideo( params->handle, params->index, params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->RemoveItemPreview( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubmitItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemUpdateProgress_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetUserItemVote_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SetUserItemVote( params->nPublishedFileID, params->bVoteUp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetUserItemVote_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetUserItemVote( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemToFavorites_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->AddItemToFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemFromFavorites_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->RemoveItemFromFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_UnsubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetNumSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemState_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemInstallInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemDownloadInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, params->punBytesDownloaded, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_DownloadItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_BInitWorkshopForGameServer_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->BInitWorkshopForGameServer( params->unWorkshopDepotID, params->pszFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SuspendDownloads_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    iface->SuspendDownloads( params->bSuspend );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartPlaytimeTracking_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->StartPlaytimeTracking( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTracking_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->StopPlaytimeTracking( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTrackingForAllItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->StopPlaytimeTrackingForAllItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->AddDependency( params->nParentPublishedFileID, params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->RemoveDependency( params->nParentPublishedFileID, params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddAppDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->AddAppDependency( params->nPublishedFileID, params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveAppDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->RemoveAppDependency( params->nPublishedFileID, params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetAppDependencies_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->GetAppDependencies( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_DeleteItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION012 *)params->linux_side;
    params->_ret = iface->DeleteItem( params->nPublishedFileID );
}

