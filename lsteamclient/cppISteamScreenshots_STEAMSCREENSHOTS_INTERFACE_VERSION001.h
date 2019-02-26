extern ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot(void *, void *, uint32, int, int);
extern ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary(void *, const char *, const char *, int, int);
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot(void *);
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots(void *, bool);
extern bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation(void *, ScreenshotHandle, const char *);
extern bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser(void *, ScreenshotHandle, CSteamID);
