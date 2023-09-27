struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
    const void *pvData;
    int32 cubData;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileWrite_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead_params
{
    void *linux_side;
    int32 _ret;
    const char *pchFile;
    void *pvData;
    int32 cubDataToRead;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileRead_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileForget_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileDelete_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileShare_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
    ERemoteStoragePlatform eRemoteStoragePlatform;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetSyncPlatforms_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FileExists_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_FilePersisted_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize_params
{
    void *linux_side;
    int32 _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileSize_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp_params
{
    void *linux_side;
    int64 _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileTimestamp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms_params
{
    void *linux_side;
    ERemoteStoragePlatform _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetSyncPlatforms_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount_params
{
    void *linux_side;
    int32 _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileCount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize_params
{
    void *linux_side;
    const char *_ret;
    int iFile;
    int32 *pnFileSizeInBytes;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetFileNameAndSize_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota_params
{
    void *linux_side;
    bool _ret;
    int32 *pnTotalBytes;
    int32 *puAvailableBytes;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetQuota_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForAccount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_IsCloudEnabledForApp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp_params
{
    void *linux_side;
    bool bEnabled;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetCloudEnabledForApp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    UGCHandle_t hContent;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCDownload_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress_params
{
    void *linux_side;
    bool _ret;
    UGCHandle_t hContent;
    int32 *pnBytesDownloaded;
    int32 *pnBytesExpected;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDownloadProgress_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails_params
{
    void *linux_side;
    bool _ret;
    UGCHandle_t hContent;
    AppId_t *pnAppID;
    char **ppchName;
    int32 *pnFileSizeInBytes;
    CSteamID *pSteamIDOwner;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUGCDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead_params
{
    void *linux_side;
    int32 _ret;
    UGCHandle_t hContent;
    void *pvData;
    int32 cubDataToRead;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UGCRead_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount_params
{
    void *linux_side;
    int32 _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCCount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle_params
{
    void *linux_side;
    UGCHandle_t _ret;
    int32 iCachedContent;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetCachedUGCHandle_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchFile;
    const char *pchPreviewFile;
    AppId_t nConsumerAppId;
    const char *pchTitle;
    const char *pchDescription;
    ERemoteStoragePublishedFileVisibility eVisibility;
    SteamParamStringArray_t *pTags;
    EWorkshopFileType eWorkshopFileType;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishWorkshopFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest_params
{
    void *linux_side;
    PublishedFileUpdateHandle_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CreatePublishedFileUpdateRequest_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile_params
{
    void *linux_side;
    bool _ret;
    PublishedFileUpdateHandle_t updateHandle;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile_params
{
    void *linux_side;
    bool _ret;
    PublishedFileUpdateHandle_t updateHandle;
    const char *pchPreviewFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFilePreviewFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle_params
{
    void *linux_side;
    bool _ret;
    PublishedFileUpdateHandle_t updateHandle;
    const char *pchTitle;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTitle_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription_params
{
    void *linux_side;
    bool _ret;
    PublishedFileUpdateHandle_t updateHandle;
    const char *pchDescription;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileDescription_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility_params
{
    void *linux_side;
    bool _ret;
    PublishedFileUpdateHandle_t updateHandle;
    ERemoteStoragePublishedFileVisibility eVisibility;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileVisibility_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags_params
{
    void *linux_side;
    bool _ret;
    PublishedFileUpdateHandle_t updateHandle;
    SteamParamStringArray_t *pTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileTags_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileUpdateHandle_t updateHandle;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_CommitPublishedFileUpdate_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedFileDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_DeletePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    uint32 unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserPublishedFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SubscribePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    uint32 unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSubscribedFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UnsubscribePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription_params
{
    void *linux_side;
    bool _ret;
    PublishedFileUpdateHandle_t updateHandle;
    const char *pchChangeDescription;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdatePublishedFileSetChangeDescription_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetPublishedItemVoteDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
    bool bVoteUp;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_UpdateUserPublishedItemVote_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_GetUserPublishedItemVoteDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamId;
    uint32 unStartIndex;
    SteamParamStringArray_t *pRequiredTags;
    SteamParamStringArray_t *pExcludedTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumerateUserSharedWorkshopFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    EWorkshopVideoProvider eVideoProvider;
    const char *pchVideoAccount;
    const char *pchVideoIdentifier;
    const char *pchPreviewFile;
    AppId_t nConsumerAppId;
    const char *pchTitle;
    const char *pchDescription;
    ERemoteStoragePublishedFileVisibility eVisibility;
    SteamParamStringArray_t *pTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_PublishVideo_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
    EWorkshopFileAction eAction;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_SetUserPublishedFileAction_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    EWorkshopFileAction eAction;
    uint32 unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedFilesByUserAction_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    EWorkshopEnumerationType eEnumerationType;
    uint32 unStartIndex;
    uint32 unCount;
    uint32 unDays;
    SteamParamStringArray_t *pTags;
    SteamParamStringArray_t *pUserTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION007_EnumeratePublishedWorkshopFiles_params *params );

