struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUserUGCRequest_params
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
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUserUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    uint32_t unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_2_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    const char *pchCursor;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryAllUGCRequest_2_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUGCDetailsRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateQueryUGCDetailsRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SendQueryUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SendQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    winSteamUGCDetails_t_146 *pDetails;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCResult_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCPreviewURL_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    char *pchURL;
    uint32_t cchURLSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCPreviewURL_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    char *pchMetadata;
    uint32_t cchMetadatasize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCChildren_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCStatistic_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t eStatType;
    uint64_t *pStatValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCStatistic_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumAdditionalPreviews_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCAdditionalPreview_params
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
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCAdditionalPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumKeyValueTags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCNumKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_params
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
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_2_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pchKey;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetQueryUGCKeyValueTag_2_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_ReleaseQueryUGCRequest_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_ReleaseQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddExcludedTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddExcludedTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnOnlyIDs_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnOnlyIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnOnlyIDs_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnKeyValueTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnLongDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnLongDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnLongDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnMetadata;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnChildren_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnChildren;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnAdditionalPreviews_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnAdditionalPreviews;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnTotalOnly_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnTotalOnly;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnTotalOnly_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnPlaytimeStats_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetReturnPlaytimeStats_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetLanguage_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowCachedResponse_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowCachedResponse_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetCloudFileNameFilter_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pMatchCloudFileName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetCloudFileNameFilter_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetMatchAnyTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bMatchAnyTag;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetMatchAnyTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetSearchText_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pSearchText;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetSearchText_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetRankedByTrendDays_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetRankedByTrendDays_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddRequiredKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RequestUGCDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RequestUGCDetails_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint32_t eFileType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_CreateItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTitle_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchTitle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTitle_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemUpdateLanguage_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemUpdateLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchMetaData;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemVisibility_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t eVisibility;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemVisibility_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const SteamParamStringArray_t *pTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemContent_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszContentFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemContent_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowLegacyUpload_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bAllowLegacyUpload;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowLegacyUpload( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetAllowLegacyUpload_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAllItemKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAllItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAllItemKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchKey;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
    uint32_t type;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UpdateItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubmitItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
    const char *pchChangeNote;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubmitItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemUpdateProgress_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint64_t *punBytesProcessed;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemUpdateProgress_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetUserItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    bool bVoteUp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetUserItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemToFavorites_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddItemToFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemFromFavorites_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveItemFromFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UnsubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_UnsubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetNumSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetNumSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemState_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemState_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemInstallInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punSizeOnDisk;
    char *pchFolder;
    uint32_t cchFolderSize;
    uint32_t *punTimeStamp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemInstallInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemDownloadInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punBytesDownloaded;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetItemDownloadInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_DownloadItem_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    bool bHighPriority;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_DownloadItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_BInitWorkshopForGameServer_params
{
    void *linux_side;
    bool _ret;
    uint32_t unWorkshopDepotID;
    const char *pszFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_BInitWorkshopForGameServer_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SuspendDownloads_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_SuspendDownloads_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartPlaytimeTracking_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StartPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTracking_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTrackingForAllItems_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_StopPlaytimeTrackingForAllItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nParentPublishedFileID;
    uint64_t nChildPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nParentPublishedFileID;
    uint64_t nChildPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddAppDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t nAppID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_AddAppDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAppDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t nAppID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_RemoveAppDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetAppDependencies_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_GetAppDependencies_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_DeleteItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION013_DeleteItem_params *params );

