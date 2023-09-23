#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_137/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_137
#include "struct_converters.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION008.h"

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008
{
#ifdef __cplusplus
    virtual uint64_t CreateQueryUserUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryAllUGCRequest( uint32_t, uint32_t, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint64_t CreateQueryUGCDetailsRequest( uint64_t *, uint32_t ) = 0;
    virtual uint64_t SendQueryUGCRequest( uint64_t ) = 0;
    virtual bool GetQueryUGCResult( uint64_t, uint32_t, SteamUGCDetails_t * ) = 0;
    virtual bool GetQueryUGCPreviewURL( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCMetadata( uint64_t, uint32_t, char *, uint32_t ) = 0;
    virtual bool GetQueryUGCChildren( uint64_t, uint32_t, uint64_t *, uint32_t ) = 0;
    virtual bool GetQueryUGCStatistic( uint64_t, uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumAdditionalPreviews( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCAdditionalPreview( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetQueryUGCNumKeyValueTags( uint64_t, uint32_t ) = 0;
    virtual bool GetQueryUGCKeyValueTag( uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t ) = 0;
    virtual bool ReleaseQueryUGCRequest( uint64_t ) = 0;
    virtual bool AddRequiredTag( uint64_t, const char * ) = 0;
    virtual bool AddExcludedTag( uint64_t, const char * ) = 0;
    virtual bool SetReturnKeyValueTags( uint64_t, bool ) = 0;
    virtual bool SetReturnLongDescription( uint64_t, bool ) = 0;
    virtual bool SetReturnMetadata( uint64_t, bool ) = 0;
    virtual bool SetReturnChildren( uint64_t, bool ) = 0;
    virtual bool SetReturnAdditionalPreviews( uint64_t, bool ) = 0;
    virtual bool SetReturnTotalOnly( uint64_t, bool ) = 0;
    virtual bool SetLanguage( uint64_t, const char * ) = 0;
    virtual bool SetAllowCachedResponse( uint64_t, uint32_t ) = 0;
    virtual bool SetCloudFileNameFilter( uint64_t, const char * ) = 0;
    virtual bool SetMatchAnyTag( uint64_t, bool ) = 0;
    virtual bool SetSearchText( uint64_t, const char * ) = 0;
    virtual bool SetRankedByTrendDays( uint64_t, uint32_t ) = 0;
    virtual bool AddRequiredKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual uint64_t RequestUGCDetails( uint64_t, uint32_t ) = 0;
    virtual uint64_t CreateItem( uint32_t, uint32_t ) = 0;
    virtual uint64_t StartItemUpdate( uint32_t, uint64_t ) = 0;
    virtual bool SetItemTitle( uint64_t, const char * ) = 0;
    virtual bool SetItemDescription( uint64_t, const char * ) = 0;
    virtual bool SetItemUpdateLanguage( uint64_t, const char * ) = 0;
    virtual bool SetItemMetadata( uint64_t, const char * ) = 0;
    virtual bool SetItemVisibility( uint64_t, uint32_t ) = 0;
    virtual bool SetItemTags( uint64_t, const SteamParamStringArray_t * ) = 0;
    virtual bool SetItemContent( uint64_t, const char * ) = 0;
    virtual bool SetItemPreview( uint64_t, const char * ) = 0;
    virtual bool RemoveItemKeyValueTags( uint64_t, const char * ) = 0;
    virtual bool AddItemKeyValueTag( uint64_t, const char *, const char * ) = 0;
    virtual bool AddItemPreviewFile( uint64_t, const char *, uint32_t ) = 0;
    virtual bool AddItemPreviewVideo( uint64_t, const char * ) = 0;
    virtual bool UpdateItemPreviewFile( uint64_t, uint32_t, const char * ) = 0;
    virtual bool UpdateItemPreviewVideo( uint64_t, uint32_t, const char * ) = 0;
    virtual bool RemoveItemPreview( uint64_t, uint32_t ) = 0;
    virtual uint64_t SubmitItemUpdate( uint64_t, const char * ) = 0;
    virtual uint32_t GetItemUpdateProgress( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual uint64_t SetUserItemVote( uint64_t, bool ) = 0;
    virtual uint64_t GetUserItemVote( uint64_t ) = 0;
    virtual uint64_t AddItemToFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t RemoveItemFromFavorites( uint32_t, uint64_t ) = 0;
    virtual uint64_t SubscribeItem( uint64_t ) = 0;
    virtual uint64_t UnsubscribeItem( uint64_t ) = 0;
    virtual uint32_t GetNumSubscribedItems(  ) = 0;
    virtual uint32_t GetSubscribedItems( uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetItemState( uint64_t ) = 0;
    virtual bool GetItemInstallInfo( uint64_t, uint64_t *, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetItemDownloadInfo( uint64_t, uint64_t *, uint64_t * ) = 0;
    virtual bool DownloadItem( uint64_t, bool ) = 0;
    virtual bool BInitWorkshopForGameServer( uint32_t, const char * ) = 0;
    virtual void SuspendDownloads( bool ) = 0;
#endif /* __cplusplus */
};

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUserUGCRequest_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryAllUGCRequest_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateQueryUGCDetailsRequest_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->CreateQueryUGCDetailsRequest( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SendQueryUGCRequest_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCResult_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    SteamUGCDetails_t lin_pDetails;
    win_to_lin_struct_SteamUGCDetails_t_137( params->pDetails, &lin_pDetails );
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &lin_pDetails );
    lin_to_win_struct_SteamUGCDetails_t_137( &lin_pDetails, params->pDetails );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCPreviewURL_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetQueryUGCPreviewURL( params->handle, params->index, params->pchURL, params->cchURLSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCMetadata_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetQueryUGCMetadata( params->handle, params->index, params->pchMetadata, params->cchMetadatasize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCChildren_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetQueryUGCChildren( params->handle, params->index, params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCStatistic_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetQueryUGCStatistic( params->handle, params->index, params->eStatType, params->pStatValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumAdditionalPreviews_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumAdditionalPreviews( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCAdditionalPreview_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetQueryUGCAdditionalPreview( params->handle, params->index, params->previewIndex, params->pchURLOrVideoID, params->cchURLSize, params->pchOriginalFileName, params->cchOriginalFileNameSize, params->pPreviewType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCNumKeyValueTags_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumKeyValueTags( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetQueryUGCKeyValueTag_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetQueryUGCKeyValueTag( params->handle, params->index, params->keyValueTagIndex, params->pchKey, params->cchKeySize, params->pchValue, params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_ReleaseQueryUGCRequest_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredTag_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddExcludedTag_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnKeyValueTags_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetReturnKeyValueTags( params->handle, params->bReturnKeyValueTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnLongDescription_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnMetadata_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetReturnMetadata( params->handle, params->bReturnMetadata );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnChildren_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetReturnChildren( params->handle, params->bReturnChildren );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnAdditionalPreviews_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetReturnAdditionalPreviews( params->handle, params->bReturnAdditionalPreviews );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetReturnTotalOnly_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetLanguage_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetLanguage( params->handle, params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetAllowCachedResponse_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetCloudFileNameFilter_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetMatchAnyTag_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetSearchText_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetRankedByTrendDays_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddRequiredKeyValueTag_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->AddRequiredKeyValueTag( params->handle, params->pKey, params->pValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RequestUGCDetails_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_CreateItem_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_StartItemUpdate_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTitle_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemDescription_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemUpdateLanguage_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetItemUpdateLanguage( params->handle, params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemMetadata_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetItemMetadata( params->handle, params->pchMetaData );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemVisibility_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemTags_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemContent_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetItemContent( params->handle, params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetItemPreview_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetItemPreview( params->handle, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemKeyValueTags_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->RemoveItemKeyValueTags( params->handle, params->pchKey );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemKeyValueTag_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->AddItemKeyValueTag( params->handle, params->pchKey, params->pchValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewFile_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->AddItemPreviewFile( params->handle, params->pszPreviewFile, params->type );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemPreviewVideo_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->AddItemPreviewVideo( params->handle, params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewFile_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UpdateItemPreviewFile( params->handle, params->index, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UpdateItemPreviewVideo_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UpdateItemPreviewVideo( params->handle, params->index, params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemPreview_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->RemoveItemPreview( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubmitItemUpdate_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemUpdateProgress_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SetUserItemVote_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SetUserItemVote( params->nPublishedFileID, params->bVoteUp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetUserItemVote_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetUserItemVote( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_AddItemToFavorites_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->AddItemToFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_RemoveItemFromFavorites_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->RemoveItemFromFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SubscribeItem_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_UnsubscribeItem_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetNumSubscribedItems_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetSubscribedItems_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemState_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemInstallInfo_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_GetItemDownloadInfo_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, params->punBytesDownloaded, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_DownloadItem_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_BInitWorkshopForGameServer_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    params->_ret = iface->BInitWorkshopForGameServer( params->unWorkshopDepotID, params->pszFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008_SuspendDownloads_params *params )
{
    struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *iface = (struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION008 *)params->linux_side;
    iface->SuspendDownloads( params->bSuspend );
}

#ifdef __cplusplus
}
#endif
