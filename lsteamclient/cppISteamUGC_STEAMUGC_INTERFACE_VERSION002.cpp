/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION002.h"

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetItemContent( params->handle, params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetItemPreview( params->handle, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetItemUpdateInfo( params->nPublishedFileID, params->pbNeedsUpdate, params->pbIsDownloading, params->punBytesDownloaded, params->punBytesTotal );
}

