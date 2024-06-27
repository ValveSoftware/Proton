/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUserUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUserUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUserUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_2( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_2_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_2_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->pchCursor );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUGCDetailsRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUGCDetailsRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUGCDetailsRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->CreateQueryUGCDetailsRequest( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SendQueryUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SendQueryUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SendQueryUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCResult( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCResult_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCResult_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    u_SteamUGCDetails_t_160 u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumTags( params->handle, params->index );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCTag( params->handle, params->index, params->indexTag, params->pchValue, params->cchValueSize );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTagDisplayName( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTagDisplayName_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTagDisplayName_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCTagDisplayName( params->handle, params->index, params->indexTag, params->pchValue, params->cchValueSize );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCPreviewURL( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCPreviewURL_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCPreviewURL_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCPreviewURL( params->handle, params->index, params->pchURL, params->cchURLSize );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCMetadata( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCMetadata_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCMetadata_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCMetadata( params->handle, params->index, params->pchMetadata, params->cchMetadatasize );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCChildren( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCChildren_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCChildren_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCChildren( params->handle, params->index, params->pvecPublishedFileID, params->cMaxEntries );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCStatistic( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCStatistic_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCStatistic_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCStatistic( params->handle, params->index, params->eStatType, params->pStatValue );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumAdditionalPreviews( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumAdditionalPreviews_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumAdditionalPreviews_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumAdditionalPreviews( params->handle, params->index );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCAdditionalPreview( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCAdditionalPreview_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCAdditionalPreview_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCAdditionalPreview( params->handle, params->index, params->previewIndex, params->pchURLOrVideoID, params->cchURLSize, params->pchOriginalFileName, params->cchOriginalFileNameSize, params->pPreviewType );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchURLOrVideoID, params->pchURLOrVideoID, params->cchURLSize, 1 );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumKeyValueTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumKeyValueTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumKeyValueTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumKeyValueTags( params->handle, params->index );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCKeyValueTag( params->handle, params->index, params->keyValueTagIndex, params->pchKey, params->cchKeySize, params->pchValue, params->cchValueSize );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_2( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_2_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_2_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCKeyValueTag( params->handle, params->index, params->pchKey, params->pchValue, params->cchValueSize );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSupportedGameVersions( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSupportedGameVersions_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSupportedGameVersions_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetNumSupportedGameVersions( params->handle, params->index );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSupportedGameVersionData( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSupportedGameVersionData_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSupportedGameVersionData_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetSupportedGameVersionData( params->handle, params->index, params->versionIndex, params->pchGameBranchMin, params->pchGameBranchMax, params->cchGameBranchSize );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCContentDescriptors( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCContentDescriptors_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCContentDescriptors_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetQueryUGCContentDescriptors( params->handle, params->index, params->pvecDescriptors, params->cMaxEntries );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_ReleaseQueryUGCRequest( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_ReleaseQueryUGCRequest_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_ReleaseQueryUGCRequest_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTagGroup( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTagGroup_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTagGroup_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->AddRequiredTagGroup( params->handle, params->pTagGroups );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddExcludedTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddExcludedTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddExcludedTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnOnlyIDs( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnOnlyIDs_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnOnlyIDs_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetReturnOnlyIDs( params->handle, params->bReturnOnlyIDs );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnKeyValueTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnKeyValueTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnKeyValueTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetReturnKeyValueTags( params->handle, params->bReturnKeyValueTags );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnLongDescription( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnLongDescription_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnLongDescription_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnMetadata( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnMetadata_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnMetadata_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetReturnMetadata( params->handle, params->bReturnMetadata );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnChildren( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnChildren_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnChildren_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetReturnChildren( params->handle, params->bReturnChildren );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnAdditionalPreviews( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnAdditionalPreviews_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnAdditionalPreviews_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetReturnAdditionalPreviews( params->handle, params->bReturnAdditionalPreviews );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnTotalOnly( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnTotalOnly_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnTotalOnly_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnPlaytimeStats( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnPlaytimeStats_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnPlaytimeStats_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetReturnPlaytimeStats( params->handle, params->unDays );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetLanguage( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetLanguage_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetLanguage_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetLanguage( params->handle, params->pchLanguage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowCachedResponse( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowCachedResponse_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowCachedResponse_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAdminQuery( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAdminQuery_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAdminQuery_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetAdminQuery( params->handle, params->bAdminQuery );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetCloudFileNameFilter( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetCloudFileNameFilter_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetCloudFileNameFilter_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetMatchAnyTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetMatchAnyTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetMatchAnyTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetSearchText( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetSearchText_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetSearchText_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRankedByTrendDays( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRankedByTrendDays_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRankedByTrendDays_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeCreatedDateRange( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeCreatedDateRange_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeCreatedDateRange_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetTimeCreatedDateRange( params->handle, params->rtStart, params->rtEnd );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeUpdatedDateRange( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeUpdatedDateRange_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeUpdatedDateRange_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetTimeUpdatedDateRange( params->handle, params->rtStart, params->rtEnd );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredKeyValueTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredKeyValueTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredKeyValueTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->AddRequiredKeyValueTag( params->handle, params->pKey, params->pValue );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RequestUGCDetails( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RequestUGCDetails_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RequestUGCDetails_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartItemUpdate( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartItemUpdate_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartItemUpdate_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTitle( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTitle_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTitle_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemDescription( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemDescription_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemDescription_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemUpdateLanguage( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemUpdateLanguage_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemUpdateLanguage_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetItemUpdateLanguage( params->handle, params->pchLanguage );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemMetadata( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemMetadata_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemMetadata_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetItemMetadata( params->handle, params->pchMetaData );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemVisibility( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemVisibility_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemVisibility_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags, params->bAllowAdminTags );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemContent( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemContent_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemContent_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    char *u_pszContentFolder = steamclient_dos_to_unix_path( params->pszContentFolder, 0 );
    params->_ret = iface->SetItemContent( params->handle, u_pszContentFolder );
    steamclient_free_path( u_pszContentFolder );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemPreview( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemPreview_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemPreview_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    char *u_pszPreviewFile = steamclient_dos_to_unix_path( params->pszPreviewFile, 0 );
    params->_ret = iface->SetItemPreview( params->handle, u_pszPreviewFile );
    steamclient_free_path( u_pszPreviewFile );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowLegacyUpload( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowLegacyUpload_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowLegacyUpload_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetAllowLegacyUpload( params->handle, params->bAllowLegacyUpload );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAllItemKeyValueTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAllItemKeyValueTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAllItemKeyValueTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->RemoveAllItemKeyValueTags( params->handle );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemKeyValueTags( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemKeyValueTags_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemKeyValueTags_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->RemoveItemKeyValueTags( params->handle, params->pchKey );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemKeyValueTag( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemKeyValueTag_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemKeyValueTag_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->AddItemKeyValueTag( params->handle, params->pchKey, params->pchValue );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewFile( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewFile_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewFile_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    char *u_pszPreviewFile = steamclient_dos_to_unix_path( params->pszPreviewFile, 0 );
    params->_ret = iface->AddItemPreviewFile( params->handle, u_pszPreviewFile, params->type );
    steamclient_free_path( u_pszPreviewFile );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewVideo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewVideo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewVideo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->AddItemPreviewVideo( params->handle, params->pszVideoID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewFile( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewFile_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewFile_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    char *u_pszPreviewFile = steamclient_dos_to_unix_path( params->pszPreviewFile, 0 );
    params->_ret = iface->UpdateItemPreviewFile( params->handle, params->index, u_pszPreviewFile );
    steamclient_free_path( u_pszPreviewFile );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewVideo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewVideo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewVideo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->UpdateItemPreviewVideo( params->handle, params->index, params->pszVideoID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemPreview( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemPreview_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemPreview_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->RemoveItemPreview( params->handle, params->index );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddContentDescriptor( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddContentDescriptor_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddContentDescriptor_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->AddContentDescriptor( params->handle, params->descid );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveContentDescriptor( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveContentDescriptor_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveContentDescriptor_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->RemoveContentDescriptor( params->handle, params->descid );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRequiredGameVersions( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRequiredGameVersions_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRequiredGameVersions_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetRequiredGameVersions( params->handle, params->pszGameBranchMin, params->pszGameBranchMax );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubmitItemUpdate( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubmitItemUpdate_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubmitItemUpdate_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemUpdateProgress( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemUpdateProgress_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemUpdateProgress_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetUserItemVote( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetUserItemVote_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetUserItemVote_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SetUserItemVote( params->nPublishedFileID, params->bVoteUp );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserItemVote( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserItemVote_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserItemVote_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetUserItemVote( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemToFavorites( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemToFavorites_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemToFavorites_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->AddItemToFavorites( params->nAppId, params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemFromFavorites( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemFromFavorites_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemFromFavorites_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->RemoveItemFromFavorites( params->nAppId, params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubscribeItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubscribeItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubscribeItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UnsubscribeItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UnsubscribeItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UnsubscribeItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSubscribedItems( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSubscribedItems_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSubscribedItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSubscribedItems( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSubscribedItems_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSubscribedItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemState( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemState_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemState_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemInstallInfo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemInstallInfo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemInstallInfo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->punTimeStamp );
    steamclient_unix_path_to_dos_path( params->_ret, params->pchFolder, params->pchFolder, params->cchFolderSize, 0 );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemDownloadInfo( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemDownloadInfo_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemDownloadInfo_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, params->punBytesDownloaded, params->punBytesTotal );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_DownloadItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_DownloadItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_DownloadItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_BInitWorkshopForGameServer( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_BInitWorkshopForGameServer_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_BInitWorkshopForGameServer_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    char *u_pszFolder = steamclient_dos_to_unix_path( params->pszFolder, 0 );
    params->_ret = iface->BInitWorkshopForGameServer( params->unWorkshopDepotID, u_pszFolder );
    steamclient_free_path( u_pszFolder );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SuspendDownloads( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SuspendDownloads_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SuspendDownloads_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    iface->SuspendDownloads( params->bSuspend );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartPlaytimeTracking( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartPlaytimeTracking_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartPlaytimeTracking_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->StartPlaytimeTracking( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTracking( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTracking_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTracking_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->StopPlaytimeTracking( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTrackingForAllItems( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTrackingForAllItems_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTrackingForAllItems_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->StopPlaytimeTrackingForAllItems(  );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddDependency( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddDependency_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddDependency_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->AddDependency( params->nParentPublishedFileID, params->nChildPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveDependency( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveDependency_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveDependency_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->RemoveDependency( params->nParentPublishedFileID, params->nChildPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddAppDependency( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddAppDependency_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddAppDependency_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->AddAppDependency( params->nPublishedFileID, params->nAppID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAppDependency( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAppDependency_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAppDependency_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->RemoveAppDependency( params->nPublishedFileID, params->nAppID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetAppDependencies( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetAppDependencies_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetAppDependencies_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetAppDependencies( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_DeleteItem( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_DeleteItem_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_DeleteItem_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->DeleteItem( params->nPublishedFileID );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_ShowWorkshopEULA( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_ShowWorkshopEULA_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_ShowWorkshopEULA_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->ShowWorkshopEULA(  );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetWorkshopEULAStatus( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetWorkshopEULAStatus_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetWorkshopEULAStatus_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetWorkshopEULAStatus(  );
    return 0;
}

NTSTATUS ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserContentDescriptorPreferences( void *args )
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserContentDescriptorPreferences_params *params = (struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserContentDescriptorPreferences_params *)args;
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION020 *)params->linux_side;
    params->_ret = iface->GetUserContentDescriptorPreferences( params->pvecDescriptors, params->cMaxEntries );
    return 0;
}

