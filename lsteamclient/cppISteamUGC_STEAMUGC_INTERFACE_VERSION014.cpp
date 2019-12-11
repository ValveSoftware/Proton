#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION014.h"
UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUserUGCRequest(void *linux_side, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    return ((ISteamUGC*)linux_side)->CreateQueryUserUGCRequest((AccountID_t)unAccountID, (EUserUGCList)eListType, (EUGCMatchingUGCType)eMatchingUGCType, (EUserUGCListSortOrder)eSortOrder, (AppId_t)nCreatorAppID, (AppId_t)nConsumerAppID, (uint32)unPage);
}

UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest(void *linux_side, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    return ((ISteamUGC*)linux_side)->CreateQueryAllUGCRequest((EUGCQuery)eQueryType, (EUGCMatchingUGCType)eMatchingeMatchingUGCTypeFileType, (AppId_t)nCreatorAppID, (AppId_t)nConsumerAppID, (uint32)unPage);
}

UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest_2(void *linux_side, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char * pchCursor)
{
    return ((ISteamUGC*)linux_side)->CreateQueryAllUGCRequest((EUGCQuery)eQueryType, (EUGCMatchingUGCType)eMatchingeMatchingUGCTypeFileType, (AppId_t)nCreatorAppID, (AppId_t)nConsumerAppID, (const char *)pchCursor);
}

UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUGCDetailsRequest(void *linux_side, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    return ((ISteamUGC*)linux_side)->CreateQueryUGCDetailsRequest((PublishedFileId_t *)pvecPublishedFileID, (uint32)unNumPublishedFileIDs);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SendQueryUGCRequest(void *linux_side, UGCQueryHandle_t handle)
{
    return ((ISteamUGC*)linux_side)->SendQueryUGCRequest((UGCQueryHandle_t)handle);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCResult(void *linux_side, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_147 * pDetails)
{
    SteamUGCDetails_t lin_pDetails;
    win_to_lin_struct_SteamUGCDetails_t_147(pDetails, &lin_pDetails);
    bool retval = ((ISteamUGC*)linux_side)->GetQueryUGCResult((UGCQueryHandle_t)handle, (uint32)index, &lin_pDetails);
    lin_to_win_struct_SteamUGCDetails_t_147(&lin_pDetails, pDetails);
    return retval;
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCPreviewURL(void *linux_side, UGCQueryHandle_t handle, uint32 index, char * pchURL, uint32 cchURLSize)
{
    return ((ISteamUGC*)linux_side)->GetQueryUGCPreviewURL((UGCQueryHandle_t)handle, (uint32)index, (char *)pchURL, (uint32)cchURLSize);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCMetadata(void *linux_side, UGCQueryHandle_t handle, uint32 index, char * pchMetadata, uint32 cchMetadatasize)
{
    return ((ISteamUGC*)linux_side)->GetQueryUGCMetadata((UGCQueryHandle_t)handle, (uint32)index, (char *)pchMetadata, (uint32)cchMetadatasize);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCChildren(void *linux_side, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    return ((ISteamUGC*)linux_side)->GetQueryUGCChildren((UGCQueryHandle_t)handle, (uint32)index, (PublishedFileId_t *)pvecPublishedFileID, (uint32)cMaxEntries);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCStatistic(void *linux_side, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 * pStatValue)
{
    return ((ISteamUGC*)linux_side)->GetQueryUGCStatistic((UGCQueryHandle_t)handle, (uint32)index, (EItemStatistic)eStatType, (uint64 *)pStatValue);
}

uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumAdditionalPreviews(void *linux_side, UGCQueryHandle_t handle, uint32 index)
{
    return ((ISteamUGC*)linux_side)->GetQueryUGCNumAdditionalPreviews((UGCQueryHandle_t)handle, (uint32)index);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCAdditionalPreview(void *linux_side, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char * pchURLOrVideoID, uint32 cchURLSize, char * pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType * pPreviewType)
{
    return ((ISteamUGC*)linux_side)->GetQueryUGCAdditionalPreview((UGCQueryHandle_t)handle, (uint32)index, (uint32)previewIndex, (char *)pchURLOrVideoID, (uint32)cchURLSize, (char *)pchOriginalFileName, (uint32)cchOriginalFileNameSize, (EItemPreviewType *)pPreviewType);
}

uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumKeyValueTags(void *linux_side, UGCQueryHandle_t handle, uint32 index)
{
    return ((ISteamUGC*)linux_side)->GetQueryUGCNumKeyValueTags((UGCQueryHandle_t)handle, (uint32)index);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag(void *linux_side, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char * pchKey, uint32 cchKeySize, char * pchValue, uint32 cchValueSize)
{
    return ((ISteamUGC*)linux_side)->GetQueryUGCKeyValueTag((UGCQueryHandle_t)handle, (uint32)index, (uint32)keyValueTagIndex, (char *)pchKey, (uint32)cchKeySize, (char *)pchValue, (uint32)cchValueSize);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag_2(void *linux_side, UGCQueryHandle_t handle, uint32 index, const char * pchKey, char * pchValue, uint32 cchValueSize)
{
    return ((ISteamUGC*)linux_side)->GetQueryUGCKeyValueTag((UGCQueryHandle_t)handle, (uint32)index, (const char *)pchKey, (char *)pchValue, (uint32)cchValueSize);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_ReleaseQueryUGCRequest(void *linux_side, UGCQueryHandle_t handle)
{
    return ((ISteamUGC*)linux_side)->ReleaseQueryUGCRequest((UGCQueryHandle_t)handle);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTag(void *linux_side, UGCQueryHandle_t handle, const char * pTagName)
{
    return ((ISteamUGC*)linux_side)->AddRequiredTag((UGCQueryHandle_t)handle, (const char *)pTagName);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTagGroup(void *linux_side, UGCQueryHandle_t handle, const SteamParamStringArray_t * pTagGroups)
{
    return ((ISteamUGC*)linux_side)->AddRequiredTagGroup((UGCQueryHandle_t)handle, (const SteamParamStringArray_t *)pTagGroups);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddExcludedTag(void *linux_side, UGCQueryHandle_t handle, const char * pTagName)
{
    return ((ISteamUGC*)linux_side)->AddExcludedTag((UGCQueryHandle_t)handle, (const char *)pTagName);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnOnlyIDs(void *linux_side, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    return ((ISteamUGC*)linux_side)->SetReturnOnlyIDs((UGCQueryHandle_t)handle, (bool)bReturnOnlyIDs);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnKeyValueTags(void *linux_side, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    return ((ISteamUGC*)linux_side)->SetReturnKeyValueTags((UGCQueryHandle_t)handle, (bool)bReturnKeyValueTags);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnLongDescription(void *linux_side, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    return ((ISteamUGC*)linux_side)->SetReturnLongDescription((UGCQueryHandle_t)handle, (bool)bReturnLongDescription);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnMetadata(void *linux_side, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    return ((ISteamUGC*)linux_side)->SetReturnMetadata((UGCQueryHandle_t)handle, (bool)bReturnMetadata);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnChildren(void *linux_side, UGCQueryHandle_t handle, bool bReturnChildren)
{
    return ((ISteamUGC*)linux_side)->SetReturnChildren((UGCQueryHandle_t)handle, (bool)bReturnChildren);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnAdditionalPreviews(void *linux_side, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    return ((ISteamUGC*)linux_side)->SetReturnAdditionalPreviews((UGCQueryHandle_t)handle, (bool)bReturnAdditionalPreviews);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnTotalOnly(void *linux_side, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    return ((ISteamUGC*)linux_side)->SetReturnTotalOnly((UGCQueryHandle_t)handle, (bool)bReturnTotalOnly);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnPlaytimeStats(void *linux_side, UGCQueryHandle_t handle, uint32 unDays)
{
    return ((ISteamUGC*)linux_side)->SetReturnPlaytimeStats((UGCQueryHandle_t)handle, (uint32)unDays);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetLanguage(void *linux_side, UGCQueryHandle_t handle, const char * pchLanguage)
{
    return ((ISteamUGC*)linux_side)->SetLanguage((UGCQueryHandle_t)handle, (const char *)pchLanguage);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowCachedResponse(void *linux_side, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    return ((ISteamUGC*)linux_side)->SetAllowCachedResponse((UGCQueryHandle_t)handle, (uint32)unMaxAgeSeconds);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetCloudFileNameFilter(void *linux_side, UGCQueryHandle_t handle, const char * pMatchCloudFileName)
{
    return ((ISteamUGC*)linux_side)->SetCloudFileNameFilter((UGCQueryHandle_t)handle, (const char *)pMatchCloudFileName);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetMatchAnyTag(void *linux_side, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    return ((ISteamUGC*)linux_side)->SetMatchAnyTag((UGCQueryHandle_t)handle, (bool)bMatchAnyTag);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetSearchText(void *linux_side, UGCQueryHandle_t handle, const char * pSearchText)
{
    return ((ISteamUGC*)linux_side)->SetSearchText((UGCQueryHandle_t)handle, (const char *)pSearchText);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetRankedByTrendDays(void *linux_side, UGCQueryHandle_t handle, uint32 unDays)
{
    return ((ISteamUGC*)linux_side)->SetRankedByTrendDays((UGCQueryHandle_t)handle, (uint32)unDays);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredKeyValueTag(void *linux_side, UGCQueryHandle_t handle, const char * pKey, const char * pValue)
{
    return ((ISteamUGC*)linux_side)->AddRequiredKeyValueTag((UGCQueryHandle_t)handle, (const char *)pKey, (const char *)pValue);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RequestUGCDetails(void *linux_side, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    return ((ISteamUGC*)linux_side)->RequestUGCDetails((PublishedFileId_t)nPublishedFileID, (uint32)unMaxAgeSeconds);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateItem(void *linux_side, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    return ((ISteamUGC*)linux_side)->CreateItem((AppId_t)nConsumerAppId, (EWorkshopFileType)eFileType);
}

UGCUpdateHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartItemUpdate(void *linux_side, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->StartItemUpdate((AppId_t)nConsumerAppId, (PublishedFileId_t)nPublishedFileID);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTitle(void *linux_side, UGCUpdateHandle_t handle, const char * pchTitle)
{
    return ((ISteamUGC*)linux_side)->SetItemTitle((UGCUpdateHandle_t)handle, (const char *)pchTitle);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemDescription(void *linux_side, UGCUpdateHandle_t handle, const char * pchDescription)
{
    return ((ISteamUGC*)linux_side)->SetItemDescription((UGCUpdateHandle_t)handle, (const char *)pchDescription);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemUpdateLanguage(void *linux_side, UGCUpdateHandle_t handle, const char * pchLanguage)
{
    return ((ISteamUGC*)linux_side)->SetItemUpdateLanguage((UGCUpdateHandle_t)handle, (const char *)pchLanguage);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemMetadata(void *linux_side, UGCUpdateHandle_t handle, const char * pchMetaData)
{
    return ((ISteamUGC*)linux_side)->SetItemMetadata((UGCUpdateHandle_t)handle, (const char *)pchMetaData);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemVisibility(void *linux_side, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    return ((ISteamUGC*)linux_side)->SetItemVisibility((UGCUpdateHandle_t)handle, (ERemoteStoragePublishedFileVisibility)eVisibility);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTags(void *linux_side, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags)
{
    return ((ISteamUGC*)linux_side)->SetItemTags((UGCUpdateHandle_t)updateHandle, (const SteamParamStringArray_t *)pTags);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemContent(void *linux_side, UGCUpdateHandle_t handle, const char * pszContentFolder)
{
    return ((ISteamUGC*)linux_side)->SetItemContent((UGCUpdateHandle_t)handle, (const char *)pszContentFolder);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemPreview(void *linux_side, UGCUpdateHandle_t handle, const char * pszPreviewFile)
{
    return ((ISteamUGC*)linux_side)->SetItemPreview((UGCUpdateHandle_t)handle, (const char *)pszPreviewFile);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowLegacyUpload(void *linux_side, UGCUpdateHandle_t handle, bool bAllowLegacyUpload)
{
    return ((ISteamUGC*)linux_side)->SetAllowLegacyUpload((UGCUpdateHandle_t)handle, (bool)bAllowLegacyUpload);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAllItemKeyValueTags(void *linux_side, UGCUpdateHandle_t handle)
{
    return ((ISteamUGC*)linux_side)->RemoveAllItemKeyValueTags((UGCUpdateHandle_t)handle);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemKeyValueTags(void *linux_side, UGCUpdateHandle_t handle, const char * pchKey)
{
    return ((ISteamUGC*)linux_side)->RemoveItemKeyValueTags((UGCUpdateHandle_t)handle, (const char *)pchKey);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemKeyValueTag(void *linux_side, UGCUpdateHandle_t handle, const char * pchKey, const char * pchValue)
{
    return ((ISteamUGC*)linux_side)->AddItemKeyValueTag((UGCUpdateHandle_t)handle, (const char *)pchKey, (const char *)pchValue);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewFile(void *linux_side, UGCUpdateHandle_t handle, const char * pszPreviewFile, EItemPreviewType type)
{
    return ((ISteamUGC*)linux_side)->AddItemPreviewFile((UGCUpdateHandle_t)handle, (const char *)pszPreviewFile, (EItemPreviewType)type);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewVideo(void *linux_side, UGCUpdateHandle_t handle, const char * pszVideoID)
{
    return ((ISteamUGC*)linux_side)->AddItemPreviewVideo((UGCUpdateHandle_t)handle, (const char *)pszVideoID);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewFile(void *linux_side, UGCUpdateHandle_t handle, uint32 index, const char * pszPreviewFile)
{
    return ((ISteamUGC*)linux_side)->UpdateItemPreviewFile((UGCUpdateHandle_t)handle, (uint32)index, (const char *)pszPreviewFile);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewVideo(void *linux_side, UGCUpdateHandle_t handle, uint32 index, const char * pszVideoID)
{
    return ((ISteamUGC*)linux_side)->UpdateItemPreviewVideo((UGCUpdateHandle_t)handle, (uint32)index, (const char *)pszVideoID);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemPreview(void *linux_side, UGCUpdateHandle_t handle, uint32 index)
{
    return ((ISteamUGC*)linux_side)->RemoveItemPreview((UGCUpdateHandle_t)handle, (uint32)index);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubmitItemUpdate(void *linux_side, UGCUpdateHandle_t handle, const char * pchChangeNote)
{
    return ((ISteamUGC*)linux_side)->SubmitItemUpdate((UGCUpdateHandle_t)handle, (const char *)pchChangeNote);
}

EItemUpdateStatus cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemUpdateProgress(void *linux_side, UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal)
{
    return ((ISteamUGC*)linux_side)->GetItemUpdateProgress((UGCUpdateHandle_t)handle, (uint64 *)punBytesProcessed, (uint64 *)punBytesTotal);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetUserItemVote(void *linux_side, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    return ((ISteamUGC*)linux_side)->SetUserItemVote((PublishedFileId_t)nPublishedFileID, (bool)bVoteUp);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetUserItemVote(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->GetUserItemVote((PublishedFileId_t)nPublishedFileID);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemToFavorites(void *linux_side, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->AddItemToFavorites((AppId_t)nAppId, (PublishedFileId_t)nPublishedFileID);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemFromFavorites(void *linux_side, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->RemoveItemFromFavorites((AppId_t)nAppId, (PublishedFileId_t)nPublishedFileID);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubscribeItem(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->SubscribeItem((PublishedFileId_t)nPublishedFileID);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_UnsubscribeItem(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->UnsubscribeItem((PublishedFileId_t)nPublishedFileID);
}

uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetNumSubscribedItems(void *linux_side)
{
    return ((ISteamUGC*)linux_side)->GetNumSubscribedItems();
}

uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetSubscribedItems(void *linux_side, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    return ((ISteamUGC*)linux_side)->GetSubscribedItems((PublishedFileId_t *)pvecPublishedFileID, (uint32)cMaxEntries);
}

uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemState(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->GetItemState((PublishedFileId_t)nPublishedFileID);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemInstallInfo(void *linux_side, PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, uint32 * punTimeStamp)
{
    return ((ISteamUGC*)linux_side)->GetItemInstallInfo((PublishedFileId_t)nPublishedFileID, (uint64 *)punSizeOnDisk, (char *)pchFolder, (uint32)cchFolderSize, (uint32 *)punTimeStamp);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemDownloadInfo(void *linux_side, PublishedFileId_t nPublishedFileID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
    return ((ISteamUGC*)linux_side)->GetItemDownloadInfo((PublishedFileId_t)nPublishedFileID, (uint64 *)punBytesDownloaded, (uint64 *)punBytesTotal);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_DownloadItem(void *linux_side, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    return ((ISteamUGC*)linux_side)->DownloadItem((PublishedFileId_t)nPublishedFileID, (bool)bHighPriority);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_BInitWorkshopForGameServer(void *linux_side, DepotId_t unWorkshopDepotID, const char * pszFolder)
{
    return ((ISteamUGC*)linux_side)->BInitWorkshopForGameServer((DepotId_t)unWorkshopDepotID, (const char *)pszFolder);
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SuspendDownloads(void *linux_side, bool bSuspend)
{
    ((ISteamUGC*)linux_side)->SuspendDownloads((bool)bSuspend);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartPlaytimeTracking(void *linux_side, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    return ((ISteamUGC*)linux_side)->StartPlaytimeTracking((PublishedFileId_t *)pvecPublishedFileID, (uint32)unNumPublishedFileIDs);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTracking(void *linux_side, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    return ((ISteamUGC*)linux_side)->StopPlaytimeTracking((PublishedFileId_t *)pvecPublishedFileID, (uint32)unNumPublishedFileIDs);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTrackingForAllItems(void *linux_side)
{
    return ((ISteamUGC*)linux_side)->StopPlaytimeTrackingForAllItems();
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddDependency(void *linux_side, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->AddDependency((PublishedFileId_t)nParentPublishedFileID, (PublishedFileId_t)nChildPublishedFileID);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveDependency(void *linux_side, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->RemoveDependency((PublishedFileId_t)nParentPublishedFileID, (PublishedFileId_t)nChildPublishedFileID);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddAppDependency(void *linux_side, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    return ((ISteamUGC*)linux_side)->AddAppDependency((PublishedFileId_t)nPublishedFileID, (AppId_t)nAppID);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAppDependency(void *linux_side, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    return ((ISteamUGC*)linux_side)->RemoveAppDependency((PublishedFileId_t)nPublishedFileID, (AppId_t)nAppID);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetAppDependencies(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->GetAppDependencies((PublishedFileId_t)nPublishedFileID);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_DeleteItem(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    return ((ISteamUGC*)linux_side)->DeleteItem((PublishedFileId_t)nPublishedFileID);
}

#ifdef __cplusplus
}
#endif
