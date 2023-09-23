struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017;
struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest_params
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
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUserUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    uint32_t unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    const char *pchCursor;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryAllUGCRequest_2_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateQueryUGCDetailsRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SendQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    winSteamUGCDetails_t_157 *pDetails;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCResult_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t indexTag;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t indexTag;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCTagDisplayName_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    char *pchURL;
    uint32_t cchURLSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCPreviewURL_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    char *pchMetadata;
    uint32_t cchMetadatasize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t eStatType;
    uint64_t *pStatValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCStatistic_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview_params
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
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCAdditionalPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCNumKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_params
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
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pchKey;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCKeyValueTag_2_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t *pvecDescriptors;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetQueryUGCContentDescriptors_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ReleaseQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const SteamParamStringArray_t *pTagGroups;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredTagGroup_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddExcludedTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnOnlyIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnOnlyIDs_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnKeyValueTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnLongDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnLongDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnMetadata;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnChildren;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnAdditionalPreviews;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnTotalOnly;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnTotalOnly_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetReturnPlaytimeStats_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowCachedResponse_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pMatchCloudFileName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetCloudFileNameFilter_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bMatchAnyTag;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetMatchAnyTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pSearchText;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetSearchText_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetRankedByTrendDays_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t rtStart;
    uint32_t rtEnd;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeCreatedDateRange_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t rtStart;
    uint32_t rtEnd;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetTimeUpdatedDateRange_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddRequiredKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RequestUGCDetails_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint32_t eFileType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_CreateItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchTitle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTitle_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemUpdateLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchMetaData;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t eVisibility;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemVisibility_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const SteamParamStringArray_t *pTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszContentFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemContent_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bAllowLegacyUpload;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetAllowLegacyUpload_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAllItemKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchKey;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
    uint32_t type;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UpdateItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t descid;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddContentDescriptor_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t descid;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveContentDescriptor_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
    const char *pchChangeNote;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubmitItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint64_t *punBytesProcessed;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemUpdateProgress_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    bool bVoteUp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddItemToFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveItemFromFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_UnsubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetNumSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemState_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punSizeOnDisk;
    char *pchFolder;
    uint32_t cchFolderSize;
    uint32_t *punTimeStamp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemInstallInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punBytesDownloaded;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetItemDownloadInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    bool bHighPriority;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DownloadItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer_params
{
    void *linux_side;
    bool _ret;
    uint32_t unWorkshopDepotID;
    const char *pszFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_BInitWorkshopForGameServer_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_SuspendDownloads_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StartPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_StopPlaytimeTrackingForAllItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nParentPublishedFileID;
    uint64_t nChildPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nParentPublishedFileID;
    uint64_t nChildPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t nAppID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_AddAppDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t nAppID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_RemoveAppDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetAppDependencies_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_DeleteItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_ShowWorkshopEULA_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION017_GetWorkshopEULAStatus_params *params );

