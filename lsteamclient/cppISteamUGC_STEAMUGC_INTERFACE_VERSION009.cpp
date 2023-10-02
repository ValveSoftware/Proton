/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->CreateQueryUGCDetailsRequest( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetQueryUGCPreviewURL( params->handle, params->index, params->pchURL, params->cchURLSize );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetQueryUGCMetadata( params->handle, params->index, params->pchMetadata, params->cchMetadatasize );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetQueryUGCChildren( params->handle, params->index, params->pvecPublishedFileID, params->cMaxEntries );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetQueryUGCStatistic( params->handle, params->index, params->eStatType, params->pStatValue );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumAdditionalPreviews( params->handle, params->index );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetQueryUGCAdditionalPreview( params->handle, params->index, params->previewIndex, params->pchURLOrVideoID, params->cchURLSize, params->pchOriginalFileName, params->cchOriginalFileNameSize, params->pPreviewType );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchURLOrVideoID, params->pchURLOrVideoID, params->cchURLSize, 1 );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumKeyValueTags( params->handle, params->index );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetQueryUGCKeyValueTag( params->handle, params->index, params->keyValueTagIndex, params->pchKey, params->cchKeySize, params->pchValue, params->cchValueSize );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetReturnOnlyIDs( params->handle, params->bReturnOnlyIDs );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetReturnKeyValueTags( params->handle, params->bReturnKeyValueTags );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetReturnMetadata( params->handle, params->bReturnMetadata );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetReturnChildren( params->handle, params->bReturnChildren );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetReturnAdditionalPreviews( params->handle, params->bReturnAdditionalPreviews );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetLanguage( params->handle, params->pchLanguage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->AddRequiredKeyValueTag( params->handle, params->pKey, params->pValue );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetItemUpdateLanguage( params->handle, params->pchLanguage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetItemMetadata( params->handle, params->pchMetaData );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    char *u_pszContentFolder = steamclient_dos_to_unix_path( params->pszContentFolder, 0 );
    params->_ret = iface->SetItemContent( params->handle, u_pszContentFolder );
    steamclient_free_path( u_pszContentFolder );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    char *u_pszPreviewFile = steamclient_dos_to_unix_path( params->pszPreviewFile, 0 );
    params->_ret = iface->SetItemPreview( params->handle, u_pszPreviewFile );
    steamclient_free_path( u_pszPreviewFile );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->RemoveItemKeyValueTags( params->handle, params->pchKey );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->AddItemKeyValueTag( params->handle, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    char *u_pszPreviewFile = steamclient_dos_to_unix_path( params->pszPreviewFile, 0 );
    params->_ret = iface->AddItemPreviewFile( params->handle, u_pszPreviewFile, params->type );
    steamclient_free_path( u_pszPreviewFile );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->AddItemPreviewVideo( params->handle, params->pszVideoID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    char *u_pszPreviewFile = steamclient_dos_to_unix_path( params->pszPreviewFile, 0 );
    params->_ret = iface->UpdateItemPreviewFile( params->handle, params->index, u_pszPreviewFile );
    steamclient_free_path( u_pszPreviewFile );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UpdateItemPreviewVideo( params->handle, params->index, params->pszVideoID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->RemoveItemPreview( params->handle, params->index );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SetUserItemVote( params->nPublishedFileID, params->bVoteUp );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetUserItemVote( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->AddItemToFavorites( params->nAppId, params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->RemoveItemFromFavorites( params->nAppId, params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->punTimeStamp );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchFolder, params->pchFolder, params->cchFolderSize, 0 );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, params->punBytesDownloaded, params->punBytesTotal );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    char *u_pszFolder = steamclient_dos_to_unix_path( params->pszFolder, 0 );
    params->_ret = iface->BInitWorkshopForGameServer( params->unWorkshopDepotID, u_pszFolder );
    steamclient_free_path( u_pszFolder );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    iface->SuspendDownloads( params->bSuspend );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->StartPlaytimeTracking( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->StopPlaytimeTracking( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION009 *)params->linux_side;
    params->_ret = iface->StopPlaytimeTrackingForAllItems(  );
    return 0;
}

