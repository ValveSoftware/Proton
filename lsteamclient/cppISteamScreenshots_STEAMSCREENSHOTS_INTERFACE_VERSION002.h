extern ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot(void *, void *, uint32, int, int);
extern ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary(void *, const char *, const char *, int, int);
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot(void *);
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots(void *, bool);
extern bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation(void *, ScreenshotHandle, const char *);
extern bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser(void *, ScreenshotHandle, CSteamID);
extern bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile(void *, ScreenshotHandle, PublishedFileId_t);
