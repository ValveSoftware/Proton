/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION010.h"

typedef struct __winISteamUGC_STEAMUGC_INTERFACE_VERSION010 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUGC_STEAMUGC_INTERFACE_VERSION010;

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest, 32)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest(_this->linux_side, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest, 24)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest(_this->linux_side, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest, 12)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest(_this->linux_side, pvecPublishedFileID, unNumPublishedFileIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult(_this->linux_side, handle, index, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 index, char * pchURL, uint32 cchURLSize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL(_this->linux_side, handle, index, pchURL, cchURLSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 index, char * pchMetadata, uint32 cchMetadatasize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata(_this->linux_side, handle, index, pchMetadata, cchMetadatasize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren(_this->linux_side, handle, index, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 * pStatValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic(_this->linux_side, handle, index, eStatType, pStatValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews, 16)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview, 40)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char * pchURLOrVideoID, uint32 cchURLSize, char * pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType * pPreviewType)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview(_this->linux_side, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags, 16)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag, 36)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char * pchKey, uint32 cchKeySize, char * pchValue, uint32 cchValueSize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag(_this->linux_side, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs(_this->linux_side, handle, bReturnOnlyIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags(_this->linux_side, handle, bReturnKeyValueTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription(_this->linux_side, handle, bReturnLongDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata(_this->linux_side, handle, bReturnMetadata);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren(_this->linux_side, handle, bReturnChildren);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews(_this->linux_side, handle, bReturnAdditionalPreviews);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly(_this->linux_side, handle, bReturnTotalOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats(_this->linux_side, handle, unDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, const char * pchLanguage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage(_this->linux_side, handle, pchLanguage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse(_this->linux_side, handle, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, const char * pMatchCloudFileName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter(_this->linux_side, handle, pMatchCloudFileName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag(_this->linux_side, handle, bMatchAnyTag);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, const char * pSearchText)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText(_this->linux_side, handle, pSearchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays(_this->linux_side, handle, unDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCQueryHandle_t handle, const char * pKey, const char * pValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag(_this->linux_side, handle, pKey, pValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails(_this->linux_side, nPublishedFileID, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem(_this->linux_side, nConsumerAppId, eFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate, 16)
UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate(_this->linux_side, nConsumerAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle(_this->linux_side, handle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription(_this->linux_side, handle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pchLanguage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage(_this->linux_side, handle, pchLanguage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pchMetaData)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata(_this->linux_side, handle, pchMetaData);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility(_this->linux_side, handle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pszContentFolder)
{
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent(_this->linux_side, handle, pszContentFolder ? lin_pszContentFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pszPreviewFile)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview(_this->linux_side, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags(_this->linux_side, handle, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag(_this->linux_side, handle, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pszPreviewFile, EItemPreviewType type)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile(_this->linux_side, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pszVideoID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo(_this->linux_side, handle, pszVideoID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, uint32 index, const char * pszPreviewFile)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile(_this->linux_side, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, uint32 index, const char * pszVideoID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo(_this->linux_side, handle, index, pszVideoID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, const char * pchChangeNote)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate(_this->linux_side, handle, pchChangeNote);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress, 20)
EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress(_this->linux_side, handle, punBytesProcessed, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote, 13)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote(_this->linux_side, nPublishedFileID, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites(_this->linux_side, nAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites(_this->linux_side, nAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems, 4)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems(_this->linux_side, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo, 28)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, uint32 * punTimeStamp)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo(_this->linux_side, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderSize);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo(_this->linux_side, nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem(_this->linux_side, nPublishedFileID, bHighPriority);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, DepotId_t unWorkshopDepotID, const char * pszFolder)
{
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer(_this->linux_side, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads, 5)
void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads(_this->linux_side, bSuspend);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking(_this->linux_side, pvecPublishedFileID, unNumPublishedFileIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking(_this->linux_side, pvecPublishedFileID, unNumPublishedFileIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems, 4)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency, 20)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency(_this->linux_side, nParentPublishedFileID, nChildPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency, 20)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency(_this->linux_side, nParentPublishedFileID, nChildPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency(_this->linux_side, nPublishedFileID, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency(_this->linux_side, nPublishedFileID, nAppID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem(_this->linux_side, nPublishedFileID);
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION010,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem)
    );
#ifndef __GNUC__
}
#endif

winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION010(void *linux_side)
{
    winISteamUGC_STEAMUGC_INTERFACE_VERSION010 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUGC_STEAMUGC_INTERFACE_VERSION010));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUGC_STEAMUGC_INTERFACE_VERSION010_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION009.h"

typedef struct __winISteamUGC_STEAMUGC_INTERFACE_VERSION009 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUGC_STEAMUGC_INTERFACE_VERSION009;

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest, 32)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest(_this->linux_side, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest, 24)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest(_this->linux_side, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest, 12)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest(_this->linux_side, pvecPublishedFileID, unNumPublishedFileIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult(_this->linux_side, handle, index, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 index, char * pchURL, uint32 cchURLSize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL(_this->linux_side, handle, index, pchURL, cchURLSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 index, char * pchMetadata, uint32 cchMetadatasize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata(_this->linux_side, handle, index, pchMetadata, cchMetadatasize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren(_this->linux_side, handle, index, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 * pStatValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic(_this->linux_side, handle, index, eStatType, pStatValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews, 16)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview, 40)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char * pchURLOrVideoID, uint32 cchURLSize, char * pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType * pPreviewType)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview(_this->linux_side, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags, 16)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag, 36)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char * pchKey, uint32 cchKeySize, char * pchValue, uint32 cchValueSize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag(_this->linux_side, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs(_this->linux_side, handle, bReturnOnlyIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags(_this->linux_side, handle, bReturnKeyValueTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription(_this->linux_side, handle, bReturnLongDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata(_this->linux_side, handle, bReturnMetadata);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren(_this->linux_side, handle, bReturnChildren);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews(_this->linux_side, handle, bReturnAdditionalPreviews);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly(_this->linux_side, handle, bReturnTotalOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, const char * pchLanguage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage(_this->linux_side, handle, pchLanguage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse(_this->linux_side, handle, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, const char * pMatchCloudFileName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter(_this->linux_side, handle, pMatchCloudFileName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag(_this->linux_side, handle, bMatchAnyTag);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, const char * pSearchText)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText(_this->linux_side, handle, pSearchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays(_this->linux_side, handle, unDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCQueryHandle_t handle, const char * pKey, const char * pValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag(_this->linux_side, handle, pKey, pValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails(_this->linux_side, nPublishedFileID, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem(_this->linux_side, nConsumerAppId, eFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate, 16)
UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate(_this->linux_side, nConsumerAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle(_this->linux_side, handle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription(_this->linux_side, handle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pchLanguage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage(_this->linux_side, handle, pchLanguage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pchMetaData)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata(_this->linux_side, handle, pchMetaData);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility(_this->linux_side, handle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pszContentFolder)
{
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent(_this->linux_side, handle, pszContentFolder ? lin_pszContentFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pszPreviewFile)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview(_this->linux_side, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags(_this->linux_side, handle, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag(_this->linux_side, handle, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pszPreviewFile, EItemPreviewType type)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile(_this->linux_side, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pszVideoID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo(_this->linux_side, handle, pszVideoID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, uint32 index, const char * pszPreviewFile)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile(_this->linux_side, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, uint32 index, const char * pszVideoID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo(_this->linux_side, handle, index, pszVideoID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, const char * pchChangeNote)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate(_this->linux_side, handle, pchChangeNote);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress, 20)
EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress(_this->linux_side, handle, punBytesProcessed, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote, 13)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote(_this->linux_side, nPublishedFileID, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites(_this->linux_side, nAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites(_this->linux_side, nAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems, 4)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems(_this->linux_side, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo, 28)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, uint32 * punTimeStamp)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo(_this->linux_side, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderSize);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t nPublishedFileID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo(_this->linux_side, nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem(_this->linux_side, nPublishedFileID, bHighPriority);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, DepotId_t unWorkshopDepotID, const char * pszFolder)
{
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer(_this->linux_side, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads, 5)
void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads(_this->linux_side, bSuspend);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking(_this->linux_side, pvecPublishedFileID, unNumPublishedFileIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking(_this->linux_side, pvecPublishedFileID, unNumPublishedFileIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems, 4)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems(_this->linux_side);
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION009,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems)
    );
#ifndef __GNUC__
}
#endif

winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION009(void *linux_side)
{
    winISteamUGC_STEAMUGC_INTERFACE_VERSION009 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUGC_STEAMUGC_INTERFACE_VERSION009));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUGC_STEAMUGC_INTERFACE_VERSION009_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION008.h"

typedef struct __winISteamUGC_STEAMUGC_INTERFACE_VERSION008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUGC_STEAMUGC_INTERFACE_VERSION008;

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest, 32)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest(_this->linux_side, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest, 24)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest(_this->linux_side, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest, 12)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest(_this->linux_side, pvecPublishedFileID, unNumPublishedFileIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult(_this->linux_side, handle, index, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 index, char * pchURL, uint32 cchURLSize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL(_this->linux_side, handle, index, pchURL, cchURLSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 index, char * pchMetadata, uint32 cchMetadatasize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata(_this->linux_side, handle, index, pchMetadata, cchMetadatasize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren(_this->linux_side, handle, index, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint32 * pStatValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic(_this->linux_side, handle, index, eStatType, pStatValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews, 16)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview, 40)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char * pchURLOrVideoID, uint32 cchURLSize, char * pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType * pPreviewType)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview(_this->linux_side, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags, 16)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag, 36)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char * pchKey, uint32 cchKeySize, char * pchValue, uint32 cchValueSize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag(_this->linux_side, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags(_this->linux_side, handle, bReturnKeyValueTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription(_this->linux_side, handle, bReturnLongDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata(_this->linux_side, handle, bReturnMetadata);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren(_this->linux_side, handle, bReturnChildren);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews(_this->linux_side, handle, bReturnAdditionalPreviews);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly(_this->linux_side, handle, bReturnTotalOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, const char * pchLanguage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage(_this->linux_side, handle, pchLanguage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse(_this->linux_side, handle, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, const char * pMatchCloudFileName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter(_this->linux_side, handle, pMatchCloudFileName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag(_this->linux_side, handle, bMatchAnyTag);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, const char * pSearchText)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText(_this->linux_side, handle, pSearchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays(_this->linux_side, handle, unDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCQueryHandle_t handle, const char * pKey, const char * pValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag(_this->linux_side, handle, pKey, pValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails(_this->linux_side, nPublishedFileID, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem(_this->linux_side, nConsumerAppId, eFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate, 16)
UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate(_this->linux_side, nConsumerAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle(_this->linux_side, handle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription(_this->linux_side, handle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pchLanguage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage(_this->linux_side, handle, pchLanguage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pchMetaData)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata(_this->linux_side, handle, pchMetaData);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility(_this->linux_side, handle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pszContentFolder)
{
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent(_this->linux_side, handle, pszContentFolder ? lin_pszContentFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pszPreviewFile)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview(_this->linux_side, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags(_this->linux_side, handle, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag(_this->linux_side, handle, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pszPreviewFile, EItemPreviewType type)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile(_this->linux_side, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pszVideoID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo(_this->linux_side, handle, pszVideoID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, uint32 index, const char * pszPreviewFile)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile(_this->linux_side, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, uint32 index, const char * pszVideoID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo(_this->linux_side, handle, index, pszVideoID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, const char * pchChangeNote)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate(_this->linux_side, handle, pchChangeNote);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress, 20)
EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress(_this->linux_side, handle, punBytesProcessed, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote, 13)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote(_this->linux_side, nPublishedFileID, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites(_this->linux_side, nAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites(_this->linux_side, nAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems, 4)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems(_this->linux_side, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo, 28)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, uint32 * punTimeStamp)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo(_this->linux_side, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderSize);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t nPublishedFileID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo(_this->linux_side, nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem(_this->linux_side, nPublishedFileID, bHighPriority);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, DepotId_t unWorkshopDepotID, const char * pszFolder)
{
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer(_this->linux_side, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads, 5)
void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads(winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads(_this->linux_side, bSuspend);
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION008,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads)
    );
#ifndef __GNUC__
}
#endif

winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION008(void *linux_side)
{
    winISteamUGC_STEAMUGC_INTERFACE_VERSION008 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUGC_STEAMUGC_INTERFACE_VERSION008));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUGC_STEAMUGC_INTERFACE_VERSION008_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION007.h"

typedef struct __winISteamUGC_STEAMUGC_INTERFACE_VERSION007 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUGC_STEAMUGC_INTERFACE_VERSION007;

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest, 32)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest(_this->linux_side, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest, 24)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest(_this->linux_side, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest, 12)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest(_this->linux_side, pvecPublishedFileID, unNumPublishedFileIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult(_this->linux_side, handle, index, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 index, char * pchURL, uint32 cchURLSize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL(_this->linux_side, handle, index, pchURL, cchURLSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 index, char * pchMetadata, uint32 cchMetadatasize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata(_this->linux_side, handle, index, pchMetadata, cchMetadatasize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren(_this->linux_side, handle, index, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint32 * pStatValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic(_this->linux_side, handle, index, eStatType, pStatValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews, 16)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview, 32)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char * pchURLOrVideoID, uint32 cchURLSize, bool * pbIsImage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview(_this->linux_side, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pbIsImage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags, 16)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag, 36)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char * pchKey, uint32 cchKeySize, char * pchValue, uint32 cchValueSize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag(_this->linux_side, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags(_this->linux_side, handle, bReturnKeyValueTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription(_this->linux_side, handle, bReturnLongDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata(_this->linux_side, handle, bReturnMetadata);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren(_this->linux_side, handle, bReturnChildren);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews(_this->linux_side, handle, bReturnAdditionalPreviews);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly(_this->linux_side, handle, bReturnTotalOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, const char * pchLanguage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage(_this->linux_side, handle, pchLanguage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse(_this->linux_side, handle, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, const char * pMatchCloudFileName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter(_this->linux_side, handle, pMatchCloudFileName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag(_this->linux_side, handle, bMatchAnyTag);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, const char * pSearchText)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText(_this->linux_side, handle, pSearchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays(_this->linux_side, handle, unDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCQueryHandle_t handle, const char * pKey, const char * pValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag(_this->linux_side, handle, pKey, pValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails(_this->linux_side, nPublishedFileID, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem(_this->linux_side, nConsumerAppId, eFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate, 16)
UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate(_this->linux_side, nConsumerAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle(_this->linux_side, handle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription(_this->linux_side, handle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, const char * pchLanguage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage(_this->linux_side, handle, pchLanguage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, const char * pchMetaData)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata(_this->linux_side, handle, pchMetaData);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility(_this->linux_side, handle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, const char * pszContentFolder)
{
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent(_this->linux_side, handle, pszContentFolder ? lin_pszContentFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, const char * pszPreviewFile)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview(_this->linux_side, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags(_this->linux_side, handle, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, const char * pchKey, const char * pchValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag(_this->linux_side, handle, pchKey, pchValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, const char * pchChangeNote)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate(_this->linux_side, handle, pchChangeNote);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress, 20)
EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress(_this->linux_side, handle, punBytesProcessed, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote, 13)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote(_this->linux_side, nPublishedFileID, bVoteUp);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites(_this->linux_side, nAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites(_this->linux_side, nAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems, 4)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems(_this->linux_side, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo, 28)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, uint32 * punTimeStamp)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo(_this->linux_side, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderSize);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t nPublishedFileID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo(_this->linux_side, nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem(_this->linux_side, nPublishedFileID, bHighPriority);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, DepotId_t unWorkshopDepotID, const char * pszFolder)
{
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer(_this->linux_side, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads, 5)
void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads(winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads(_this->linux_side, bSuspend);
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION007,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads)
    );
#ifndef __GNUC__
}
#endif

winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION007(void *linux_side)
{
    winISteamUGC_STEAMUGC_INTERFACE_VERSION007 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUGC_STEAMUGC_INTERFACE_VERSION007));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUGC_STEAMUGC_INTERFACE_VERSION007_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION005.h"

typedef struct __winISteamUGC_STEAMUGC_INTERFACE_VERSION005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUGC_STEAMUGC_INTERFACE_VERSION005;

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest, 32)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest(_this->linux_side, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest, 24)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest(_this->linux_side, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest, 12)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest(_this->linux_side, pvecPublishedFileID, unNumPublishedFileIDs);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult(_this->linux_side, handle, index, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, uint32 index, char * pchURL, uint32 cchURLSize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL(_this->linux_side, handle, index, pchURL, cchURLSize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, uint32 index, char * pchMetadata, uint32 cchMetadatasize)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata(_this->linux_side, handle, index, pchMetadata, cchMetadatasize);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren(_this->linux_side, handle, index, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint32 * pStatValue)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic(_this->linux_side, handle, index, eStatType, pStatValue);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews, 16)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, uint32 index)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews(_this->linux_side, handle, index);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview, 32)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char * pchURLOrVideoID, uint32 cchURLSize, bool * pbIsImage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview(_this->linux_side, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pbIsImage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription(_this->linux_side, handle, bReturnLongDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata(_this->linux_side, handle, bReturnMetadata);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren(_this->linux_side, handle, bReturnChildren);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews(_this->linux_side, handle, bReturnAdditionalPreviews);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly(_this->linux_side, handle, bReturnTotalOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse(_this->linux_side, handle, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, const char * pMatchCloudFileName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter(_this->linux_side, handle, pMatchCloudFileName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag(_this->linux_side, handle, bMatchAnyTag);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, const char * pSearchText)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText(_this->linux_side, handle, pSearchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays(_this->linux_side, handle, unDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails(_this->linux_side, nPublishedFileID, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem(_this->linux_side, nConsumerAppId, eFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate, 16)
UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate(_this->linux_side, nConsumerAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCUpdateHandle_t handle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle(_this->linux_side, handle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCUpdateHandle_t handle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription(_this->linux_side, handle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCUpdateHandle_t handle, const char * pchMetaData)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata(_this->linux_side, handle, pchMetaData);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility(_this->linux_side, handle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCUpdateHandle_t handle, const char * pszContentFolder)
{
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent(_this->linux_side, handle, pszContentFolder ? lin_pszContentFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCUpdateHandle_t handle, const char * pszPreviewFile)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview(_this->linux_side, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCUpdateHandle_t handle, const char * pchChangeNote)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate(_this->linux_side, handle, pchChangeNote);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress, 20)
EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress(_this->linux_side, handle, punBytesProcessed, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites(_this->linux_side, nAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites(_this->linux_side, nAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems, 4)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems(_this->linux_side, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo, 28)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, uint32 * punTimeStamp)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo(_this->linux_side, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderSize);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, PublishedFileId_t nPublishedFileID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo(_this->linux_side, nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem(_this->linux_side, nPublishedFileID, bHighPriority);
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION005,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem)
    );
#ifndef __GNUC__
}
#endif

winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION005(void *linux_side)
{
    winISteamUGC_STEAMUGC_INTERFACE_VERSION005 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUGC_STEAMUGC_INTERFACE_VERSION005));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUGC_STEAMUGC_INTERFACE_VERSION005_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION003.h"

typedef struct __winISteamUGC_STEAMUGC_INTERFACE_VERSION003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUGC_STEAMUGC_INTERFACE_VERSION003;

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest, 32)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest(_this->linux_side, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest, 24)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest(_this->linux_side, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult(_this->linux_side, handle, index, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription(_this->linux_side, handle, bReturnLongDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly(_this->linux_side, handle, bReturnTotalOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse(_this->linux_side, handle, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle, const char * pMatchCloudFileName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter(_this->linux_side, handle, pMatchCloudFileName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag(_this->linux_side, handle, bMatchAnyTag);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle, const char * pSearchText)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText(_this->linux_side, handle, pSearchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays(_this->linux_side, handle, unDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails(_this->linux_side, nPublishedFileID, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem(_this->linux_side, nConsumerAppId, eFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate, 16)
UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate(_this->linux_side, nConsumerAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCUpdateHandle_t handle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle(_this->linux_side, handle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCUpdateHandle_t handle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription(_this->linux_side, handle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility(_this->linux_side, handle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCUpdateHandle_t handle, const char * pszContentFolder)
{
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent(_this->linux_side, handle, pszContentFolder ? lin_pszContentFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCUpdateHandle_t handle, const char * pszPreviewFile)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview(_this->linux_side, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCUpdateHandle_t handle, const char * pchChangeNote)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate(_this->linux_side, handle, pchChangeNote);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress, 20)
EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress(_this->linux_side, handle, punBytesProcessed, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems, 4)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems(_this->linux_side, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo, 28)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, bool * pbLegacyItem)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo(_this->linux_side, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, pbLegacyItem);
    steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderSize);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo, 28)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *_this, PublishedFileId_t nPublishedFileID, bool * pbNeedsUpdate, bool * pbIsDownloading, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo(_this->linux_side, nPublishedFileID, pbNeedsUpdate, pbIsDownloading, punBytesDownloaded, punBytesTotal);
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION003,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo)
    );
#ifndef __GNUC__
}
#endif

winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION003(void *linux_side)
{
    winISteamUGC_STEAMUGC_INTERFACE_VERSION003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUGC_STEAMUGC_INTERFACE_VERSION003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUGC_STEAMUGC_INTERFACE_VERSION003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION002.h"

typedef struct __winISteamUGC_STEAMUGC_INTERFACE_VERSION002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUGC_STEAMUGC_INTERFACE_VERSION002;

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest, 32)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest(_this->linux_side, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest, 24)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest(_this->linux_side, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult(_this->linux_side, handle, index, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription(_this->linux_side, handle, bReturnLongDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly(_this->linux_side, handle, bReturnTotalOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse(_this->linux_side, handle, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle, const char * pMatchCloudFileName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter(_this->linux_side, handle, pMatchCloudFileName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag(_this->linux_side, handle, bMatchAnyTag);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle, const char * pSearchText)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText(_this->linux_side, handle, pSearchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays(_this->linux_side, handle, unDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails(_this->linux_side, nPublishedFileID, unMaxAgeSeconds);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem(_this->linux_side, nConsumerAppId, eFileType);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate, 16)
UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate(_this->linux_side, nConsumerAppId, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCUpdateHandle_t handle, const char * pchTitle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle(_this->linux_side, handle, pchTitle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCUpdateHandle_t handle, const char * pchDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription(_this->linux_side, handle, pchDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility(_this->linux_side, handle, eVisibility);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags(_this->linux_side, updateHandle, pTags);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCUpdateHandle_t handle, const char * pszContentFolder)
{
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent(_this->linux_side, handle, pszContentFolder ? lin_pszContentFolder : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCUpdateHandle_t handle, const char * pszPreviewFile)
{
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile);
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview(_this->linux_side, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate, 16)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCUpdateHandle_t handle, const char * pchChangeNote)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate(_this->linux_side, handle, pchChangeNote);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress, 20)
EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress(_this->linux_side, handle, punBytesProcessed, punBytesTotal);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem(_this->linux_side, nPublishedFileID);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems, 4)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems, 12)
uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems(_this->linux_side, pvecPublishedFileID, cMaxEntries);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo, 24)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize)
{
    bool path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo(_this->linux_side, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize);
    steamclient_unix_path_to_dos_path(path_result, pchFolder, pchFolder, cchFolderSize);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo, 28)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo(winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *_this, PublishedFileId_t nPublishedFileID, bool * pbNeedsUpdate, bool * pbIsDownloading, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo(_this->linux_side, nPublishedFileID, pbNeedsUpdate, pbIsDownloading, punBytesDownloaded, punBytesTotal);
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo)
    );
#ifndef __GNUC__
}
#endif

winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION002(void *linux_side)
{
    winISteamUGC_STEAMUGC_INTERFACE_VERSION002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUGC_STEAMUGC_INTERFACE_VERSION002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUGC_STEAMUGC_INTERFACE_VERSION002_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION001.h"

typedef struct __winISteamUGC_STEAMUGC_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUGC_STEAMUGC_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest, 32)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest(_this->linux_side, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest, 24)
UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest(_this->linux_side, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult, 20)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult(_this->linux_side, handle, index, pDetails);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest, 12)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest(_this->linux_side, handle);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle, const char * pTagName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag(_this->linux_side, handle, pTagName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription(_this->linux_side, handle, bReturnLongDescription);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly(_this->linux_side, handle, bReturnTotalOnly);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle, const char * pMatchCloudFileName)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter(_this->linux_side, handle, pMatchCloudFileName);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag, 13)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag(_this->linux_side, handle, bMatchAnyTag);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle, const char * pSearchText)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText(_this->linux_side, handle, pSearchText);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays, 16)
bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays(_this->linux_side, handle, unDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails, 12)
SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails(winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *_this, PublishedFileId_t nPublishedFileID)
{
    TRACE("%p\n", _this);
    return cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails(_this->linux_side, nPublishedFileID);
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails)
    );
#ifndef __GNUC__
}
#endif

winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION001(void *linux_side)
{
    winISteamUGC_STEAMUGC_INTERFACE_VERSION001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUGC_STEAMUGC_INTERFACE_VERSION001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUGC_STEAMUGC_INTERFACE_VERSION001_vtable;
    r->linux_side = linux_side;
    return r;
}

