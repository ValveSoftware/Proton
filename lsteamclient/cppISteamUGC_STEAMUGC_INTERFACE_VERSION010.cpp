#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_142/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_142
#include "struct_converters.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION010.h"
void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryUserUGCRequest( (AccountID_t)params->unAccountID, (EUserUGCList)params->eListType, (EUGCMatchingUGCType)params->eMatchingUGCType, (EUserUGCListSortOrder)params->eSortOrder, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (uint32)params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryAllUGCRequest( (EUGCQuery)params->eQueryType, (EUGCMatchingUGCType)params->eMatchingeMatchingUGCTypeFileType, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (uint32)params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryUGCDetailsRequest( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SendQueryUGCRequest( (UGCQueryHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult_params *params )
{
    SteamUGCDetails_t lin_pDetails;
    win_to_lin_struct_SteamUGCDetails_t_142( params->pDetails, &lin_pDetails );
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCResult( (UGCQueryHandle_t)params->handle, (uint32)params->index, &lin_pDetails );
    lin_to_win_struct_SteamUGCDetails_t_142( &lin_pDetails, params->pDetails );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCPreviewURL( (UGCQueryHandle_t)params->handle, (uint32)params->index, (char *)params->pchURL, (uint32)params->cchURLSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCMetadata( (UGCQueryHandle_t)params->handle, (uint32)params->index, (char *)params->pchMetadata, (uint32)params->cchMetadatasize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCChildren( (UGCQueryHandle_t)params->handle, (uint32)params->index, (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCStatistic( (UGCQueryHandle_t)params->handle, (uint32)params->index, (EItemStatistic)params->eStatType, (uint64 *)params->pStatValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCNumAdditionalPreviews( (UGCQueryHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCAdditionalPreview( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->previewIndex, (char *)params->pchURLOrVideoID, (uint32)params->cchURLSize, (char *)params->pchOriginalFileName, (uint32)params->cchOriginalFileNameSize, (EItemPreviewType *)params->pPreviewType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCNumKeyValueTags( (UGCQueryHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCKeyValueTag( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->keyValueTagIndex, (char *)params->pchKey, (uint32)params->cchKeySize, (char *)params->pchValue, (uint32)params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->ReleaseQueryUGCRequest( (UGCQueryHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredTag( (UGCQueryHandle_t)params->handle, (const char *)params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddExcludedTag( (UGCQueryHandle_t)params->handle, (const char *)params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnOnlyIDs( (UGCQueryHandle_t)params->handle, (bool)params->bReturnOnlyIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnKeyValueTags( (UGCQueryHandle_t)params->handle, (bool)params->bReturnKeyValueTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnLongDescription( (UGCQueryHandle_t)params->handle, (bool)params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnMetadata( (UGCQueryHandle_t)params->handle, (bool)params->bReturnMetadata );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnChildren( (UGCQueryHandle_t)params->handle, (bool)params->bReturnChildren );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnAdditionalPreviews( (UGCQueryHandle_t)params->handle, (bool)params->bReturnAdditionalPreviews );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnTotalOnly( (UGCQueryHandle_t)params->handle, (bool)params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnPlaytimeStats( (UGCQueryHandle_t)params->handle, (uint32)params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetLanguage( (UGCQueryHandle_t)params->handle, (const char *)params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetAllowCachedResponse( (UGCQueryHandle_t)params->handle, (uint32)params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetCloudFileNameFilter( (UGCQueryHandle_t)params->handle, (const char *)params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetMatchAnyTag( (UGCQueryHandle_t)params->handle, (bool)params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetSearchText( (UGCQueryHandle_t)params->handle, (const char *)params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetRankedByTrendDays( (UGCQueryHandle_t)params->handle, (uint32)params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredKeyValueTag( (UGCQueryHandle_t)params->handle, (const char *)params->pKey, (const char *)params->pValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RequestUGCDetails( (PublishedFileId_t)params->nPublishedFileID, (uint32)params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateItem( (AppId_t)params->nConsumerAppId, (EWorkshopFileType)params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StartItemUpdate( (AppId_t)params->nConsumerAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemTitle( (UGCUpdateHandle_t)params->handle, (const char *)params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemDescription( (UGCUpdateHandle_t)params->handle, (const char *)params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemUpdateLanguage( (UGCUpdateHandle_t)params->handle, (const char *)params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemMetadata( (UGCUpdateHandle_t)params->handle, (const char *)params->pchMetaData );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemVisibility( (UGCUpdateHandle_t)params->handle, (ERemoteStoragePublishedFileVisibility)params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemTags( (UGCUpdateHandle_t)params->updateHandle, (const SteamParamStringArray_t *)params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemContent( (UGCUpdateHandle_t)params->handle, (const char *)params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemPreview( (UGCUpdateHandle_t)params->handle, (const char *)params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemKeyValueTags( (UGCUpdateHandle_t)params->handle, (const char *)params->pchKey );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemKeyValueTag( (UGCUpdateHandle_t)params->handle, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemPreviewFile( (UGCUpdateHandle_t)params->handle, (const char *)params->pszPreviewFile, (EItemPreviewType)params->type );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemPreviewVideo( (UGCUpdateHandle_t)params->handle, (const char *)params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UpdateItemPreviewFile( (UGCUpdateHandle_t)params->handle, (uint32)params->index, (const char *)params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UpdateItemPreviewVideo( (UGCUpdateHandle_t)params->handle, (uint32)params->index, (const char *)params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemPreview( (UGCUpdateHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SubmitItemUpdate( (UGCUpdateHandle_t)params->handle, (const char *)params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemUpdateProgress( (UGCUpdateHandle_t)params->handle, (uint64 *)params->punBytesProcessed, (uint64 *)params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetUserItemVote( (PublishedFileId_t)params->nPublishedFileID, (bool)params->bVoteUp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetUserItemVote( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemToFavorites( (AppId_t)params->nAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemFromFavorites( (AppId_t)params->nAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SubscribeItem( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UnsubscribeItem( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetSubscribedItems( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemState( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemInstallInfo( (PublishedFileId_t)params->nPublishedFileID, (uint64 *)params->punSizeOnDisk, (char *)params->pchFolder, (uint32)params->cchFolderSize, (uint32 *)params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemDownloadInfo( (PublishedFileId_t)params->nPublishedFileID, (uint64 *)params->punBytesDownloaded, (uint64 *)params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->DownloadItem( (PublishedFileId_t)params->nPublishedFileID, (bool)params->bHighPriority );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->BInitWorkshopForGameServer( (DepotId_t)params->unWorkshopDepotID, (const char *)params->pszFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads_params *params )
{
    ((ISteamUGC*)params->linux_side)->SuspendDownloads( (bool)params->bSuspend );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StartPlaytimeTracking( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StopPlaytimeTracking( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StopPlaytimeTrackingForAllItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddDependency( (PublishedFileId_t)params->nParentPublishedFileID, (PublishedFileId_t)params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveDependency( (PublishedFileId_t)params->nParentPublishedFileID, (PublishedFileId_t)params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddAppDependency( (PublishedFileId_t)params->nPublishedFileID, (AppId_t)params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveAppDependency( (PublishedFileId_t)params->nPublishedFileID, (AppId_t)params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetAppDependencies( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->DeleteItem( (PublishedFileId_t)params->nPublishedFileID );
}

#ifdef __cplusplus
}
#endif
