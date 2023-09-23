#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRScreenshots_IVRScreenshots_001.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVRScreenshotError cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot(void *linux_side, ScreenshotHandle_t *pOutScreenshotHandle, EVRScreenshotType type, const char *pchPreviewFilename, const char *pchVRFilename)
{
    vr::EVRScreenshotError _ret;
    _ret = ((IVRScreenshots*)linux_side)->RequestScreenshot((vr::ScreenshotHandle_t *)pOutScreenshotHandle, (vr::EVRScreenshotType)type, (const char *)pchPreviewFilename, (const char *)pchVRFilename);
    return _ret;
}

vr::EVRScreenshotError cppIVRScreenshots_IVRScreenshots_001_HookScreenshot(void *linux_side, const EVRScreenshotType *pSupportedTypes, int numTypes)
{
    vr::EVRScreenshotError _ret;
    _ret = ((IVRScreenshots*)linux_side)->HookScreenshot((const vr::EVRScreenshotType *)pSupportedTypes, (int)numTypes);
    return _ret;
}

vr::EVRScreenshotType cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType(void *linux_side, ScreenshotHandle_t screenshotHandle, EVRScreenshotError *pError)
{
    vr::EVRScreenshotType _ret;
    _ret = ((IVRScreenshots*)linux_side)->GetScreenshotPropertyType((vr::ScreenshotHandle_t)screenshotHandle, (vr::EVRScreenshotError *)pError);
    return _ret;
}

uint32_t cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename(void *linux_side, ScreenshotHandle_t screenshotHandle, EVRScreenshotPropertyFilenames filenameType, char *pchFilename, uint32_t cchFilename, EVRScreenshotError *pError)
{
    uint32_t _ret;
    _ret = ((IVRScreenshots*)linux_side)->GetScreenshotPropertyFilename((vr::ScreenshotHandle_t)screenshotHandle, (vr::EVRScreenshotPropertyFilenames)filenameType, (char *)pchFilename, (uint32_t)cchFilename, (vr::EVRScreenshotError *)pError);
    return _ret;
}

vr::EVRScreenshotError cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress(void *linux_side, ScreenshotHandle_t screenshotHandle, float flProgress)
{
    vr::EVRScreenshotError _ret;
    _ret = ((IVRScreenshots*)linux_side)->UpdateScreenshotProgress((vr::ScreenshotHandle_t)screenshotHandle, (float)flProgress);
    return _ret;
}

vr::EVRScreenshotError cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot(void *linux_side, ScreenshotHandle_t *pOutScreenshotHandle, const char *pchPreviewFilename, const char *pchVRFilename)
{
    vr::EVRScreenshotError _ret;
    _ret = ((IVRScreenshots*)linux_side)->TakeStereoScreenshot((vr::ScreenshotHandle_t *)pOutScreenshotHandle, (const char *)pchPreviewFilename, (const char *)pchVRFilename);
    return _ret;
}

vr::EVRScreenshotError cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot(void *linux_side, ScreenshotHandle_t screenshotHandle, EVRScreenshotType type, const char *pchSourcePreviewFilename, const char *pchSourceVRFilename)
{
    vr::EVRScreenshotError _ret;
    _ret = ((IVRScreenshots*)linux_side)->SubmitScreenshot((vr::ScreenshotHandle_t)screenshotHandle, (vr::EVRScreenshotType)type, (const char *)pchSourcePreviewFilename, (const char *)pchSourceVRFilename);
    return _ret;
}

#ifdef __cplusplus
}
#endif
