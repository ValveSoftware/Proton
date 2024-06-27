/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_126 *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION001_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION001, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION001_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION001_vtable, 14, "STEAMUGC_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t *pbNeedsUpdate, int8_t *pbIsDownloading, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .pbNeedsUpdate = pbNeedsUpdate,
        .pbIsDownloading = pbIsDownloading,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION002_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION002, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION002_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION002_vtable, 31, "STEAMUGC_INTERFACE_VERSION002");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetRankedByTrendDays, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SetItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetSubscribedItems, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, int8_t *pbLegacyItem)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .pbLegacyItem = pbLegacyItem,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t *pbNeedsUpdate, int8_t *pbIsDownloading, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .pbNeedsUpdate = pbNeedsUpdate,
        .pbIsDownloading = pbIsDownloading,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION003_GetItemUpdateInfo, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION003_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION003, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION003_vtable, 31, "STEAMUGC_INTERFACE_VERSION003");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION004_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION004, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION004_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION004_vtable, 33, "STEAMUGC_INTERFACE_VERSION004");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint32_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, int8_t *pbIsImage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pbIsImage = pbIsImage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION005_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION005, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION005_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION005_vtable, 46, "STEAMUGC_INTERFACE_VERSION005");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint32_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, int8_t *pbIsImage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pbIsImage = pbIsImage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION006_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION006, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION006_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION006_vtable, 50, "STEAMUGC_INTERFACE_VERSION006");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint32_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, int8_t *pbIsImage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pbIsImage = pbIsImage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads, &params );
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION007_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION007, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION007_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION007_vtable, 58, "STEAMUGC_INTERFACE_VERSION007");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint32_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads, &params );
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION008_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION008, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION008_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION008_vtable, 63, "STEAMUGC_INTERFACE_VERSION008");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint64_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnOnlyIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnOnlyIDs = bReturnOnlyIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads, &params );
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION009_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION009, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION009_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION009_vtable, 67, "STEAMUGC_INTERFACE_VERSION009");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint64_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnOnlyIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnOnlyIDs = bReturnOnlyIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads, &params );
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION010_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION010, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION010_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION010_vtable, 74, "STEAMUGC_INTERFACE_VERSION010");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, const char *pchCursor)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_2_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .pchCursor = pchCursor,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchCursor, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryAllUGCRequest_2, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint64_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnOnlyIDs(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnOnlyIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnOnlyIDs_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnOnlyIDs = bReturnOnlyIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnOnlyIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnPlaytimeStats(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnPlaytimeStats_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetReturnPlaytimeStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowLegacyUpload(struct w_steam_iface *_this, uint64_t handle, int8_t bAllowLegacyUpload)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowLegacyUpload_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bAllowLegacyUpload = bAllowLegacyUpload,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetAllowLegacyUpload, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_SuspendDownloads, &params );
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_StartPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTrackingForAllItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_StopPlaytimeTrackingForAllItems, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_AddAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_RemoveAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetAppDependencies(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetAppDependencies_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_GetAppDependencies, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION012_DeleteItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION012_DeleteItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION012_DeleteItem, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION012_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION012, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION012_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION012_vtable, 76, "STEAMUGC_INTERFACE_VERSION012");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, const char *pchCursor)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_2_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .pchCursor = pchCursor,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchCursor, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_2, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint64_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pchKey, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_2_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnOnlyIDs(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnOnlyIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnOnlyIDs_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnOnlyIDs = bReturnOnlyIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnOnlyIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnPlaytimeStats(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnPlaytimeStats_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnPlaytimeStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowLegacyUpload(struct w_steam_iface *_this, uint64_t handle, int8_t bAllowLegacyUpload)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowLegacyUpload_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bAllowLegacyUpload = bAllowLegacyUpload,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowLegacyUpload, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAllItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAllItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_SuspendDownloads, &params );
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTrackingForAllItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTrackingForAllItems, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetAppDependencies(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetAppDependencies_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetAppDependencies, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION013_DeleteItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION013_DeleteItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION013_DeleteItem, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION013_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION013, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION013_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION013_vtable, 78, "STEAMUGC_INTERFACE_VERSION013");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, const char *pchCursor)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest_2_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .pchCursor = pchCursor,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchCursor, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest_2, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCResult, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint64_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pchKey, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag_2_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTagGroup(struct w_steam_iface *_this, uint64_t handle, const w_SteamParamStringArray_t *pTagGroups)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTagGroup_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagGroups = pTagGroups,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTagGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnOnlyIDs(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnOnlyIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnOnlyIDs_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnOnlyIDs = bReturnOnlyIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnOnlyIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnPlaytimeStats(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnPlaytimeStats_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnPlaytimeStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowLegacyUpload(struct w_steam_iface *_this, uint64_t handle, int8_t bAllowLegacyUpload)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowLegacyUpload_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bAllowLegacyUpload = bAllowLegacyUpload,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowLegacyUpload, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAllItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAllItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_SuspendDownloads, &params );
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTrackingForAllItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTrackingForAllItems, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetAppDependencies(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetAppDependencies_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetAppDependencies, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION014_DeleteItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION014_DeleteItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION014_DeleteItem, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION014_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION014, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION014_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION014_vtable, 79, "STEAMUGC_INTERFACE_VERSION014");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, const char *pchCursor)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_2_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .pchCursor = pchCursor,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchCursor, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_2, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCResult, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t indexTag, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .indexTag = indexTag,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTagDisplayName(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t indexTag, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTagDisplayName_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .indexTag = indexTag,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTagDisplayName, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint64_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pchKey, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_2_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTagGroup(struct w_steam_iface *_this, uint64_t handle, const w_SteamParamStringArray_t *pTagGroups)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTagGroup_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagGroups = pTagGroups,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTagGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnOnlyIDs(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnOnlyIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnOnlyIDs_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnOnlyIDs = bReturnOnlyIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnOnlyIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnPlaytimeStats(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnPlaytimeStats_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnPlaytimeStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowLegacyUpload(struct w_steam_iface *_this, uint64_t handle, int8_t bAllowLegacyUpload)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowLegacyUpload_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bAllowLegacyUpload = bAllowLegacyUpload,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowLegacyUpload, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAllItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAllItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_SuspendDownloads, &params );
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTrackingForAllItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTrackingForAllItems, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetAppDependencies(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetAppDependencies_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetAppDependencies, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_DeleteItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_DeleteItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_DeleteItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_ShowWorkshopEULA(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_ShowWorkshopEULA_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_ShowWorkshopEULA, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetWorkshopEULAStatus(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetWorkshopEULAStatus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetWorkshopEULAStatus, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION015_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION015, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION015_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION015(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION015_vtable, 84, "STEAMUGC_INTERFACE_VERSION015");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, const char *pchCursor)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .pchCursor = pchCursor,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchCursor, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t indexTag, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .indexTag = indexTag,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t indexTag, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .indexTag = indexTag,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint64_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pchKey, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup(struct w_steam_iface *_this, uint64_t handle, const w_SteamParamStringArray_t *pTagGroups)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagGroups = pTagGroups,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnOnlyIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnOnlyIDs = bReturnOnlyIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange(struct w_steam_iface *_this, uint64_t handle, uint32_t rtStart, uint32_t rtEnd)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .rtStart = rtStart,
        .rtEnd = rtEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange(struct w_steam_iface *_this, uint64_t handle, uint32_t rtStart, uint32_t rtEnd)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .rtStart = rtStart,
        .rtEnd = rtEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload(struct w_steam_iface *_this, uint64_t handle, int8_t bAllowLegacyUpload)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bAllowLegacyUpload = bAllowLegacyUpload,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads, &params );
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION016_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION016, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION016_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION016(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION016");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION016_vtable, 86, "STEAMUGC_INTERFACE_VERSION016");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, const char *pchCursor)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .pchCursor = pchCursor,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchCursor, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t indexTag, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .indexTag = indexTag,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t indexTag, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .indexTag = indexTag,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint64_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pchKey, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t *pvecDescriptors, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecDescriptors = pvecDescriptors,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup(struct w_steam_iface *_this, uint64_t handle, const w_SteamParamStringArray_t *pTagGroups)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagGroups = pTagGroups,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnOnlyIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnOnlyIDs = bReturnOnlyIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange(struct w_steam_iface *_this, uint64_t handle, uint32_t rtStart, uint32_t rtEnd)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .rtStart = rtStart,
        .rtEnd = rtEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange(struct w_steam_iface *_this, uint64_t handle, uint32_t rtStart, uint32_t rtEnd)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .rtStart = rtStart,
        .rtEnd = rtEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload(struct w_steam_iface *_this, uint64_t handle, int8_t bAllowLegacyUpload)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bAllowLegacyUpload = bAllowLegacyUpload,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor(struct w_steam_iface *_this, uint64_t handle, uint32_t descid)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .descid = descid,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor(struct w_steam_iface *_this, uint64_t handle, uint32_t descid)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .descid = descid,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads, &params );
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION017_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION017, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION017_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION017(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION017");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION017_vtable, 89, "STEAMUGC_INTERFACE_VERSION017");
    r->u_iface = u_iface;
    return r;
}

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

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, const char *pchCursor)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .pchCursor = pchCursor,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchCursor, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_128x *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t indexTag, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .indexTag = indexTag,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t indexTag, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .indexTag = indexTag,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint64_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pchKey, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t *pvecDescriptors, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecDescriptors = pvecDescriptors,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup(struct w_steam_iface *_this, uint64_t handle, const w_SteamParamStringArray_t *pTagGroups)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagGroups = pTagGroups,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnOnlyIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnOnlyIDs = bReturnOnlyIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange(struct w_steam_iface *_this, uint64_t handle, uint32_t rtStart, uint32_t rtEnd)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .rtStart = rtStart,
        .rtEnd = rtEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange(struct w_steam_iface *_this, uint64_t handle, uint32_t rtStart, uint32_t rtEnd)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .rtStart = rtStart,
        .rtEnd = rtEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags, int8_t bAllowAdminTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
        .bAllowAdminTags = bAllowAdminTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload(struct w_steam_iface *_this, uint64_t handle, int8_t bAllowLegacyUpload)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bAllowLegacyUpload = bAllowLegacyUpload,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor(struct w_steam_iface *_this, uint64_t handle, uint32_t descid)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .descid = descid,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor(struct w_steam_iface *_this, uint64_t handle, uint32_t descid)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .descid = descid,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads, &params );
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences(struct w_steam_iface *_this, uint32_t *pvecDescriptors, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences_params params =
    {
        .linux_side = _this->u_iface,
        .pvecDescriptors = pvecDescriptors,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION018_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION018, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION018_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION018(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION018");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION018_vtable, 90, "STEAMUGC_INTERFACE_VERSION018");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUserUGCRequest, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_2, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUGCDetailsRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SendQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCResult, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTag, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTagDisplayName, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCPreviewURL, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCMetadata, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCChildren, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCStatistic, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCAdditionalPreview, 40)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag, 36)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_2, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSupportedGameVersions, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSupportedGameVersionData, 32)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCContentDescriptors, 24)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_ReleaseQueryUGCRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTagGroup, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddExcludedTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnOnlyIDs, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnLongDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnChildren, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnAdditionalPreviews, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnTotalOnly, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnPlaytimeStats, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowCachedResponse, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAdminQuery, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetCloudFileNameFilter, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetMatchAnyTag, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetSearchText, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRankedByTrendDays, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeCreatedDateRange, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeUpdatedDateRange, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RequestUGCDetails, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTitle, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemDescription, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemUpdateLanguage, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemMetadata, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemVisibility, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTags, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemContent, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowLegacyUpload, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAllItemKeyValueTags, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemKeyValueTags, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemKeyValueTag, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewVideo, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewFile, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewVideo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemPreview, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddContentDescriptor, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveContentDescriptor, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRequiredGameVersions, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubmitItemUpdate, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemUpdateProgress, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetUserItemVote, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserItemVote, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemToFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemFromFavorites, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_UnsubscribeItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSubscribedItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSubscribedItems, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemState, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemInstallInfo, 28)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemDownloadInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_DownloadItem, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_BInitWorkshopForGameServer, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SuspendDownloads, 8)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTracking, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTrackingForAllItems, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveDependency, 20)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAppDependency, 16)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetAppDependencies, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_DeleteItem, 12)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_ShowWorkshopEULA, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetWorkshopEULAStatus, 4)
DEFINE_THISCALL_WRAPPER(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserContentDescriptorPreferences, 12)

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUserUGCRequest(struct w_steam_iface *_this, uint32_t unAccountID, uint32_t eListType, uint32_t eMatchingUGCType, uint32_t eSortOrder, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUserUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .unAccountID = unAccountID,
        .eListType = eListType,
        .eMatchingUGCType = eMatchingUGCType,
        .eSortOrder = eSortOrder,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUserUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, uint32_t unPage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .unPage = unPage,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_2(struct w_steam_iface *_this, uint32_t eQueryType, uint32_t eMatchingeMatchingUGCTypeFileType, uint32_t nCreatorAppID, uint32_t nConsumerAppID, const char *pchCursor)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_2_params params =
    {
        .linux_side = _this->u_iface,
        .eQueryType = eQueryType,
        .eMatchingeMatchingUGCTypeFileType = eMatchingeMatchingUGCTypeFileType,
        .nCreatorAppID = nCreatorAppID,
        .nConsumerAppID = nConsumerAppID,
        .pchCursor = pchCursor,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchCursor, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_2, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUGCDetailsRequest(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUGCDetailsRequest_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUGCDetailsRequest, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SendQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SendQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SendQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCResult(struct w_steam_iface *_this, uint64_t handle, uint32_t index, w_SteamUGCDetails_t_160 *pDetails)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCResult_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pDetails = pDetails,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCResult, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t indexTag, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .indexTag = indexTag,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTagDisplayName(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t indexTag, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTagDisplayName_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .indexTag = indexTag,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTagDisplayName, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCPreviewURL(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchURL, uint32_t cchURLSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCPreviewURL_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchURL = pchURL,
        .cchURLSize = cchURLSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCPreviewURL, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCMetadata(struct w_steam_iface *_this, uint64_t handle, uint32_t index, char *pchMetadata, uint32_t cchMetadatasize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchMetadata = pchMetadata,
        .cchMetadatasize = cchMetadatasize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCChildren(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCStatistic(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t eStatType, uint64_t *pStatValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCStatistic_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .eStatType = eStatType,
        .pStatValue = pStatValue,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCStatistic, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCAdditionalPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t previewIndex, char *pchURLOrVideoID, uint32_t cchURLSize, char *pchOriginalFileName, uint32_t cchOriginalFileNameSize, uint32_t *pPreviewType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCAdditionalPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .previewIndex = previewIndex,
        .pchURLOrVideoID = pchURLOrVideoID,
        .cchURLSize = cchURLSize,
        .pchOriginalFileName = pchOriginalFileName,
        .cchOriginalFileNameSize = cchOriginalFileNameSize,
        .pPreviewType = pPreviewType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCAdditionalPreview, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumKeyValueTags(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t keyValueTagIndex, char *pchKey, uint32_t cchKeySize, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .keyValueTagIndex = keyValueTagIndex,
        .pchKey = pchKey,
        .cchKeySize = cchKeySize,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_2(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pchKey, char *pchValue, uint32_t cchValueSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_2_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cchValueSize = cchValueSize,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_2, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSupportedGameVersions(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSupportedGameVersions_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSupportedGameVersions, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSupportedGameVersionData(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t versionIndex, char *pchGameBranchMin, char *pchGameBranchMax, uint32_t cchGameBranchSize)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSupportedGameVersionData_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .versionIndex = versionIndex,
        .pchGameBranchMin = pchGameBranchMin,
        .pchGameBranchMax = pchGameBranchMax,
        .cchGameBranchSize = cchGameBranchSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSupportedGameVersionData, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCContentDescriptors(struct w_steam_iface *_this, uint64_t handle, uint32_t index, uint32_t *pvecDescriptors, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCContentDescriptors_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pvecDescriptors = pvecDescriptors,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCContentDescriptors, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_ReleaseQueryUGCRequest(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_ReleaseQueryUGCRequest_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_ReleaseQueryUGCRequest, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTagGroup(struct w_steam_iface *_this, uint64_t handle, const w_SteamParamStringArray_t *pTagGroups)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTagGroup_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagGroups = pTagGroups,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTagGroup, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddExcludedTag(struct w_steam_iface *_this, uint64_t handle, const char *pTagName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddExcludedTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pTagName = pTagName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pTagName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddExcludedTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnOnlyIDs(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnOnlyIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnOnlyIDs_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnOnlyIDs = bReturnOnlyIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnOnlyIDs, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnKeyValueTags(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnKeyValueTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnKeyValueTags = bReturnKeyValueTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnLongDescription(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnLongDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnLongDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnLongDescription = bReturnLongDescription,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnLongDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnMetadata(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnMetadata)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnMetadata = bReturnMetadata,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnChildren(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnChildren)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnChildren_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnChildren = bReturnChildren,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnChildren, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnAdditionalPreviews(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnAdditionalPreviews)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnAdditionalPreviews_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnAdditionalPreviews = bReturnAdditionalPreviews,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnAdditionalPreviews, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnTotalOnly(struct w_steam_iface *_this, uint64_t handle, int8_t bReturnTotalOnly)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnTotalOnly_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bReturnTotalOnly = bReturnTotalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnTotalOnly, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnPlaytimeStats(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnPlaytimeStats_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnPlaytimeStats, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowCachedResponse(struct w_steam_iface *_this, uint64_t handle, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowCachedResponse_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowCachedResponse, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAdminQuery(struct w_steam_iface *_this, uint64_t handle, int8_t bAdminQuery)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAdminQuery_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bAdminQuery = bAdminQuery,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAdminQuery, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetCloudFileNameFilter(struct w_steam_iface *_this, uint64_t handle, const char *pMatchCloudFileName)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetCloudFileNameFilter_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pMatchCloudFileName = pMatchCloudFileName,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pMatchCloudFileName, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetCloudFileNameFilter, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetMatchAnyTag(struct w_steam_iface *_this, uint64_t handle, int8_t bMatchAnyTag)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetMatchAnyTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bMatchAnyTag = bMatchAnyTag,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetMatchAnyTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetSearchText(struct w_steam_iface *_this, uint64_t handle, const char *pSearchText)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetSearchText_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pSearchText = pSearchText,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pSearchText, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetSearchText, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRankedByTrendDays(struct w_steam_iface *_this, uint64_t handle, uint32_t unDays)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRankedByTrendDays_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .unDays = unDays,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRankedByTrendDays, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeCreatedDateRange(struct w_steam_iface *_this, uint64_t handle, uint32_t rtStart, uint32_t rtEnd)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeCreatedDateRange_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .rtStart = rtStart,
        .rtEnd = rtEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeCreatedDateRange, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeUpdatedDateRange(struct w_steam_iface *_this, uint64_t handle, uint32_t rtStart, uint32_t rtEnd)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeUpdatedDateRange_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .rtStart = rtStart,
        .rtEnd = rtEnd,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeUpdatedDateRange, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pKey, const char *pValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pKey = pKey,
        .pValue = pValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pKey, -1);
    IsBadStringPtrA(pValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredKeyValueTag, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RequestUGCDetails(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t unMaxAgeSeconds)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RequestUGCDetails_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .unMaxAgeSeconds = unMaxAgeSeconds,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RequestUGCDetails, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateItem(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint32_t eFileType)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateItem_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .eFileType = eFileType,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartItemUpdate(struct w_steam_iface *_this, uint32_t nConsumerAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .nConsumerAppId = nConsumerAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartItemUpdate, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTitle(struct w_steam_iface *_this, uint64_t handle, const char *pchTitle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTitle_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchTitle = pchTitle,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchTitle, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTitle, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemDescription(struct w_steam_iface *_this, uint64_t handle, const char *pchDescription)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemDescription_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchDescription = pchDescription,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchDescription, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemDescription, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemUpdateLanguage(struct w_steam_iface *_this, uint64_t handle, const char *pchLanguage)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemUpdateLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchLanguage, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemUpdateLanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemMetadata(struct w_steam_iface *_this, uint64_t handle, const char *pchMetaData)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemMetadata_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchMetaData = pchMetaData,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchMetaData, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemMetadata, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemVisibility(struct w_steam_iface *_this, uint64_t handle, uint32_t eVisibility)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemVisibility_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .eVisibility = eVisibility,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemVisibility, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTags(struct w_steam_iface *_this, uint64_t updateHandle, const w_SteamParamStringArray_t *pTags, int8_t bAllowAdminTags)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTags_params params =
    {
        .linux_side = _this->u_iface,
        .updateHandle = updateHandle,
        .pTags = pTags,
        .bAllowAdminTags = bAllowAdminTags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemContent(struct w_steam_iface *_this, uint64_t handle, const char *pszContentFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemContent_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszContentFolder = pszContentFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszContentFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemContent, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemPreview(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowLegacyUpload(struct w_steam_iface *_this, uint64_t handle, int8_t bAllowLegacyUpload)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowLegacyUpload_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .bAllowLegacyUpload = bAllowLegacyUpload,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowLegacyUpload, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAllItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAllItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAllItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemKeyValueTags(struct w_steam_iface *_this, uint64_t handle, const char *pchKey)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemKeyValueTags_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemKeyValueTags, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemKeyValueTag(struct w_steam_iface *_this, uint64_t handle, const char *pchKey, const char *pchValue)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemKeyValueTag_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchKey, -1);
    IsBadStringPtrA(pchValue, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemKeyValueTag, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, const char *pszPreviewFile, uint32_t type)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszPreviewFile = pszPreviewFile,
        .type = type,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewFile(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszPreviewFile)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewFile_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszPreviewFile = pszPreviewFile,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszPreviewFile, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewFile, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewVideo(struct w_steam_iface *_this, uint64_t handle, uint32_t index, const char *pszVideoID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewVideo_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
        .pszVideoID = pszVideoID,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszVideoID, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewVideo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemPreview(struct w_steam_iface *_this, uint64_t handle, uint32_t index)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemPreview_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .index = index,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemPreview, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddContentDescriptor(struct w_steam_iface *_this, uint64_t handle, uint32_t descid)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddContentDescriptor_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .descid = descid,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddContentDescriptor, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveContentDescriptor(struct w_steam_iface *_this, uint64_t handle, uint32_t descid)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveContentDescriptor_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .descid = descid,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveContentDescriptor, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRequiredGameVersions(struct w_steam_iface *_this, uint64_t handle, const char *pszGameBranchMin, const char *pszGameBranchMax)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRequiredGameVersions_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pszGameBranchMin = pszGameBranchMin,
        .pszGameBranchMax = pszGameBranchMax,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszGameBranchMin, -1);
    IsBadStringPtrA(pszGameBranchMax, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRequiredGameVersions, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubmitItemUpdate(struct w_steam_iface *_this, uint64_t handle, const char *pchChangeNote)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubmitItemUpdate_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .pchChangeNote = pchChangeNote,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pchChangeNote, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubmitItemUpdate, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemUpdateProgress(struct w_steam_iface *_this, uint64_t handle, uint64_t *punBytesProcessed, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemUpdateProgress_params params =
    {
        .linux_side = _this->u_iface,
        .handle = handle,
        .punBytesProcessed = punBytesProcessed,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemUpdateProgress, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bVoteUp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bVoteUp = bVoteUp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserItemVote(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserItemVote_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserItemVote, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemToFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemToFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemToFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemFromFavorites(struct w_steam_iface *_this, uint32_t nAppId, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemFromFavorites_params params =
    {
        .linux_side = _this->u_iface,
        .nAppId = nAppId,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemFromFavorites, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubscribeItem, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_UnsubscribeItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UnsubscribeItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_UnsubscribeItem, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSubscribedItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSubscribedItems(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSubscribedItems_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSubscribedItems, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemState(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemState_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemInstallInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punSizeOnDisk, char *pchFolder, uint32_t cchFolderSize, uint32_t *punTimeStamp)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemInstallInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punSizeOnDisk = punSizeOnDisk,
        .pchFolder = pchFolder,
        .cchFolderSize = cchFolderSize,
        .punTimeStamp = punTimeStamp,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemInstallInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemDownloadInfo(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemDownloadInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemDownloadInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_DownloadItem(struct w_steam_iface *_this, uint64_t nPublishedFileID, int8_t bHighPriority)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_DownloadItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .bHighPriority = bHighPriority,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_DownloadItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_BInitWorkshopForGameServer(struct w_steam_iface *_this, uint32_t unWorkshopDepotID, const char *pszFolder)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_BInitWorkshopForGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .unWorkshopDepotID = unWorkshopDepotID,
        .pszFolder = pszFolder,
    };
    TRACE("%p\n", _this);
    IsBadStringPtrA(pszFolder, -1);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_BInitWorkshopForGameServer, &params );
    return params._ret;
}

void __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SuspendDownloads(struct w_steam_iface *_this, int8_t bSuspend)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SuspendDownloads_params params =
    {
        .linux_side = _this->u_iface,
        .bSuspend = bSuspend,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_SuspendDownloads, &params );
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTracking(struct w_steam_iface *_this, uint64_t *pvecPublishedFileID, uint32_t unNumPublishedFileIDs)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTracking_params params =
    {
        .linux_side = _this->u_iface,
        .pvecPublishedFileID = pvecPublishedFileID,
        .unNumPublishedFileIDs = unNumPublishedFileIDs,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTracking, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTrackingForAllItems(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTrackingForAllItems_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTrackingForAllItems, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveDependency(struct w_steam_iface *_this, uint64_t nParentPublishedFileID, uint64_t nChildPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nParentPublishedFileID = nParentPublishedFileID,
        .nChildPublishedFileID = nChildPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAppDependency(struct w_steam_iface *_this, uint64_t nPublishedFileID, uint32_t nAppID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAppDependency_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAppDependency, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetAppDependencies(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetAppDependencies_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetAppDependencies, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_DeleteItem(struct w_steam_iface *_this, uint64_t nPublishedFileID)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_DeleteItem_params params =
    {
        .linux_side = _this->u_iface,
        .nPublishedFileID = nPublishedFileID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_DeleteItem, &params );
    return params._ret;
}

int8_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_ShowWorkshopEULA(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_ShowWorkshopEULA_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_ShowWorkshopEULA, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetWorkshopEULAStatus(struct w_steam_iface *_this)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetWorkshopEULAStatus_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetWorkshopEULAStatus, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserContentDescriptorPreferences(struct w_steam_iface *_this, uint32_t *pvecDescriptors, uint32_t cMaxEntries)
{
    struct ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserContentDescriptorPreferences_params params =
    {
        .linux_side = _this->u_iface,
        .pvecDescriptors = pvecDescriptors,
        .cMaxEntries = cMaxEntries,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserContentDescriptorPreferences, &params );
    return params._ret;
}

extern vtable_ptr winISteamUGC_STEAMUGC_INTERFACE_VERSION020_vtable;

DEFINE_RTTI_DATA0(winISteamUGC_STEAMUGC_INTERFACE_VERSION020, 0, ".?AVISteamUGC@@")

__ASM_BLOCK_BEGIN(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_vtables)
    __ASM_VTABLE(winISteamUGC_STEAMUGC_INTERFACE_VERSION020,
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUserUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryAllUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateQueryUGCDetailsRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SendQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCResult)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCTagDisplayName)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCPreviewURL)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCStatistic)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCAdditionalPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCNumKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag_2)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSupportedGameVersions)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSupportedGameVersionData)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetQueryUGCContentDescriptors)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_ReleaseQueryUGCRequest)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredTagGroup)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddExcludedTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnOnlyIDs)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnLongDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnChildren)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnAdditionalPreviews)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnTotalOnly)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetReturnPlaytimeStats)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowCachedResponse)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAdminQuery)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetCloudFileNameFilter)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetMatchAnyTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetSearchText)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRankedByTrendDays)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeCreatedDateRange)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetTimeUpdatedDateRange)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddRequiredKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RequestUGCDetails)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_CreateItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTitle)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemDescription)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemUpdateLanguage)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemMetadata)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemVisibility)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemContent)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetAllowLegacyUpload)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAllItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemKeyValueTags)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemKeyValueTag)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewFile)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_UpdateItemPreviewVideo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemPreview)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddContentDescriptor)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveContentDescriptor)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetRequiredGameVersions)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubmitItemUpdate)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemUpdateProgress)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserItemVote)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddItemToFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveItemFromFavorites)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_UnsubscribeItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetNumSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetSubscribedItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemState)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemInstallInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetItemDownloadInfo)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_DownloadItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_BInitWorkshopForGameServer)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_SuspendDownloads)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StartPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTracking)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_StopPlaytimeTrackingForAllItems)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_AddAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_RemoveAppDependency)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetAppDependencies)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_DeleteItem)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_ShowWorkshopEULA)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetWorkshopEULAStatus)
        VTABLE_ADD_FUNC(winISteamUGC_STEAMUGC_INTERFACE_VERSION020_GetUserContentDescriptorPreferences)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUGC_STEAMUGC_INTERFACE_VERSION020(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMUGC_INTERFACE_VERSION020");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUGC_STEAMUGC_INTERFACE_VERSION020_vtable, 94, "STEAMUGC_INTERFACE_VERSION020");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamUGC_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION001_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION002_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION003_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION004_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION005_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION006_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION007_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION008_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION009_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION010_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION012_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION013_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION014_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION015_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION016_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION017_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION018_rtti( base );
    init_winISteamUGC_STEAMUGC_INTERFACE_VERSION020_rtti( base );
#endif /* __x86_64__ */
}
