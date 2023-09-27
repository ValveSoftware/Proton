#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_157/steam_api.h"
#include "steamworks_sdk_157/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_157
#include "struct_converters.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION017.h"
void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryUserUGCRequest( (AccountID_t)params->unAccountID, (EUserUGCList)params->eListType, (EUGCMatchingUGCType)params->eMatchingUGCType, (EUserUGCListSortOrder)params->eSortOrder, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (uint32)params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryAllUGCRequest( (EUGCQuery)params->eQueryType, (EUGCMatchingUGCType)params->eMatchingeMatchingUGCTypeFileType, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (uint32)params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryAllUGCRequest( (EUGCQuery)params->eQueryType, (EUGCMatchingUGCType)params->eMatchingeMatchingUGCTypeFileType, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (const char *)params->pchCursor );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryUGCDetailsRequest( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SendQueryUGCRequest( (UGCQueryHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult_params *params )
{
    SteamUGCDetails_t lin_pDetails;
    win_to_lin_struct_SteamUGCDetails_t_157( params->pDetails, &lin_pDetails );
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCResult( (UGCQueryHandle_t)params->handle, (uint32)params->index, &lin_pDetails );
    lin_to_win_struct_SteamUGCDetails_t_157( &lin_pDetails, params->pDetails );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCNumTags( (UGCQueryHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCTag( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->indexTag, (char *)params->pchValue, (uint32)params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCTagDisplayName( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->indexTag, (char *)params->pchValue, (uint32)params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCPreviewURL( (UGCQueryHandle_t)params->handle, (uint32)params->index, (char *)params->pchURL, (uint32)params->cchURLSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCMetadata( (UGCQueryHandle_t)params->handle, (uint32)params->index, (char *)params->pchMetadata, (uint32)params->cchMetadatasize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCChildren( (UGCQueryHandle_t)params->handle, (uint32)params->index, (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCStatistic( (UGCQueryHandle_t)params->handle, (uint32)params->index, (EItemStatistic)params->eStatType, (uint64 *)params->pStatValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCNumAdditionalPreviews( (UGCQueryHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCAdditionalPreview( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->previewIndex, (char *)params->pchURLOrVideoID, (uint32)params->cchURLSize, (char *)params->pchOriginalFileName, (uint32)params->cchOriginalFileNameSize, (EItemPreviewType *)params->pPreviewType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCNumKeyValueTags( (UGCQueryHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCKeyValueTag( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->keyValueTagIndex, (char *)params->pchKey, (uint32)params->cchKeySize, (char *)params->pchValue, (uint32)params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCKeyValueTag( (UGCQueryHandle_t)params->handle, (uint32)params->index, (const char *)params->pchKey, (char *)params->pchValue, (uint32)params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCContentDescriptors( (UGCQueryHandle_t)params->handle, (uint32)params->index, (EUGCContentDescriptorID *)params->pvecDescriptors, (uint32)params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->ReleaseQueryUGCRequest( (UGCQueryHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredTag( (UGCQueryHandle_t)params->handle, (const char *)params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredTagGroup( (UGCQueryHandle_t)params->handle, (const SteamParamStringArray_t *)params->pTagGroups );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddExcludedTag( (UGCQueryHandle_t)params->handle, (const char *)params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnOnlyIDs( (UGCQueryHandle_t)params->handle, (bool)params->bReturnOnlyIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnKeyValueTags( (UGCQueryHandle_t)params->handle, (bool)params->bReturnKeyValueTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnLongDescription( (UGCQueryHandle_t)params->handle, (bool)params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnMetadata( (UGCQueryHandle_t)params->handle, (bool)params->bReturnMetadata );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnChildren( (UGCQueryHandle_t)params->handle, (bool)params->bReturnChildren );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnAdditionalPreviews( (UGCQueryHandle_t)params->handle, (bool)params->bReturnAdditionalPreviews );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnTotalOnly( (UGCQueryHandle_t)params->handle, (bool)params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnPlaytimeStats( (UGCQueryHandle_t)params->handle, (uint32)params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetLanguage( (UGCQueryHandle_t)params->handle, (const char *)params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetAllowCachedResponse( (UGCQueryHandle_t)params->handle, (uint32)params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetCloudFileNameFilter( (UGCQueryHandle_t)params->handle, (const char *)params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetMatchAnyTag( (UGCQueryHandle_t)params->handle, (bool)params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetSearchText( (UGCQueryHandle_t)params->handle, (const char *)params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetRankedByTrendDays( (UGCQueryHandle_t)params->handle, (uint32)params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetTimeCreatedDateRange( (UGCQueryHandle_t)params->handle, (RTime32)params->rtStart, (RTime32)params->rtEnd );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetTimeUpdatedDateRange( (UGCQueryHandle_t)params->handle, (RTime32)params->rtStart, (RTime32)params->rtEnd );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredKeyValueTag( (UGCQueryHandle_t)params->handle, (const char *)params->pKey, (const char *)params->pValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RequestUGCDetails( (PublishedFileId_t)params->nPublishedFileID, (uint32)params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateItem( (AppId_t)params->nConsumerAppId, (EWorkshopFileType)params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StartItemUpdate( (AppId_t)params->nConsumerAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemTitle( (UGCUpdateHandle_t)params->handle, (const char *)params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemDescription( (UGCUpdateHandle_t)params->handle, (const char *)params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemUpdateLanguage( (UGCUpdateHandle_t)params->handle, (const char *)params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemMetadata( (UGCUpdateHandle_t)params->handle, (const char *)params->pchMetaData );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemVisibility( (UGCUpdateHandle_t)params->handle, (ERemoteStoragePublishedFileVisibility)params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemTags( (UGCUpdateHandle_t)params->updateHandle, (const SteamParamStringArray_t *)params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemContent( (UGCUpdateHandle_t)params->handle, (const char *)params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemPreview( (UGCUpdateHandle_t)params->handle, (const char *)params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetAllowLegacyUpload( (UGCUpdateHandle_t)params->handle, (bool)params->bAllowLegacyUpload );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveAllItemKeyValueTags( (UGCUpdateHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemKeyValueTags( (UGCUpdateHandle_t)params->handle, (const char *)params->pchKey );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemKeyValueTag( (UGCUpdateHandle_t)params->handle, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemPreviewFile( (UGCUpdateHandle_t)params->handle, (const char *)params->pszPreviewFile, (EItemPreviewType)params->type );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemPreviewVideo( (UGCUpdateHandle_t)params->handle, (const char *)params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UpdateItemPreviewFile( (UGCUpdateHandle_t)params->handle, (uint32)params->index, (const char *)params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UpdateItemPreviewVideo( (UGCUpdateHandle_t)params->handle, (uint32)params->index, (const char *)params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemPreview( (UGCUpdateHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddContentDescriptor( (UGCUpdateHandle_t)params->handle, (EUGCContentDescriptorID)params->descid );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveContentDescriptor( (UGCUpdateHandle_t)params->handle, (EUGCContentDescriptorID)params->descid );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SubmitItemUpdate( (UGCUpdateHandle_t)params->handle, (const char *)params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemUpdateProgress( (UGCUpdateHandle_t)params->handle, (uint64 *)params->punBytesProcessed, (uint64 *)params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetUserItemVote( (PublishedFileId_t)params->nPublishedFileID, (bool)params->bVoteUp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetUserItemVote( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemToFavorites( (AppId_t)params->nAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemFromFavorites( (AppId_t)params->nAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SubscribeItem( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UnsubscribeItem( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetSubscribedItems( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemState( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemInstallInfo( (PublishedFileId_t)params->nPublishedFileID, (uint64 *)params->punSizeOnDisk, (char *)params->pchFolder, (uint32)params->cchFolderSize, (uint32 *)params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemDownloadInfo( (PublishedFileId_t)params->nPublishedFileID, (uint64 *)params->punBytesDownloaded, (uint64 *)params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->DownloadItem( (PublishedFileId_t)params->nPublishedFileID, (bool)params->bHighPriority );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->BInitWorkshopForGameServer( (DepotId_t)params->unWorkshopDepotID, (const char *)params->pszFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads_params *params )
{
    ((ISteamUGC*)params->linux_side)->SuspendDownloads( (bool)params->bSuspend );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StartPlaytimeTracking( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StopPlaytimeTracking( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StopPlaytimeTrackingForAllItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddDependency( (PublishedFileId_t)params->nParentPublishedFileID, (PublishedFileId_t)params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveDependency( (PublishedFileId_t)params->nParentPublishedFileID, (PublishedFileId_t)params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddAppDependency( (PublishedFileId_t)params->nPublishedFileID, (AppId_t)params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveAppDependency( (PublishedFileId_t)params->nPublishedFileID, (AppId_t)params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetAppDependencies( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->DeleteItem( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->ShowWorkshopEULA(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetWorkshopEULAStatus(  );
}

#ifdef __cplusplus
}
#endif
