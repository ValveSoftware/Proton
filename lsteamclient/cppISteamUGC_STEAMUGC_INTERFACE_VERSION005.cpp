/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION005.h"

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->CreateQueryUGCDetailsRequest( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetQueryUGCPreviewURL( params->handle, params->index, params->pchURL, params->cchURLSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetQueryUGCMetadata( params->handle, params->index, params->pchMetadata, params->cchMetadatasize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetQueryUGCChildren( params->handle, params->index, params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetQueryUGCStatistic( params->handle, params->index, params->eStatType, params->pStatValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumAdditionalPreviews( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetQueryUGCAdditionalPreview( params->handle, params->index, params->previewIndex, params->pchURLOrVideoID, params->cchURLSize, params->pbIsImage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetReturnMetadata( params->handle, params->bReturnMetadata );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetReturnChildren( params->handle, params->bReturnChildren );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetReturnAdditionalPreviews( params->handle, params->bReturnAdditionalPreviews );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetItemMetadata( params->handle, params->pchMetaData );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetItemContent( params->handle, params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SetItemPreview( params->handle, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->AddItemToFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->RemoveItemFromFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, params->punBytesDownloaded, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION005 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
}

