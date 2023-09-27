struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest_params
{
    void *linux_side;
    UGCQueryHandle_t _ret;
    AccountID_t unAccountID;
    EUserUGCList eListType;
    EUGCMatchingUGCType eMatchingUGCType;
    EUserUGCListSortOrder eSortOrder;
    AppId_t nCreatorAppID;
    AppId_t nConsumerAppID;
    uint32 unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest_params
{
    void *linux_side;
    UGCQueryHandle_t _ret;
    EUGCQuery eQueryType;
    EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType;
    AppId_t nCreatorAppID;
    AppId_t nConsumerAppID;
    uint32 unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    UGCQueryHandle_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 index;
    winSteamUGCDetails_t_132x *pDetails;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnLongDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnTotalOnly;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pMatchCloudFileName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bMatchAnyTag;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pSearchText;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
    uint32 unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    AppId_t nConsumerAppId;
    EWorkshopFileType eFileType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate_params
{
    void *linux_side;
    UGCUpdateHandle_t _ret;
    AppId_t nConsumerAppId;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchTitle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    ERemoteStoragePublishedFileVisibility eVisibility;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t updateHandle;
    const SteamParamStringArray_t *pTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pszContentFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    UGCUpdateHandle_t handle;
    const char *pchChangeNote;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress_params
{
    void *linux_side;
    EItemUpdateStatus _ret;
    UGCUpdateHandle_t handle;
    uint64 *punBytesProcessed;
    uint64 *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems_params
{
    void *linux_side;
    uint32 _ret;
    PublishedFileId_t *pvecPublishedFileID;
    uint32 cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState_params
{
    void *linux_side;
    uint32 _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo_params
{
    void *linux_side;
    bool _ret;
    PublishedFileId_t nPublishedFileID;
    uint64 *punSizeOnDisk;
    char *pchFolder;
    uint32 cchFolderSize;
    uint32 *punTimeStamp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo_params
{
    void *linux_side;
    bool _ret;
    PublishedFileId_t nPublishedFileID;
    uint64 *punBytesDownloaded;
    uint64 *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem_params
{
    void *linux_side;
    bool _ret;
    PublishedFileId_t nPublishedFileID;
    bool bHighPriority;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem_params *params );

