struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
    const void *pvData;
    int32 cubData;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileWrite_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead_params
{
    void *linux_side;
    int32 _ret;
    const char *pchFile;
    void *pvData;
    int32 cubDataToRead;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileRead_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileForget_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileDelete_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileShare_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
    ERemoteStoragePlatform eRemoteStoragePlatform;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetSyncPlatforms_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FileExists_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_FilePersisted_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize_params
{
    void *linux_side;
    int32 _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileSize_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp_params
{
    void *linux_side;
    int64 _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileTimestamp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms_params
{
    void *linux_side;
    ERemoteStoragePlatform _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetSyncPlatforms_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount_params
{
    void *linux_side;
    int32 _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileCount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize_params
{
    void *linux_side;
    const char *_ret;
    int iFile;
    int32 *pnFileSizeInBytes;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetFileNameAndSize_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota_params
{
    void *linux_side;
    bool _ret;
    int32 *pnTotalBytes;
    int32 *puAvailableBytes;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetQuota_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForAccount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_IsCloudEnabledForApp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp_params
{
    void *linux_side;
    bool bEnabled;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SetCloudEnabledForApp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    UGCHandle_t hContent;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCDownload_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails_params
{
    void *linux_side;
    bool _ret;
    UGCHandle_t hContent;
    AppId_t *pnAppID;
    char **ppchName;
    int32 *pnFileSizeInBytes;
    CSteamID *pSteamIDOwner;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetUGCDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead_params
{
    void *linux_side;
    int32 _ret;
    UGCHandle_t hContent;
    void *pvData;
    int32 cubDataToRead;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UGCRead_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount_params
{
    void *linux_side;
    int32 _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCCount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle_params
{
    void *linux_side;
    UGCHandle_t _ret;
    int32 iCachedContent;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetCachedUGCHandle_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile_params
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
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchFile;
    const char *pchPreviewFile;
    AppId_t nConsumerAppId;
    const char *pchTitle;
    const char *pchDescription;
    SteamParamStringArray_t *pTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_PublishWorkshopFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    RemoteStorageUpdatePublishedFileRequest_t updatePublishedFileRequest;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UpdatePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_GetPublishedFileDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_DeletePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    uint32 unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserPublishedFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_SubscribePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    uint32 unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_EnumerateUserSubscribedFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION005_UnsubscribePublishedFile_params *params );

