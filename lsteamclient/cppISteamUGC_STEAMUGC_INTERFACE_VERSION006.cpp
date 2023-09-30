/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION006.h"

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->CreateQueryUGCDetailsRequest( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetQueryUGCPreviewURL( params->handle, params->index, params->pchURL, params->cchURLSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetQueryUGCMetadata( params->handle, params->index, params->pchMetadata, params->cchMetadatasize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetQueryUGCChildren( params->handle, params->index, params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetQueryUGCStatistic( params->handle, params->index, params->eStatType, params->pStatValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumAdditionalPreviews( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetQueryUGCAdditionalPreview( params->handle, params->index, params->previewIndex, params->pchURLOrVideoID, params->cchURLSize, params->pbIsImage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetReturnMetadata( params->handle, params->bReturnMetadata );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetReturnChildren( params->handle, params->bReturnChildren );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetReturnAdditionalPreviews( params->handle, params->bReturnAdditionalPreviews );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetLanguage( params->handle, params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetItemUpdateLanguage( params->handle, params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetItemMetadata( params->handle, params->pchMetaData );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetItemContent( params->handle, params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetItemPreview( params->handle, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SetUserItemVote( params->nPublishedFileID, params->bVoteUp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetUserItemVote( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->AddItemToFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->RemoveItemFromFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, params->punBytesDownloaded, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
}

