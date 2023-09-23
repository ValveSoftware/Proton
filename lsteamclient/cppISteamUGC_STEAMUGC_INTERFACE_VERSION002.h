struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002;
struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest_params
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
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    uint32_t unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    winSteamUGCDetails_t_130 *pDetails;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnLongDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnTotalOnly;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pMatchCloudFileName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bMatchAnyTag;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pSearchText;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint32_t eFileType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchTitle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t eVisibility;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const SteamParamStringArray_t *pTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszContentFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
    const char *pchChangeNote;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint64_t *punBytesProcessed;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punSizeOnDisk;
    char *pchFolder;
    uint32_t cchFolderSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    bool *pbNeedsUpdate;
    bool *pbIsDownloading;
    uint64_t *punBytesDownloaded;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo_params *params );

