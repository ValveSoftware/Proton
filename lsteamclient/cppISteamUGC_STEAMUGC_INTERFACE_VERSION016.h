struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016;
struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest_params
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
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUserUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    uint32_t unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    const char *pchCursor;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryAllUGCRequest_2_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateQueryUGCDetailsRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SendQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    winSteamUGCDetails_t_155 *pDetails;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCResult_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t indexTag;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t indexTag;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCTagDisplayName_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    char *pchURL;
    uint32_t cchURLSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCPreviewURL_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    char *pchMetadata;
    uint32_t cchMetadatasize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t eStatType;
    uint64_t *pStatValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCStatistic_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview_params
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
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCAdditionalPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCNumKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_params
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
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pchKey;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetQueryUGCKeyValueTag_2_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ReleaseQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const SteamParamStringArray_t *pTagGroups;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredTagGroup_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddExcludedTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnOnlyIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnOnlyIDs_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnKeyValueTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnLongDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnLongDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnMetadata;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnChildren;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnAdditionalPreviews;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnTotalOnly;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnTotalOnly_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetReturnPlaytimeStats_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowCachedResponse_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pMatchCloudFileName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetCloudFileNameFilter_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bMatchAnyTag;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetMatchAnyTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pSearchText;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetSearchText_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetRankedByTrendDays_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t rtStart;
    uint32_t rtEnd;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeCreatedDateRange_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t rtStart;
    uint32_t rtEnd;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetTimeUpdatedDateRange_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddRequiredKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RequestUGCDetails_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint32_t eFileType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_CreateItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchTitle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTitle_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemUpdateLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchMetaData;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t eVisibility;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemVisibility_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const SteamParamStringArray_t *pTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszContentFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemContent_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bAllowLegacyUpload;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetAllowLegacyUpload_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAllItemKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchKey;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
    uint32_t type;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UpdateItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
    const char *pchChangeNote;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubmitItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint64_t *punBytesProcessed;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemUpdateProgress_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    bool bVoteUp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddItemToFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveItemFromFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_UnsubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetNumSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemState_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punSizeOnDisk;
    char *pchFolder;
    uint32_t cchFolderSize;
    uint32_t *punTimeStamp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemInstallInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punBytesDownloaded;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetItemDownloadInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    bool bHighPriority;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DownloadItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer_params
{
    void *linux_side;
    bool _ret;
    uint32_t unWorkshopDepotID;
    const char *pszFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_BInitWorkshopForGameServer_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_SuspendDownloads_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StartPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_StopPlaytimeTrackingForAllItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nParentPublishedFileID;
    uint64_t nChildPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nParentPublishedFileID;
    uint64_t nChildPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t nAppID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_AddAppDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t nAppID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_RemoveAppDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetAppDependencies_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_DeleteItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_ShowWorkshopEULA_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION016_GetWorkshopEULAStatus_params *params );

