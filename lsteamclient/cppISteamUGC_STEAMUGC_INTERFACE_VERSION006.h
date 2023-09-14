struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest_params
{
    void *linux_side;
    UGCQueryHandle_t _ret;
    AccountID_t unAccountID;
    uint32_t eListType;
    uint32_t eMatchingUGCType;
    uint32_t eSortOrder;
    AppId_t nCreatorAppID;
    AppId_t nConsumerAppID;
    uint32_t unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUserUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest_params
{
    void *linux_side;
    UGCQueryHandle_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    AppId_t nCreatorAppID;
    AppId_t nConsumerAppID;
    uint32_t unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryAllUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest_params
{
    void *linux_side;
    UGCQueryHandle_t _ret;
    PublishedFileId_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateQueryUGCDetailsRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    UGCQueryHandle_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SendQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32_t index;
    winSteamUGCDetails_t_133x *pDetails;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCResult_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32_t index;
    char *pchURL;
    uint32_t cchURLSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCPreviewURL_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32_t index;
    char *pchMetadata;
    uint32_t cchMetadatasize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32_t index;
    PublishedFileId_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32_t index;
    uint32_t eStatType;
    uint32_t *pStatValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCStatistic_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews_params
{
    void *linux_side;
    uint32_t _ret;
    UGCQueryHandle_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCNumAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32_t index;
    uint32_t previewIndex;
    char *pchURLOrVideoID;
    uint32_t cchURLSize;
    bool *pbIsImage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetQueryUGCAdditionalPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_ReleaseQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddRequiredTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddExcludedTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnLongDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnLongDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnMetadata;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnChildren;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnAdditionalPreviews;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnTotalOnly;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetReturnTotalOnly_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetAllowCachedResponse_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pMatchCloudFileName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetCloudFileNameFilter_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bMatchAnyTag;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetMatchAnyTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pSearchText;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetSearchText_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetRankedByTrendDays_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RequestUGCDetails_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    AppId_t nConsumerAppId;
    uint32_t eFileType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_CreateItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate_params
{
    void *linux_side;
    UGCUpdateHandle_t _ret;
    AppId_t nConsumerAppId;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_StartItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchTitle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTitle_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemUpdateLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchMetaData;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    uint32_t eVisibility;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemVisibility_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t updateHandle;
    const SteamParamStringArray_t *pTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pszContentFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemContent_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    UGCUpdateHandle_t handle;
    const char *pchChangeNote;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubmitItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress_params
{
    void *linux_side;
    uint32_t _ret;
    UGCUpdateHandle_t handle;
    uint64_t *punBytesProcessed;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemUpdateProgress_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
    bool bVoteUp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    AppId_t nAppId;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_AddItemToFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    AppId_t nAppId;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_RemoveItemFromFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_SubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_UnsubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetNumSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
    PublishedFileId_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState_params
{
    void *linux_side;
    uint32_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemState_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo_params
{
    void *linux_side;
    bool _ret;
    PublishedFileId_t nPublishedFileID;
    uint64_t *punSizeOnDisk;
    char *pchFolder;
    uint32_t cchFolderSize;
    uint32_t *punTimeStamp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemInstallInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo_params
{
    void *linux_side;
    bool _ret;
    PublishedFileId_t nPublishedFileID;
    uint64_t *punBytesDownloaded;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_GetItemDownloadInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem_params
{
    void *linux_side;
    bool _ret;
    PublishedFileId_t nPublishedFileID;
    bool bHighPriority;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION006_DownloadItem_params *params );

