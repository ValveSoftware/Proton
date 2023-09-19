struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot_params
{
    void *linux_side;
    uint32_t _ret;
    void *pubRGB;
    uint32_t cubRGB;
    int32_t nWidth;
    int32_t nHeight;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchFilename;
    const char *pchThumbnailFilename;
    int32_t nWidth;
    int32_t nHeight;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot_params
{
    void *linux_side;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots_params
{
    void *linux_side;
    bool bHook;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation_params
{
    void *linux_side;
    bool _ret;
    uint32_t hScreenshot;
    const char *pchLocation;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser_params
{
    void *linux_side;
    bool _ret;
    uint32_t hScreenshot;
    CSteamID steamID;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser_params *params );

