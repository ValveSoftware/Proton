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
void cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot_params *params )
{
    params->_ret = ((IVRScreenshots*)params->linux_side)->RequestScreenshot((vr::ScreenshotHandle_t *)params->pOutScreenshotHandle, (vr::EVRScreenshotType)params->type, (const char *)params->pchPreviewFilename, (const char *)params->pchVRFilename);
}

void cppIVRScreenshots_IVRScreenshots_001_HookScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_HookScreenshot_params *params )
{
    params->_ret = ((IVRScreenshots*)params->linux_side)->HookScreenshot((const vr::EVRScreenshotType *)params->pSupportedTypes, (int)params->numTypes);
}

void cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType( struct cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType_params *params )
{
    params->_ret = ((IVRScreenshots*)params->linux_side)->GetScreenshotPropertyType((vr::ScreenshotHandle_t)params->screenshotHandle, (vr::EVRScreenshotError *)params->pError);
}

void cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename( struct cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename_params *params )
{
    params->_ret = ((IVRScreenshots*)params->linux_side)->GetScreenshotPropertyFilename((vr::ScreenshotHandle_t)params->screenshotHandle, (vr::EVRScreenshotPropertyFilenames)params->filenameType, (char *)params->pchFilename, (uint32_t)params->cchFilename, (vr::EVRScreenshotError *)params->pError);
}

void cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress( struct cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress_params *params )
{
    params->_ret = ((IVRScreenshots*)params->linux_side)->UpdateScreenshotProgress((vr::ScreenshotHandle_t)params->screenshotHandle, (float)params->flProgress);
}

void cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot_params *params )
{
    params->_ret = ((IVRScreenshots*)params->linux_side)->TakeStereoScreenshot((vr::ScreenshotHandle_t *)params->pOutScreenshotHandle, (const char *)params->pchPreviewFilename, (const char *)params->pchVRFilename);
}

void cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot_params *params )
{
    params->_ret = ((IVRScreenshots*)params->linux_side)->SubmitScreenshot((vr::ScreenshotHandle_t)params->screenshotHandle, (vr::EVRScreenshotType)params->type, (const char *)params->pchSourcePreviewFilename, (const char *)params->pchSourceVRFilename);
}

#ifdef __cplusplus
}
#endif
