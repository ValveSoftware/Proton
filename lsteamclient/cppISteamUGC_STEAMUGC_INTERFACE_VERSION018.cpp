#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION018.h"
void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryUserUGCRequest( (AccountID_t)params->unAccountID, (EUserUGCList)params->eListType, (EUGCMatchingUGCType)params->eMatchingUGCType, (EUserUGCListSortOrder)params->eSortOrder, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (uint32)params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryAllUGCRequest( (EUGCQuery)params->eQueryType, (EUGCMatchingUGCType)params->eMatchingeMatchingUGCTypeFileType, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (uint32)params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryAllUGCRequest( (EUGCQuery)params->eQueryType, (EUGCMatchingUGCType)params->eMatchingeMatchingUGCTypeFileType, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (const char *)params->pchCursor );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryUGCDetailsRequest( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SendQueryUGCRequest( (UGCQueryHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult_params *params )
{
    SteamUGCDetails_t lin_pDetails;
    win_to_lin_struct_SteamUGCDetails_t_158( params->pDetails, &lin_pDetails );
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCResult( (UGCQueryHandle_t)params->handle, (uint32)params->index, &lin_pDetails );
    lin_to_win_struct_SteamUGCDetails_t_158( &lin_pDetails, params->pDetails );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCNumTags( (UGCQueryHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCTag( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->indexTag, (char *)params->pchValue, (uint32)params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCTagDisplayName( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->indexTag, (char *)params->pchValue, (uint32)params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCPreviewURL( (UGCQueryHandle_t)params->handle, (uint32)params->index, (char *)params->pchURL, (uint32)params->cchURLSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCMetadata( (UGCQueryHandle_t)params->handle, (uint32)params->index, (char *)params->pchMetadata, (uint32)params->cchMetadatasize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCChildren( (UGCQueryHandle_t)params->handle, (uint32)params->index, (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCStatistic( (UGCQueryHandle_t)params->handle, (uint32)params->index, (EItemStatistic)params->eStatType, (uint64 *)params->pStatValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCNumAdditionalPreviews( (UGCQueryHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCAdditionalPreview( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->previewIndex, (char *)params->pchURLOrVideoID, (uint32)params->cchURLSize, (char *)params->pchOriginalFileName, (uint32)params->cchOriginalFileNameSize, (EItemPreviewType *)params->pPreviewType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCNumKeyValueTags( (UGCQueryHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCKeyValueTag( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->keyValueTagIndex, (char *)params->pchKey, (uint32)params->cchKeySize, (char *)params->pchValue, (uint32)params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCKeyValueTag( (UGCQueryHandle_t)params->handle, (uint32)params->index, (const char *)params->pchKey, (char *)params->pchValue, (uint32)params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCContentDescriptors( (UGCQueryHandle_t)params->handle, (uint32)params->index, (EUGCContentDescriptorID *)params->pvecDescriptors, (uint32)params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->ReleaseQueryUGCRequest( (UGCQueryHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredTag( (UGCQueryHandle_t)params->handle, (const char *)params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredTagGroup( (UGCQueryHandle_t)params->handle, (const SteamParamStringArray_t *)params->pTagGroups );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddExcludedTag( (UGCQueryHandle_t)params->handle, (const char *)params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnOnlyIDs( (UGCQueryHandle_t)params->handle, (bool)params->bReturnOnlyIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnKeyValueTags( (UGCQueryHandle_t)params->handle, (bool)params->bReturnKeyValueTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnLongDescription( (UGCQueryHandle_t)params->handle, (bool)params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnMetadata( (UGCQueryHandle_t)params->handle, (bool)params->bReturnMetadata );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnChildren( (UGCQueryHandle_t)params->handle, (bool)params->bReturnChildren );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnAdditionalPreviews( (UGCQueryHandle_t)params->handle, (bool)params->bReturnAdditionalPreviews );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnTotalOnly( (UGCQueryHandle_t)params->handle, (bool)params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnPlaytimeStats( (UGCQueryHandle_t)params->handle, (uint32)params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetLanguage( (UGCQueryHandle_t)params->handle, (const char *)params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetAllowCachedResponse( (UGCQueryHandle_t)params->handle, (uint32)params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetCloudFileNameFilter( (UGCQueryHandle_t)params->handle, (const char *)params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetMatchAnyTag( (UGCQueryHandle_t)params->handle, (bool)params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetSearchText( (UGCQueryHandle_t)params->handle, (const char *)params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetRankedByTrendDays( (UGCQueryHandle_t)params->handle, (uint32)params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetTimeCreatedDateRange( (UGCQueryHandle_t)params->handle, (RTime32)params->rtStart, (RTime32)params->rtEnd );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetTimeUpdatedDateRange( (UGCQueryHandle_t)params->handle, (RTime32)params->rtStart, (RTime32)params->rtEnd );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredKeyValueTag( (UGCQueryHandle_t)params->handle, (const char *)params->pKey, (const char *)params->pValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RequestUGCDetails( (PublishedFileId_t)params->nPublishedFileID, (uint32)params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateItem( (AppId_t)params->nConsumerAppId, (EWorkshopFileType)params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StartItemUpdate( (AppId_t)params->nConsumerAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemTitle( (UGCUpdateHandle_t)params->handle, (const char *)params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemDescription( (UGCUpdateHandle_t)params->handle, (const char *)params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemUpdateLanguage( (UGCUpdateHandle_t)params->handle, (const char *)params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemMetadata( (UGCUpdateHandle_t)params->handle, (const char *)params->pchMetaData );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemVisibility( (UGCUpdateHandle_t)params->handle, (ERemoteStoragePublishedFileVisibility)params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemTags( (UGCUpdateHandle_t)params->updateHandle, (const SteamParamStringArray_t *)params->pTags, (bool)params->bAllowAdminTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemContent( (UGCUpdateHandle_t)params->handle, (const char *)params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemPreview( (UGCUpdateHandle_t)params->handle, (const char *)params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetAllowLegacyUpload( (UGCUpdateHandle_t)params->handle, (bool)params->bAllowLegacyUpload );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveAllItemKeyValueTags( (UGCUpdateHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemKeyValueTags( (UGCUpdateHandle_t)params->handle, (const char *)params->pchKey );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemKeyValueTag( (UGCUpdateHandle_t)params->handle, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemPreviewFile( (UGCUpdateHandle_t)params->handle, (const char *)params->pszPreviewFile, (EItemPreviewType)params->type );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemPreviewVideo( (UGCUpdateHandle_t)params->handle, (const char *)params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UpdateItemPreviewFile( (UGCUpdateHandle_t)params->handle, (uint32)params->index, (const char *)params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UpdateItemPreviewVideo( (UGCUpdateHandle_t)params->handle, (uint32)params->index, (const char *)params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemPreview( (UGCUpdateHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddContentDescriptor( (UGCUpdateHandle_t)params->handle, (EUGCContentDescriptorID)params->descid );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveContentDescriptor( (UGCUpdateHandle_t)params->handle, (EUGCContentDescriptorID)params->descid );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SubmitItemUpdate( (UGCUpdateHandle_t)params->handle, (const char *)params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemUpdateProgress( (UGCUpdateHandle_t)params->handle, (uint64 *)params->punBytesProcessed, (uint64 *)params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetUserItemVote( (PublishedFileId_t)params->nPublishedFileID, (bool)params->bVoteUp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetUserItemVote( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemToFavorites( (AppId_t)params->nAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemFromFavorites( (AppId_t)params->nAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SubscribeItem( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UnsubscribeItem( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetSubscribedItems( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemState( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemInstallInfo( (PublishedFileId_t)params->nPublishedFileID, (uint64 *)params->punSizeOnDisk, (char *)params->pchFolder, (uint32)params->cchFolderSize, (uint32 *)params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemDownloadInfo( (PublishedFileId_t)params->nPublishedFileID, (uint64 *)params->punBytesDownloaded, (uint64 *)params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->DownloadItem( (PublishedFileId_t)params->nPublishedFileID, (bool)params->bHighPriority );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->BInitWorkshopForGameServer( (DepotId_t)params->unWorkshopDepotID, (const char *)params->pszFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads_params *params )
{
    ((ISteamUGC*)params->linux_side)->SuspendDownloads( (bool)params->bSuspend );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StartPlaytimeTracking( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StopPlaytimeTracking( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StopPlaytimeTrackingForAllItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddDependency( (PublishedFileId_t)params->nParentPublishedFileID, (PublishedFileId_t)params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveDependency( (PublishedFileId_t)params->nParentPublishedFileID, (PublishedFileId_t)params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddAppDependency( (PublishedFileId_t)params->nPublishedFileID, (AppId_t)params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveAppDependency( (PublishedFileId_t)params->nPublishedFileID, (AppId_t)params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetAppDependencies( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->DeleteItem( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->ShowWorkshopEULA(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetWorkshopEULAStatus(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetUserContentDescriptorPreferences( (EUGCContentDescriptorID *)params->pvecDescriptors, (uint32)params->cMaxEntries );
}

#ifdef __cplusplus
}
#endif
