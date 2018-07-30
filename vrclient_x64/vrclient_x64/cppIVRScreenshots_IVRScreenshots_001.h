#ifdef __cplusplus
extern "C" {
#endif
extern EVRScreenshotError cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot(void *, ScreenshotHandle_t *, EVRScreenshotType, const char *, const char *);
extern EVRScreenshotError cppIVRScreenshots_IVRScreenshots_001_HookScreenshot(void *, EVRScreenshotType *, int);
extern EVRScreenshotType cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType(void *, ScreenshotHandle_t, EVRScreenshotError *);
extern uint32_t cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename(void *, ScreenshotHandle_t, EVRScreenshotPropertyFilenames, char *, uint32_t, EVRScreenshotError *);
extern EVRScreenshotError cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress(void *, ScreenshotHandle_t, float);
extern EVRScreenshotError cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot(void *, ScreenshotHandle_t *, const char *, const char *);
extern EVRScreenshotError cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot(void *, ScreenshotHandle_t, EVRScreenshotType, const char *, const char *);
#ifdef __cplusplus
}
#endif
