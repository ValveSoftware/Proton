/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails, 12)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_128 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails(_this->u_iface, nPublishedFileID);
    return _ret;
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

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION001_vtable, 14, "STEAMUGC_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION002.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo, 28)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_130 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool *pbNeedsUpdate, bool *pbIsDownloading, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo(_this->u_iface, nPublishedFileID, pbNeedsUpdate, pbIsDownloading, punBytesDownloaded, punBytesTotal);
    return _ret;
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

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION002_vtable, 31, "STEAMUGC_INTERFACE_VERSION002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION003.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo, 28)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_132 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, bool *pbLegacyItem)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, pbLegacyItem);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool *pbNeedsUpdate, bool *pbIsDownloading, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo(_this->u_iface, nPublishedFileID, pbNeedsUpdate, pbIsDownloading, punBytesDownloaded, punBytesTotal);
    return _ret;
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

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION003_vtable, 31, "STEAMUGC_INTERFACE_VERSION003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION004.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem, 16)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_132x *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION004,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION004_vtable, 33, "STEAMUGC_INTERFACE_VERSION004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION005.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem, 16)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_133b *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint32 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, bool *pbIsImage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pbIsImage);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
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

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION005_vtable, 46, "STEAMUGC_INTERFACE_VERSION005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION006.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem, 16)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_133x *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint32 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, bool *pbIsImage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pbIsImage);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION006,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION006_vtable, 50, "STEAMUGC_INTERFACE_VERSION006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION007.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads, 8)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_136 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint32 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, bool *pbIsImage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pbIsImage);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads(_this->u_iface, bSuspend);
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

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION007_vtable, 58, "STEAMUGC_INTERFACE_VERSION007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION008.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads, 8)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_137 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint32 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile, EItemPreviewType type)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo(_this->u_iface, handle, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile(_this->u_iface, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo(_this->u_iface, handle, index, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview(_this->u_iface, handle, index);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads(_this->u_iface, bSuspend);
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

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION008_vtable, 63, "STEAMUGC_INTERFACE_VERSION008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION009.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads, 8)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems, 4)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_139 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs(_this->u_iface, handle, bReturnOnlyIDs);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile, EItemPreviewType type)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo(_this->u_iface, handle, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile(_this->u_iface, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo(_this->u_iface, handle, index, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview(_this->u_iface, handle, index);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads(_this->u_iface, bSuspend);
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems(_this->u_iface);
    return _ret;
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

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION009_vtable, 67, "STEAMUGC_INTERFACE_VERSION009");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION010.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads, 8)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem, 12)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_142 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs(_this->u_iface, handle, bReturnOnlyIDs);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile, EItemPreviewType type)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo(_this->u_iface, handle, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile(_this->u_iface, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo(_this->u_iface, handle, index, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview(_this->u_iface, handle, index);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads(_this->u_iface, bSuspend);
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem(_this->u_iface, nPublishedFileID);
    return _ret;
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

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION010_vtable, 74, "STEAMUGC_INTERFACE_VERSION010");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION012.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_2, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnOnlyIDs, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnPlaytimeStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowLegacyUpload, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SuspendDownloads, 8)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTrackingForAllItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetAppDependencies, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_DeleteItem, 12)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char *pchCursor)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_2(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_144 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnOnlyIDs(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnOnlyIDs(_this->u_iface, handle, bReturnOnlyIDs);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnPlaytimeStats(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnPlaytimeStats(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowLegacyUpload(struct w_steam_iface *_this, UGCUpdateHandle_t handle, bool bAllowLegacyUpload)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowLegacyUpload(_this->u_iface, handle, bAllowLegacyUpload);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile, EItemPreviewType type)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewFile(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewVideo(_this->u_iface, handle, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewFile(_this->u_iface, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewVideo(_this->u_iface, handle, index, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemPreview(_this->u_iface, handle, index);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_SuspendDownloads(_this->u_iface, bSuspend);
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTrackingForAllItems(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetAppDependencies(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetAppDependencies(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_DeleteItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION012_DeleteItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION012,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnOnlyIDs)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnPlaytimeStats)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowLegacyUpload)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SuspendDownloads)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTrackingForAllItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetAppDependencies)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_DeleteItem)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION012_vtable, 76, "STEAMUGC_INTERFACE_VERSION012");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION013.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_2, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_2, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnOnlyIDs, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnPlaytimeStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowLegacyUpload, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAllItemKeyValueTags, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SuspendDownloads, 8)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTrackingForAllItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetAppDependencies, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_DeleteItem, 12)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char *pchCursor)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_2(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_146 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, const char *pchKey, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_2(_this->u_iface, handle, index, pchKey, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnOnlyIDs(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnOnlyIDs(_this->u_iface, handle, bReturnOnlyIDs);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnPlaytimeStats(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnPlaytimeStats(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowLegacyUpload(struct w_steam_iface *_this, UGCUpdateHandle_t handle, bool bAllowLegacyUpload)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowLegacyUpload(_this->u_iface, handle, bAllowLegacyUpload);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAllItemKeyValueTags(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile, EItemPreviewType type)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewFile(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewVideo(_this->u_iface, handle, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewFile(_this->u_iface, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewVideo(_this->u_iface, handle, index, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemPreview(_this->u_iface, handle, index);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SuspendDownloads(_this->u_iface, bSuspend);
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTrackingForAllItems(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetAppDependencies(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetAppDependencies(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_DeleteItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_DeleteItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION013,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnOnlyIDs)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnPlaytimeStats)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowLegacyUpload)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAllItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SuspendDownloads)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTrackingForAllItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetAppDependencies)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_DeleteItem)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION013_vtable, 78, "STEAMUGC_INTERFACE_VERSION013");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION014.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest_2, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag_2, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTagGroup, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnOnlyIDs, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnPlaytimeStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowLegacyUpload, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAllItemKeyValueTags, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SuspendDownloads, 8)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTrackingForAllItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetAppDependencies, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_DeleteItem, 12)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char *pchCursor)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest_2(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_150 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, const char *pchKey, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag_2(_this->u_iface, handle, index, pchKey, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTagGroup(struct w_steam_iface *_this, UGCQueryHandle_t handle, const SteamParamStringArray_t *pTagGroups)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTagGroup(_this->u_iface, handle, pTagGroups);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnOnlyIDs(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnOnlyIDs(_this->u_iface, handle, bReturnOnlyIDs);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnPlaytimeStats(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnPlaytimeStats(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowLegacyUpload(struct w_steam_iface *_this, UGCUpdateHandle_t handle, bool bAllowLegacyUpload)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowLegacyUpload(_this->u_iface, handle, bAllowLegacyUpload);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAllItemKeyValueTags(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile, EItemPreviewType type)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewFile(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewVideo(_this->u_iface, handle, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewFile(_this->u_iface, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewVideo(_this->u_iface, handle, index, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemPreview(_this->u_iface, handle, index);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SuspendDownloads(_this->u_iface, bSuspend);
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTrackingForAllItems(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetAppDependencies(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetAppDependencies(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_DeleteItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_DeleteItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION014,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTagGroup)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnOnlyIDs)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnPlaytimeStats)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowLegacyUpload)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAllItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SuspendDownloads)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTrackingForAllItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetAppDependencies)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_DeleteItem)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION014_vtable, 79, "STEAMUGC_INTERFACE_VERSION014");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION015.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_2, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTag, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTagDisplayName, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_2, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTagGroup, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnOnlyIDs, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnPlaytimeStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowLegacyUpload, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAllItemKeyValueTags, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SuspendDownloads, 8)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTrackingForAllItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetAppDependencies, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_DeleteItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_ShowWorkshopEULA, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetWorkshopEULAStatus, 4)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char *pchCursor)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_2(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_152 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 indexTag, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTag(_this->u_iface, handle, index, indexTag, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTagDisplayName(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 indexTag, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTagDisplayName(_this->u_iface, handle, index, indexTag, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, const char *pchKey, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_2(_this->u_iface, handle, index, pchKey, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTagGroup(struct w_steam_iface *_this, UGCQueryHandle_t handle, const SteamParamStringArray_t *pTagGroups)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTagGroup(_this->u_iface, handle, pTagGroups);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnOnlyIDs(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnOnlyIDs(_this->u_iface, handle, bReturnOnlyIDs);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnPlaytimeStats(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnPlaytimeStats(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowLegacyUpload(struct w_steam_iface *_this, UGCUpdateHandle_t handle, bool bAllowLegacyUpload)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowLegacyUpload(_this->u_iface, handle, bAllowLegacyUpload);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAllItemKeyValueTags(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile, EItemPreviewType type)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewFile(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewVideo(_this->u_iface, handle, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewFile(_this->u_iface, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewVideo(_this->u_iface, handle, index, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemPreview(_this->u_iface, handle, index);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SuspendDownloads(_this->u_iface, bSuspend);
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTrackingForAllItems(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetAppDependencies(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetAppDependencies(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_DeleteItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_DeleteItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_ShowWorkshopEULA(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_ShowWorkshopEULA(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetWorkshopEULAStatus(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetWorkshopEULAStatus(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION015_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION015,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTagDisplayName)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTagGroup)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnOnlyIDs)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnPlaytimeStats)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowLegacyUpload)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAllItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SuspendDownloads)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTrackingForAllItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetAppDependencies)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_DeleteItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_ShowWorkshopEULA)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetWorkshopEULAStatus)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION015(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION015_vtable, 84, "STEAMUGC_INTERFACE_VERSION015");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION016.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads, 8)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus, 4)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char *pchCursor)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_155 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 indexTag, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag(_this->u_iface, handle, index, indexTag, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 indexTag, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName(_this->u_iface, handle, index, indexTag, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, const char *pchKey, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2(_this->u_iface, handle, index, pchKey, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup(struct w_steam_iface *_this, UGCQueryHandle_t handle, const SteamParamStringArray_t *pTagGroups)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup(_this->u_iface, handle, pTagGroups);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs(_this->u_iface, handle, bReturnOnlyIDs);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange(struct w_steam_iface *_this, UGCQueryHandle_t handle, RTime32 rtStart, RTime32 rtEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange(_this->u_iface, handle, rtStart, rtEnd);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange(struct w_steam_iface *_this, UGCQueryHandle_t handle, RTime32 rtStart, RTime32 rtEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange(_this->u_iface, handle, rtStart, rtEnd);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload(struct w_steam_iface *_this, UGCUpdateHandle_t handle, bool bAllowLegacyUpload)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload(_this->u_iface, handle, bAllowLegacyUpload);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile, EItemPreviewType type)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo(_this->u_iface, handle, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile(_this->u_iface, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo(_this->u_iface, handle, index, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview(_this->u_iface, handle, index);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads(_this->u_iface, bSuspend);
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION016_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION016,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION016(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION016");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION016_vtable, 86, "STEAMUGC_INTERFACE_VERSION016");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION017.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads, 8)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus, 4)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char *pchCursor)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_157 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 indexTag, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag(_this->u_iface, handle, index, indexTag, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 indexTag, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName(_this->u_iface, handle, index, indexTag, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, const char *pchKey, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2(_this->u_iface, handle, index, pchKey, pchValue, cchValueSize);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EUGCContentDescriptorID *pvecDescriptors, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors(_this->u_iface, handle, index, pvecDescriptors, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup(struct w_steam_iface *_this, UGCQueryHandle_t handle, const SteamParamStringArray_t *pTagGroups)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup(_this->u_iface, handle, pTagGroups);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs(_this->u_iface, handle, bReturnOnlyIDs);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange(struct w_steam_iface *_this, UGCQueryHandle_t handle, RTime32 rtStart, RTime32 rtEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange(_this->u_iface, handle, rtStart, rtEnd);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange(struct w_steam_iface *_this, UGCQueryHandle_t handle, RTime32 rtStart, RTime32 rtEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange(_this->u_iface, handle, rtStart, rtEnd);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags(_this->u_iface, updateHandle, pTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload(struct w_steam_iface *_this, UGCUpdateHandle_t handle, bool bAllowLegacyUpload)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload(_this->u_iface, handle, bAllowLegacyUpload);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile, EItemPreviewType type)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo(_this->u_iface, handle, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile(_this->u_iface, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo(_this->u_iface, handle, index, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor(struct w_steam_iface *_this, UGCUpdateHandle_t handle, EUGCContentDescriptorID descid)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor(_this->u_iface, handle, descid);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor(struct w_steam_iface *_this, UGCUpdateHandle_t handle, EUGCContentDescriptorID descid)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor(_this->u_iface, handle, descid);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads(_this->u_iface, bSuspend);
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION017,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION017(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION017");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION017_vtable, 89, "STEAMUGC_INTERFACE_VERSION017");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION018.h"

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads, 8)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences, 12)

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest(struct w_steam_iface *_this, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest(_this->u_iface, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char *pchCursor)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2(_this->u_iface, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
    return _ret;
}

UGCQueryHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_158 *pDetails)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult(_this->u_iface, handle, index, pDetails);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 indexTag, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag(_this->u_iface, handle, index, indexTag, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 indexTag, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName(_this->u_iface, handle, index, indexTag, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL(_this->u_iface, handle, index, pchURL, cchURLSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata(_this->u_iface, handle, index, pchMetadata, cchMetadatasize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren(_this->u_iface, handle, index, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 *pStatValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic(_this->u_iface, handle, index, eStatType, pStatValue);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview(_this->u_iface, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
    steamclient_unix_path_to_dos_path(_ret, pchURLOrVideoID, pchURLOrVideoID, cchURLSize, 1);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag(_this->u_iface, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, const char *pchKey, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2(_this->u_iface, handle, index, pchKey, pchValue, cchValueSize);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 index, EUGCContentDescriptorID *pvecDescriptors, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors(_this->u_iface, handle, index, pvecDescriptors, cMaxEntries);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest(struct w_steam_iface *_this, UGCQueryHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup(struct w_steam_iface *_this, UGCQueryHandle_t handle, const SteamParamStringArray_t *pTagGroups)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup(_this->u_iface, handle, pTagGroups);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag(_this->u_iface, handle, pTagName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs(_this->u_iface, handle, bReturnOnlyIDs);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags(_this->u_iface, handle, bReturnKeyValueTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription(_this->u_iface, handle, bReturnLongDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata(_this->u_iface, handle, bReturnMetadata);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren(_this->u_iface, handle, bReturnChildren);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews(_this->u_iface, handle, bReturnAdditionalPreviews);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly(_this->u_iface, handle, bReturnTotalOnly);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse(_this->u_iface, handle, unMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter(_this->u_iface, handle, pMatchCloudFileName);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag(_this->u_iface, handle, bMatchAnyTag);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText(_this->u_iface, handle, pSearchText);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays(struct w_steam_iface *_this, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays(_this->u_iface, handle, unDays);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange(struct w_steam_iface *_this, UGCQueryHandle_t handle, RTime32 rtStart, RTime32 rtEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange(_this->u_iface, handle, rtStart, rtEnd);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange(struct w_steam_iface *_this, UGCQueryHandle_t handle, RTime32 rtStart, RTime32 rtEnd)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange(_this->u_iface, handle, rtStart, rtEnd);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag(struct w_steam_iface *_this, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag(_this->u_iface, handle, pKey, pValue);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails(_this->u_iface, nPublishedFileID, unMaxAgeSeconds);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem(struct w_steam_iface *_this, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem(_this->u_iface, nConsumerAppId, eFileType);
    return _ret;
}

UGCUpdateHandle_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate(struct w_steam_iface *_this, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate(_this->u_iface, nConsumerAppId, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle(_this->u_iface, handle, pchTitle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription(_this->u_iface, handle, pchDescription);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage(_this->u_iface, handle, pchLanguage);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata(_this->u_iface, handle, pchMetaData);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility(struct w_steam_iface *_this, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility(_this->u_iface, handle, eVisibility);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags(struct w_steam_iface *_this, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags, bool bAllowAdminTags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags(_this->u_iface, updateHandle, pTags, bAllowAdminTags);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    char lin_pszContentFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszContentFolder, lin_pszContentFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent(_this->u_iface, handle, pszContentFolder ? lin_pszContentFolder : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload(struct w_steam_iface *_this, UGCUpdateHandle_t handle, bool bAllowLegacyUpload)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload(_this->u_iface, handle, bAllowLegacyUpload);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags(_this->u_iface, handle);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags(_this->u_iface, handle, pchKey);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag(_this->u_iface, handle, pchKey, pchValue);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszPreviewFile, EItemPreviewType type)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile(_this->u_iface, handle, pszPreviewFile ? lin_pszPreviewFile : NULL, type);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo(_this->u_iface, handle, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszPreviewFile)
{
    bool _ret;
    char lin_pszPreviewFile[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszPreviewFile, lin_pszPreviewFile, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile(_this->u_iface, handle, index, pszPreviewFile ? lin_pszPreviewFile : NULL);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index, const char *pszVideoID)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo(_this->u_iface, handle, index, pszVideoID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint32 index)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview(_this->u_iface, handle, index);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor(struct w_steam_iface *_this, UGCUpdateHandle_t handle, EUGCContentDescriptorID descid)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor(_this->u_iface, handle, descid);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor(struct w_steam_iface *_this, UGCUpdateHandle_t handle, EUGCContentDescriptorID descid)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor(_this->u_iface, handle, descid);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate(struct w_steam_iface *_this, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate(_this->u_iface, handle, pchChangeNote);
    return _ret;
}

EItemUpdateStatus __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress(struct w_steam_iface *_this, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress(_this->u_iface, handle, punBytesProcessed, punBytesTotal);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote(_this->u_iface, nPublishedFileID, bVoteUp);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites(struct w_steam_iface *_this, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites(_this->u_iface, nAppId, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems(_this->u_iface, pvecPublishedFileID, cMaxEntries);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo(_this->u_iface, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
    steamclient_unix_path_to_dos_path(_ret, pchFolder, pchFolder, cchFolderSize, 0);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo(_this->u_iface, nPublishedFileID, punBytesDownloaded, punBytesTotal);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem(_this->u_iface, nPublishedFileID, bHighPriority);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer(struct w_steam_iface *_this, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    char lin_pszFolder[PATH_MAX];
    steamclient_dos_path_to_unix_path(pszFolder, lin_pszFolder, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer(_this->u_iface, unWorkshopDepotID, pszFolder ? lin_pszFolder : NULL);
    return _ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads(struct w_steam_iface *_this, bool bSuspend)
{
    TRACE("%p\n", _this);
    cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads(_this->u_iface, bSuspend);
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking(struct w_steam_iface *_this, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking(_this->u_iface, pvecPublishedFileID, unNumPublishedFileIDs);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency(struct w_steam_iface *_this, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency(_this->u_iface, nParentPublishedFileID, nChildPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency(_this->u_iface, nPublishedFileID, nAppID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies(_this->u_iface, nPublishedFileID);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem(struct w_steam_iface *_this, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem(_this->u_iface, nPublishedFileID);
    return _ret;
}

bool __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA(_this->u_iface);
    return _ret;
}

SteamAPICall_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus(struct w_steam_iface *_this)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus(_this->u_iface);
    return _ret;
}

uint32 __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences(struct w_steam_iface *_this, EUGCContentDescriptorID *pvecDescriptors, uint32 cMaxEntries)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences(_this->u_iface, pvecDescriptors, cMaxEntries);
    return _ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION018_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION018,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION018(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION018");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION018_vtable, 90, "STEAMUGC_INTERFACE_VERSION018");
    r->u_iface = u_iface;
    return r;
}

