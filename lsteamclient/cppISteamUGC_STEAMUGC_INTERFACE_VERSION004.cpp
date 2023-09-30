/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION004.h"

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemContent( params->handle, params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SetItemPreview( params->handle, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, params->punBytesDownloaded, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION004 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
}

