struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
    const void *pvData;
    int32_t cubData;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileWrite_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchFile;
    void *pvData;
    int32_t cubDataToRead;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileRead_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileForget_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileDelete_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileShare_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
    uint32_t eRemoteStoragePlatform;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetSyncPlatforms_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FileExists_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_FilePersisted_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileSize_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp_params
{
    void *linux_side;
    int64_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileTimestamp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetSyncPlatforms_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileCount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize_params
{
    void *linux_side;
    const char *_ret;
    int32_t iFile;
    int32_t *pnFileSizeInBytes;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetFileNameAndSize_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota_params
{
    void *linux_side;
    bool _ret;
    int32_t *pnTotalBytes;
    int32_t *puAvailableBytes;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetQuota_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForAccount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_IsCloudEnabledForApp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp_params
{
    void *linux_side;
    bool bEnabled;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetCloudEnabledForApp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hContent;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCDownload_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress_params
{
    void *linux_side;
    bool _ret;
    uint64_t hContent;
    int32_t *pnBytesDownloaded;
    int32_t *pnBytesExpected;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDownloadProgress_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails_params
{
    void *linux_side;
    bool _ret;
    uint64_t hContent;
    uint32_t *pnAppID;
    char **ppchName;
    int32_t *pnFileSizeInBytes;
    CSteamID *pSteamIDOwner;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUGCDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t hContent;
    void *pvData;
    int32_t cubDataToRead;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UGCRead_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCCount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle_params
{
    void *linux_side;
    uint64_t _ret;
    int32_t iCachedContent;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetCachedUGCHandle_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchFile;
    const char *pchPreviewFile;
    uint32_t nConsumerAppId;
    const char *pchTitle;
    const char *pchDescription;
    uint32_t eVisibility;
    SteamParamStringArray_t *pTags;
    uint32_t eWorkshopFileType;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishWorkshopFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CreatePublishedFileUpdateRequest_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const char *pchPreviewFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFilePreviewFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const char *pchTitle;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTitle_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const char *pchDescription;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileDescription_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    uint32_t eVisibility;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileVisibility_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    SteamParamStringArray_t *pTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileTags_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t updateHandle;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_CommitPublishedFileUpdate_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedFileDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_DeletePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserPublishedFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SubscribePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSubscribedFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UnsubscribePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const char *pchChangeDescription;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdatePublishedFileSetChangeDescription_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetPublishedItemVoteDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
    bool bVoteUp;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_UpdateUserPublishedItemVote_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_GetUserPublishedItemVoteDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamId;
    uint32_t unStartIndex;
    SteamParamStringArray_t *pRequiredTags;
    SteamParamStringArray_t *pExcludedTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumerateUserSharedWorkshopFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchVideoURL;
    const char *pchPreviewFile;
    uint32_t nConsumerAppId;
    const char *pchTitle;
    const char *pchDescription;
    uint32_t eVisibility;
    SteamParamStringArray_t *pTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_PublishVideo_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
    uint32_t eAction;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_SetUserPublishedFileAction_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eAction;
    uint32_t unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedFilesByUserAction_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eEnumerationType;
    uint32_t unStartIndex;
    uint32_t unCount;
    uint32_t unDays;
    SteamParamStringArray_t *pTags;
    SteamParamStringArray_t *pUserTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION006_EnumeratePublishedWorkshopFiles_params *params );

