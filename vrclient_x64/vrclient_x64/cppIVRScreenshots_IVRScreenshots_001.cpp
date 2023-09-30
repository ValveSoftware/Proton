/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRScreenshots_IVRScreenshots_001_RequestScreenshot( void *args )
{
    struct IVRScreenshots_IVRScreenshots_001_RequestScreenshot_params *params = (struct IVRScreenshots_IVRScreenshots_001_RequestScreenshot_params *)args;
    struct u_IVRScreenshots_IVRScreenshots_001 *iface = (struct u_IVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->RequestScreenshot( params->pOutScreenshotHandle, params->type, params->pchPreviewFilename, params->pchVRFilename );
    return 0;
}

NTSTATUS IVRScreenshots_IVRScreenshots_001_HookScreenshot( void *args )
{
    struct IVRScreenshots_IVRScreenshots_001_HookScreenshot_params *params = (struct IVRScreenshots_IVRScreenshots_001_HookScreenshot_params *)args;
    struct u_IVRScreenshots_IVRScreenshots_001 *iface = (struct u_IVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->HookScreenshot( params->pSupportedTypes, params->numTypes );
    return 0;
}

NTSTATUS IVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType( void *args )
{
    struct IVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType_params *params = (struct IVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType_params *)args;
    struct u_IVRScreenshots_IVRScreenshots_001 *iface = (struct u_IVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetScreenshotPropertyType( params->screenshotHandle, params->pError );
    return 0;
}

NTSTATUS IVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename( void *args )
{
    struct IVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename_params *params = (struct IVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename_params *)args;
    struct u_IVRScreenshots_IVRScreenshots_001 *iface = (struct u_IVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetScreenshotPropertyFilename( params->screenshotHandle, params->filenameType, params->pchFilename, params->cchFilename, params->pError );
    return 0;
}

NTSTATUS IVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress( void *args )
{
    struct IVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress_params *params = (struct IVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress_params *)args;
    struct u_IVRScreenshots_IVRScreenshots_001 *iface = (struct u_IVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->UpdateScreenshotProgress( params->screenshotHandle, params->flProgress );
    return 0;
}

NTSTATUS IVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot( void *args )
{
    struct IVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot_params *params = (struct IVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot_params *)args;
    struct u_IVRScreenshots_IVRScreenshots_001 *iface = (struct u_IVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->TakeStereoScreenshot( params->pOutScreenshotHandle, params->pchPreviewFilename, params->pchVRFilename );
    return 0;
}

NTSTATUS IVRScreenshots_IVRScreenshots_001_SubmitScreenshot( void *args )
{
    struct IVRScreenshots_IVRScreenshots_001_SubmitScreenshot_params *params = (struct IVRScreenshots_IVRScreenshots_001_SubmitScreenshot_params *)args;
    struct u_IVRScreenshots_IVRScreenshots_001 *iface = (struct u_IVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SubmitScreenshot( params->screenshotHandle, params->type, params->pchSourcePreviewFilename, params->pchSourceVRFilename );
    return 0;
}

