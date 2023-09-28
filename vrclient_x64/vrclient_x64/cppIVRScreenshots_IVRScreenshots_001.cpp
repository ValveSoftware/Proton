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

struct cppIVRScreenshots_IVRScreenshots_001
{
#ifdef __cplusplus
    virtual uint32_t RequestScreenshot( uint32_t *, uint32_t, const char *, const char * ) = 0;
    virtual uint32_t HookScreenshot( uint32_t *, int32_t ) = 0;
    virtual uint32_t GetScreenshotPropertyType( uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetScreenshotPropertyFilename( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t UpdateScreenshotProgress( uint32_t, float ) = 0;
    virtual uint32_t TakeStereoScreenshot( uint32_t *, const char *, const char * ) = 0;
    virtual uint32_t SubmitScreenshot( uint32_t, uint32_t, const char *, const char * ) = 0;
#endif /* __cplusplus */
};

void cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_RequestScreenshot_params *params )
{
    struct cppIVRScreenshots_IVRScreenshots_001 *iface = (struct cppIVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = iface->RequestScreenshot( params->pOutScreenshotHandle, params->type, params->pchPreviewFilename, params->pchVRFilename );
}

void cppIVRScreenshots_IVRScreenshots_001_HookScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_HookScreenshot_params *params )
{
    struct cppIVRScreenshots_IVRScreenshots_001 *iface = (struct cppIVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = iface->HookScreenshot( params->pSupportedTypes, params->numTypes );
}

void cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType( struct cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyType_params *params )
{
    struct cppIVRScreenshots_IVRScreenshots_001 *iface = (struct cppIVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = iface->GetScreenshotPropertyType( params->screenshotHandle, params->pError );
}

void cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename( struct cppIVRScreenshots_IVRScreenshots_001_GetScreenshotPropertyFilename_params *params )
{
    struct cppIVRScreenshots_IVRScreenshots_001 *iface = (struct cppIVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = iface->GetScreenshotPropertyFilename( params->screenshotHandle, params->filenameType, params->pchFilename, params->cchFilename, params->pError );
}

void cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress( struct cppIVRScreenshots_IVRScreenshots_001_UpdateScreenshotProgress_params *params )
{
    struct cppIVRScreenshots_IVRScreenshots_001 *iface = (struct cppIVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = iface->UpdateScreenshotProgress( params->screenshotHandle, params->flProgress );
}

void cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_TakeStereoScreenshot_params *params )
{
    struct cppIVRScreenshots_IVRScreenshots_001 *iface = (struct cppIVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = iface->TakeStereoScreenshot( params->pOutScreenshotHandle, params->pchPreviewFilename, params->pchVRFilename );
}

void cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot( struct cppIVRScreenshots_IVRScreenshots_001_SubmitScreenshot_params *params )
{
    struct cppIVRScreenshots_IVRScreenshots_001 *iface = (struct cppIVRScreenshots_IVRScreenshots_001 *)params->linux_side;
    params->_ret = iface->SubmitScreenshot( params->screenshotHandle, params->type, params->pchSourcePreviewFilename, params->pchSourceVRFilename );
}

#ifdef __cplusplus
}
#endif
