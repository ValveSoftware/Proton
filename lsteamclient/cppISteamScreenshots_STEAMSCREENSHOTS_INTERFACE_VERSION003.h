extern ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_WriteScreenshot(void *, void *, uint32, int, int);
extern ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddScreenshotToLibrary(void *, const char *, const char *, int, int);
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TriggerScreenshot(void *);
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_HookScreenshots(void *, bool);
extern bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_SetLocation(void *, ScreenshotHandle, const char *);
extern bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagUser(void *, ScreenshotHandle, CSteamID);
extern bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_TagPublishedFile(void *, ScreenshotHandle, PublishedFileId_t);
extern bool cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_IsScreenshotsHooked(void *);
extern ScreenshotHandle cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION003_AddVRScreenshotToLibrary(void *, EVRScreenshotType, const char *, const char *);
