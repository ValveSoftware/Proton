#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_128/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_128
#include "struct_converters.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION001.h"
UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest(void *linux_side, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    _ret = ((ISteamUGC*)linux_side)->CreateQueryUserUGCRequest((AccountID_t)unAccountID, (EUserUGCList)eListType, (EUGCMatchingUGCType)eMatchingUGCType, (EUserUGCListSortOrder)eSortOrder, (AppId_t)nCreatorAppID, (AppId_t)nConsumerAppID, (uint32)unPage);
    return (_ret);
}

UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest(void *linux_side, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    _ret = ((ISteamUGC*)linux_side)->CreateQueryAllUGCRequest((EUGCQuery)eQueryType, (EUGCMatchingUGCType)eMatchingeMatchingUGCTypeFileType, (AppId_t)nCreatorAppID, (AppId_t)nConsumerAppID, (uint32)unPage);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest(void *linux_side, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->SendQueryUGCRequest((UGCQueryHandle_t)handle);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult(void *linux_side, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_128 *pDetails)
{
    bool _ret;
    SteamUGCDetails_t lin_pDetails;
    win_to_lin_struct_SteamUGCDetails_t_128(pDetails, &lin_pDetails);
    _ret = ((ISteamUGC*)linux_side)->GetQueryUGCResult((UGCQueryHandle_t)handle, (uint32)index, &lin_pDetails);
    lin_to_win_struct_SteamUGCDetails_t_128(&lin_pDetails, pDetails);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest(void *linux_side, UGCQueryHandle_t handle)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->ReleaseQueryUGCRequest((UGCQueryHandle_t)handle);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag(void *linux_side, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->AddRequiredTag((UGCQueryHandle_t)handle, (const char *)pTagName);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag(void *linux_side, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->AddExcludedTag((UGCQueryHandle_t)handle, (const char *)pTagName);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription(void *linux_side, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetReturnLongDescription((UGCQueryHandle_t)handle, (bool)bReturnLongDescription);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly(void *linux_side, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetReturnTotalOnly((UGCQueryHandle_t)handle, (bool)bReturnTotalOnly);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter(void *linux_side, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetCloudFileNameFilter((UGCQueryHandle_t)handle, (const char *)pMatchCloudFileName);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag(void *linux_side, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetMatchAnyTag((UGCQueryHandle_t)handle, (bool)bMatchAnyTag);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText(void *linux_side, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetSearchText((UGCQueryHandle_t)handle, (const char *)pSearchText);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays(void *linux_side, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetRankedByTrendDays((UGCQueryHandle_t)handle, (uint32)unDays);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->RequestUGCDetails((PublishedFileId_t)nPublishedFileID);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
