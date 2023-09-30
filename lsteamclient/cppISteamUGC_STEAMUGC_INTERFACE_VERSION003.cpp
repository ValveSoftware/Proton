/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION003.h"

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemContent( params->handle, params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetItemPreview( params->handle, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->pbLegacyItem );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetItemUpdateInfo( params->nPublishedFileID, params->pbNeedsUpdate, params->pbIsDownloading, params->punBytesDownloaded, params->punBytesTotal );
}

