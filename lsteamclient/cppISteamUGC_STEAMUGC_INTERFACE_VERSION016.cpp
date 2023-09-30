/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION016.h"

struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, const char * ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, u_SteamUGCDetails_t_128x * ) = 0;
    virtual uint32_t GetQueryUGCNumTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCTag( uint64_t, uint32_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCTagDisplayName( uint64_t, uint32_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, const char *, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddRequiredTagGroup( uint64_t, const u_SteamParamStringArray_t * ) = 0;
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
    virtual bool SetTimeCreatedDateRange( uint64_t, uint32_t, uint32_t ) = 0;
    virtual bool SetTimeUpdatedDateRange( uint64_t, uint32_t, uint32_t ) = 0;
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
    virtual bool RemoveAllItemKeyValueTags( uint64_t ) = 0;
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
    virtual bool ShowWorkshopEULA(  ) = 0;
    virtual uint64_t GetWorkshopEULAStatus(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->pchCursor );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->CreateQueryUGCDetailsRequest( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumTags( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCTag( params->handle, params->index, params->indexTag, params->pchValue, params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCTagDisplayName( params->handle, params->index, params->indexTag, params->pchValue, params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCPreviewURL( params->handle, params->index, params->pchURL, params->cchURLSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCMetadata( params->handle, params->index, params->pchMetadata, params->cchMetadatasize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCChildren( params->handle, params->index, params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCStatistic( params->handle, params->index, params->eStatType, params->pStatValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumAdditionalPreviews( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCAdditionalPreview( params->handle, params->index, params->previewIndex, params->pchURLOrVideoID, params->cchURLSize, params->pchOriginalFileName, params->cchOriginalFileNameSize, params->pPreviewType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumKeyValueTags( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCKeyValueTag( params->handle, params->index, params->keyValueTagIndex, params->pchKey, params->cchKeySize, params->pchValue, params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetQueryUGCKeyValueTag( params->handle, params->index, params->pchKey, params->pchValue, params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->AddRequiredTagGroup( params->handle, params->pTagGroups );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetReturnOnlyIDs( params->handle, params->bReturnOnlyIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetReturnKeyValueTags( params->handle, params->bReturnKeyValueTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetReturnMetadata( params->handle, params->bReturnMetadata );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetReturnChildren( params->handle, params->bReturnChildren );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetReturnAdditionalPreviews( params->handle, params->bReturnAdditionalPreviews );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetReturnPlaytimeStats( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetLanguage( params->handle, params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetTimeCreatedDateRange( params->handle, params->rtStart, params->rtEnd );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetTimeUpdatedDateRange( params->handle, params->rtStart, params->rtEnd );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->AddRequiredKeyValueTag( params->handle, params->pKey, params->pValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetItemUpdateLanguage( params->handle, params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetItemMetadata( params->handle, params->pchMetaData );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetItemContent( params->handle, params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetItemPreview( params->handle, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetAllowLegacyUpload( params->handle, params->bAllowLegacyUpload );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->RemoveAllItemKeyValueTags( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->RemoveItemKeyValueTags( params->handle, params->pchKey );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->AddItemKeyValueTag( params->handle, params->pchKey, params->pchValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->AddItemPreviewFile( params->handle, params->pszPreviewFile, params->type );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->AddItemPreviewVideo( params->handle, params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdateItemPreviewFile( params->handle, params->index, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UpdateItemPreviewVideo( params->handle, params->index, params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->RemoveItemPreview( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SetUserItemVote( params->nPublishedFileID, params->bVoteUp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetUserItemVote( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->AddItemToFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->RemoveItemFromFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, params->punBytesDownloaded, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->BInitWorkshopForGameServer( params->unWorkshopDepotID, params->pszFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    iface->SuspendDownloads( params->bSuspend );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->StartPlaytimeTracking( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->StopPlaytimeTracking( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->StopPlaytimeTrackingForAllItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->AddDependency( params->nParentPublishedFileID, params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->RemoveDependency( params->nParentPublishedFileID, params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->AddAppDependency( params->nPublishedFileID, params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->RemoveAppDependency( params->nPublishedFileID, params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetAppDependencies( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->DeleteItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->ShowWorkshopEULA(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION016 *)params->linux_side;
    params->_ret = iface->GetWorkshopEULAStatus(  );
}

