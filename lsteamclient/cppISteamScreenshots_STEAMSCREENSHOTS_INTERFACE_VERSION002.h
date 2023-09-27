struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot_params
{
    void *linux_side;
    ScreenshotHandle _ret;
    void *pubRGB;
    uint32 cubRGB;
    int nWidth;
    int nHeight;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary_params
{
    void *linux_side;
    ScreenshotHandle _ret;
    const char *pchFilename;
    const char *pchThumbnailFilename;
    int nWidth;
    int nHeight;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot_params
{
    void *linux_side;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots_params
{
    void *linux_side;
    bool bHook;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation_params
{
    void *linux_side;
    bool _ret;
    ScreenshotHandle hScreenshot;
    const char *pchLocation;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser_params
{
    void *linux_side;
    bool _ret;
    ScreenshotHandle hScreenshot;
    CSteamID steamID;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile_params
{
    void *linux_side;
    bool _ret;
    ScreenshotHandle hScreenshot;
    PublishedFileId_t unPublishedFileID;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile_params *params );

