/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    char *u_pszContentFolder = steamclient_dos_to_unix_path( params->pszContentFolder, 0 );
    params->_ret = iface->SetItemContent( params->handle, u_pszContentFolder );
    steamclient_free_path( u_pszContentFolder );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    char *u_pszPreviewFile = steamclient_dos_to_unix_path( params->pszPreviewFile, 0 );
    params->_ret = iface->SetItemPreview( params->handle, u_pszPreviewFile );
    steamclient_free_path( u_pszPreviewFile );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchFolder, params->pchFolder, params->cchFolderSize, 0 );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetItemUpdateInfo( params->nPublishedFileID, params->pbNeedsUpdate, params->pbIsDownloading, params->punBytesDownloaded, params->punBytesTotal );
    return 0;
}

