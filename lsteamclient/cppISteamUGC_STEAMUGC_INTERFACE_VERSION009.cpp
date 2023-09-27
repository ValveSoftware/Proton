#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_139/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_139
#include "struct_converters.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION009.h"
void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryUserUGCRequest( (AccountID_t)params->unAccountID, (EUserUGCList)params->eListType, (EUGCMatchingUGCType)params->eMatchingUGCType, (EUserUGCListSortOrder)params->eSortOrder, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (uint32)params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryAllUGCRequest( (EUGCQuery)params->eQueryType, (EUGCMatchingUGCType)params->eMatchingeMatchingUGCTypeFileType, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (uint32)params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryUGCDetailsRequest( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SendQueryUGCRequest( (UGCQueryHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult_params *params )
{
    SteamUGCDetails_t lin_pDetails;
    win_to_lin_struct_SteamUGCDetails_t_139( params->pDetails, &lin_pDetails );
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCResult( (UGCQueryHandle_t)params->handle, (uint32)params->index, &lin_pDetails );
    lin_to_win_struct_SteamUGCDetails_t_139( &lin_pDetails, params->pDetails );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCPreviewURL( (UGCQueryHandle_t)params->handle, (uint32)params->index, (char *)params->pchURL, (uint32)params->cchURLSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCMetadata( (UGCQueryHandle_t)params->handle, (uint32)params->index, (char *)params->pchMetadata, (uint32)params->cchMetadatasize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCChildren( (UGCQueryHandle_t)params->handle, (uint32)params->index, (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCStatistic( (UGCQueryHandle_t)params->handle, (uint32)params->index, (EItemStatistic)params->eStatType, (uint64 *)params->pStatValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCNumAdditionalPreviews( (UGCQueryHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCAdditionalPreview( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->previewIndex, (char *)params->pchURLOrVideoID, (uint32)params->cchURLSize, (char *)params->pchOriginalFileName, (uint32)params->cchOriginalFileNameSize, (EItemPreviewType *)params->pPreviewType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCNumKeyValueTags( (UGCQueryHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCKeyValueTag( (UGCQueryHandle_t)params->handle, (uint32)params->index, (uint32)params->keyValueTagIndex, (char *)params->pchKey, (uint32)params->cchKeySize, (char *)params->pchValue, (uint32)params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->ReleaseQueryUGCRequest( (UGCQueryHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredTag( (UGCQueryHandle_t)params->handle, (const char *)params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddExcludedTag( (UGCQueryHandle_t)params->handle, (const char *)params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnOnlyIDs( (UGCQueryHandle_t)params->handle, (bool)params->bReturnOnlyIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnKeyValueTags( (UGCQueryHandle_t)params->handle, (bool)params->bReturnKeyValueTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnLongDescription( (UGCQueryHandle_t)params->handle, (bool)params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnMetadata( (UGCQueryHandle_t)params->handle, (bool)params->bReturnMetadata );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnChildren( (UGCQueryHandle_t)params->handle, (bool)params->bReturnChildren );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnAdditionalPreviews( (UGCQueryHandle_t)params->handle, (bool)params->bReturnAdditionalPreviews );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnTotalOnly( (UGCQueryHandle_t)params->handle, (bool)params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetLanguage( (UGCQueryHandle_t)params->handle, (const char *)params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetAllowCachedResponse( (UGCQueryHandle_t)params->handle, (uint32)params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetCloudFileNameFilter( (UGCQueryHandle_t)params->handle, (const char *)params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetMatchAnyTag( (UGCQueryHandle_t)params->handle, (bool)params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetSearchText( (UGCQueryHandle_t)params->handle, (const char *)params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetRankedByTrendDays( (UGCQueryHandle_t)params->handle, (uint32)params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredKeyValueTag( (UGCQueryHandle_t)params->handle, (const char *)params->pKey, (const char *)params->pValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RequestUGCDetails( (PublishedFileId_t)params->nPublishedFileID, (uint32)params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateItem( (AppId_t)params->nConsumerAppId, (EWorkshopFileType)params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StartItemUpdate( (AppId_t)params->nConsumerAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemTitle( (UGCUpdateHandle_t)params->handle, (const char *)params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemDescription( (UGCUpdateHandle_t)params->handle, (const char *)params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemUpdateLanguage( (UGCUpdateHandle_t)params->handle, (const char *)params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemMetadata( (UGCUpdateHandle_t)params->handle, (const char *)params->pchMetaData );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemVisibility( (UGCUpdateHandle_t)params->handle, (ERemoteStoragePublishedFileVisibility)params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemTags( (UGCUpdateHandle_t)params->updateHandle, (const SteamParamStringArray_t *)params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemContent( (UGCUpdateHandle_t)params->handle, (const char *)params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetItemPreview( (UGCUpdateHandle_t)params->handle, (const char *)params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemKeyValueTags( (UGCUpdateHandle_t)params->handle, (const char *)params->pchKey );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemKeyValueTag( (UGCUpdateHandle_t)params->handle, (const char *)params->pchKey, (const char *)params->pchValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemPreviewFile( (UGCUpdateHandle_t)params->handle, (const char *)params->pszPreviewFile, (EItemPreviewType)params->type );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemPreviewVideo( (UGCUpdateHandle_t)params->handle, (const char *)params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UpdateItemPreviewFile( (UGCUpdateHandle_t)params->handle, (uint32)params->index, (const char *)params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UpdateItemPreviewVideo( (UGCUpdateHandle_t)params->handle, (uint32)params->index, (const char *)params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemPreview( (UGCUpdateHandle_t)params->handle, (uint32)params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SubmitItemUpdate( (UGCUpdateHandle_t)params->handle, (const char *)params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemUpdateProgress( (UGCUpdateHandle_t)params->handle, (uint64 *)params->punBytesProcessed, (uint64 *)params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetUserItemVote( (PublishedFileId_t)params->nPublishedFileID, (bool)params->bVoteUp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetUserItemVote( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddItemToFavorites( (AppId_t)params->nAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RemoveItemFromFavorites( (AppId_t)params->nAppId, (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SubscribeItem( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->UnsubscribeItem( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetSubscribedItems( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemState( (PublishedFileId_t)params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemInstallInfo( (PublishedFileId_t)params->nPublishedFileID, (uint64 *)params->punSizeOnDisk, (char *)params->pchFolder, (uint32)params->cchFolderSize, (uint32 *)params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->GetItemDownloadInfo( (PublishedFileId_t)params->nPublishedFileID, (uint64 *)params->punBytesDownloaded, (uint64 *)params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->DownloadItem( (PublishedFileId_t)params->nPublishedFileID, (bool)params->bHighPriority );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->BInitWorkshopForGameServer( (DepotId_t)params->unWorkshopDepotID, (const char *)params->pszFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads_params *params )
{
    ((ISteamUGC*)params->linux_side)->SuspendDownloads( (bool)params->bSuspend );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StartPlaytimeTracking( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StopPlaytimeTracking( (PublishedFileId_t *)params->pvecPublishedFileID, (uint32)params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->StopPlaytimeTrackingForAllItems(  );
}

#ifdef __cplusplus
}
#endif
