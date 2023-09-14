#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot_params
{
    void *linux_side;
    EVRScreenshotError _ret;
    ScreenshotHandle_t *pOutScreenshotHandle;
    EVRScreenshotType type;
    const char *pchPreviewFilename;
    const char *pchVRFilename;
};
extern void cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot_params *params );

struct cppIVRScreenshots_IVRScreenshots_001_HookScreenshot_params
{
    void *linux_side;
    EVRScreenshotError _ret;
    const EVRScreenshotType *pSupportedTypes;
    int32_t numTypes;
};
extern void cppIVRScreenshots_IVRScreenshots_001_HookScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_HookScreenshot_params *params );

struct cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType_params
{
    void *linux_side;
    EVRScreenshotType _ret;
    ScreenshotHandle_t screenshotHandle;
    EVRScreenshotError *pError;
};
extern void cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType( struct cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType_params *params );

struct cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename_params
{
    void *linux_side;
    uint32_t _ret;
    ScreenshotHandle_t screenshotHandle;
    EVRScreenshotPropertyFilenames filenameType;
    char *pchFilename;
    uint32_t cchFilename;
    EVRScreenshotError *pError;
};
extern void cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename( struct cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename_params *params );

struct cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress_params
{
    void *linux_side;
    EVRScreenshotError _ret;
    ScreenshotHandle_t screenshotHandle;
    float flProgress;
};
extern void cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress( struct cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress_params *params );

struct cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot_params
{
    void *linux_side;
    EVRScreenshotError _ret;
    ScreenshotHandle_t *pOutScreenshotHandle;
    const char *pchPreviewFilename;
    const char *pchVRFilename;
};
extern void cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot_params *params );

struct cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot_params
{
    void *linux_side;
    EVRScreenshotError _ret;
    ScreenshotHandle_t screenshotHandle;
    EVRScreenshotType type;
    const char *pchSourcePreviewFilename;
    const char *pchSourceVRFilename;
};
extern void cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot_params *params );

#ifdef __cplusplus
}
#endif
