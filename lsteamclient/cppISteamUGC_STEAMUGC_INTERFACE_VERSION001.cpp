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
void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryUserUGCRequest( (AccountID_t)params->unAccountID, (EUserUGCList)params->eListType, (EUGCMatchingUGCType)params->eMatchingUGCType, (EUserUGCListSortOrder)params->eSortOrder, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (uint32)params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->CreateQueryAllUGCRequest( (EUGCQuery)params->eQueryType, (EUGCMatchingUGCType)params->eMatchingeMatchingUGCTypeFileType, (AppId_t)params->nCreatorAppID, (AppId_t)params->nConsumerAppID, (uint32)params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SendQueryUGCRequest( (UGCQueryHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult_params *params )
{
    SteamUGCDetails_t lin_pDetails;
    win_to_lin_struct_SteamUGCDetails_t_128( params->pDetails, &lin_pDetails );
    params->_ret = ((ISteamUGC*)params->linux_side)->GetQueryUGCResult( (UGCQueryHandle_t)params->handle, (uint32)params->index, &lin_pDetails );
    lin_to_win_struct_SteamUGCDetails_t_128( &lin_pDetails, params->pDetails );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->ReleaseQueryUGCRequest( (UGCQueryHandle_t)params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddRequiredTag( (UGCQueryHandle_t)params->handle, (const char *)params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->AddExcludedTag( (UGCQueryHandle_t)params->handle, (const char *)params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnLongDescription( (UGCQueryHandle_t)params->handle, (bool)params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetReturnTotalOnly( (UGCQueryHandle_t)params->handle, (bool)params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetCloudFileNameFilter( (UGCQueryHandle_t)params->handle, (const char *)params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetMatchAnyTag( (UGCQueryHandle_t)params->handle, (bool)params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetSearchText( (UGCQueryHandle_t)params->handle, (const char *)params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->SetRankedByTrendDays( (UGCQueryHandle_t)params->handle, (uint32)params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails_params *params )
{
    params->_ret = ((ISteamUGC*)params->linux_side)->RequestUGCDetails( (PublishedFileId_t)params->nPublishedFileID );
}

#ifdef __cplusplus
}
#endif
