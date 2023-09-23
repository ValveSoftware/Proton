struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009;
struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unAccountID;
    uint32_t eListType;
    uint32_t eMatchingUGCType;
    uint32_t eSortOrder;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    uint32_t unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUserUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    uint32_t unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryAllUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateQueryUGCDetailsRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SendQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    winSteamUGCDetails_t_139 *pDetails;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCResult_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    char *pchURL;
    uint32_t cchURLSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCPreviewURL_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    char *pchMetadata;
    uint32_t cchMetadatasize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t eStatType;
    uint64_t *pStatValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCStatistic_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t previewIndex;
    char *pchURLOrVideoID;
    uint32_t cchURLSize;
    char *pchOriginalFileName;
    uint32_t cchOriginalFileNameSize;
    uint32_t *pPreviewType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCAdditionalPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCNumKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t keyValueTagIndex;
    char *pchKey;
    uint32_t cchKeySize;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetQueryUGCKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_ReleaseQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddExcludedTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnOnlyIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnOnlyIDs_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnKeyValueTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnLongDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnLongDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnMetadata;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnChildren;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnAdditionalPreviews;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnTotalOnly;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetReturnTotalOnly_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetAllowCachedResponse_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pMatchCloudFileName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetCloudFileNameFilter_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bMatchAnyTag;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetMatchAnyTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pSearchText;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetSearchText_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetRankedByTrendDays_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddRequiredKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RequestUGCDetails_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint32_t eFileType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_CreateItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchTitle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTitle_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemUpdateLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchMetaData;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t eVisibility;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemVisibility_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const SteamParamStringArray_t *pTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszContentFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemContent_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchKey;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
    uint32_t type;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UpdateItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
    const char *pchChangeNote;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubmitItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint64_t *punBytesProcessed;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemUpdateProgress_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    bool bVoteUp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_AddItemToFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_RemoveItemFromFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_UnsubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetNumSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemState_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punSizeOnDisk;
    char *pchFolder;
    uint32_t cchFolderSize;
    uint32_t *punTimeStamp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemInstallInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punBytesDownloaded;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_GetItemDownloadInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    bool bHighPriority;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_DownloadItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer_params
{
    void *linux_side;
    bool _ret;
    uint32_t unWorkshopDepotID;
    const char *pszFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_BInitWorkshopForGameServer_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_SuspendDownloads_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StartPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION009_StopPlaytimeTrackingForAllItems_params *params );

