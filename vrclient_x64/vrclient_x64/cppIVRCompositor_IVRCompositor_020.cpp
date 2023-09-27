#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.9/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_020.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRCompositor_IVRCompositor_020_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_020_SetTrackingSpace_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)params->eOrigin);
}

void cppIVRCompositor_IVRCompositor_020_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_020_GetTrackingSpace_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetTrackingSpace();
}

void cppIVRCompositor_IVRCompositor_020_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_020_WaitGetPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_020_GetLastPoses( struct cppIVRCompositor_IVRCompositor_020_GetLastPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastPoseForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDevicePose_t *)params->pOutputPose, (vr::TrackedDevicePose_t *)params->pOutputGamePose);
}

void cppIVRCompositor_IVRCompositor_020_Submit( struct cppIVRCompositor_IVRCompositor_020_Submit_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->Submit((vr::EVREye)params->eEye, (const vr::Texture_t *)params->pTexture, (const vr::VRTextureBounds_t *)params->pBounds, (vr::EVRSubmitFlags)params->nSubmitFlags);
}

void cppIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_020_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_020_PostPresentHandoff_params *params )
{
    ((IVRCompositor*)params->linux_side)->PostPresentHandoff();
}

void cppIVRCompositor_IVRCompositor_020_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_020_GetFrameTiming_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTiming((vr::Compositor_FrameTiming *)params->pTiming, (uint32_t)params->unFramesAgo);
}

void cppIVRCompositor_IVRCompositor_020_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_020_GetFrameTimings_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTimings((vr::Compositor_FrameTiming *)params->pTiming, (uint32_t)params->nFrames);
}

void cppIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTimeRemaining();
}

void cppIVRCompositor_IVRCompositor_020_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_020_GetCumulativeStats_params *params )
{
    ((IVRCompositor*)params->linux_side)->GetCumulativeStats((vr::Compositor_CumulativeStats *)params->pStats, (uint32_t)params->nStatsSizeInBytes);
}

void cppIVRCompositor_IVRCompositor_020_FadeToColor( struct cppIVRCompositor_IVRCompositor_020_FadeToColor_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeToColor((float)params->fSeconds, (float)params->fRed, (float)params->fGreen, (float)params->fBlue, (float)params->fAlpha, (bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_020_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_020_GetCurrentFadeColor_params *params )
{
    *params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentFadeColor((bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_020_FadeGrid( struct cppIVRCompositor_IVRCompositor_020_FadeGrid_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeGrid((float)params->fSeconds, (bool)params->bFadeIn);
}

void cppIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentGridAlpha();
}

void cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->SetSkyboxOverride((const vr::Texture_t *)params->pTextures, (uint32_t)params->unTextureCount);
}

void cppIVRCompositor_IVRCompositor_020_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_020_ClearSkyboxOverride_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_020_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_020_CompositorBringToFront_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_020_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_020_CompositorGoToBack_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_020_CompositorQuit( struct cppIVRCompositor_IVRCompositor_020_CompositorQuit_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorQuit();
}

void cppIVRCompositor_IVRCompositor_020_IsFullscreen( struct cppIVRCompositor_IVRCompositor_020_IsFullscreen_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsFullscreen();
}

void cppIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentSceneFocusProcess();
}

void cppIVRCompositor_IVRCompositor_020_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_020_GetLastFrameRenderer_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastFrameRenderer();
}

void cppIVRCompositor_IVRCompositor_020_CanRenderScene( struct cppIVRCompositor_IVRCompositor_020_CanRenderScene_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->CanRenderScene();
}

void cppIVRCompositor_IVRCompositor_020_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_020_ShowMirrorWindow_params *params )
{
    ((IVRCompositor*)params->linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_020_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_020_HideMirrorWindow_params *params )
{
    ((IVRCompositor*)params->linux_side)->HideMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsMirrorWindowVisible();
}

void cppIVRCompositor_IVRCompositor_020_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_020_CompositorDumpImages_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorDumpImages();
}

void cppIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->ShouldAppRenderWithLowResources();
}

void cppIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn_params *params )
{
    ((IVRCompositor*)params->linux_side)->ForceInterleavedReprojectionOn((bool)params->bOverride);
}

void cppIVRCompositor_IVRCompositor_020_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_020_ForceReconnectProcess_params *params )
{
    ((IVRCompositor*)params->linux_side)->ForceReconnectProcess();
}

void cppIVRCompositor_IVRCompositor_020_SuspendRendering( struct cppIVRCompositor_IVRCompositor_020_SuspendRendering_params *params )
{
    ((IVRCompositor*)params->linux_side)->SuspendRendering((bool)params->bSuspend);
}

void cppIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetMirrorTextureD3D11((vr::EVREye)params->eEye, (void *)params->pD3D11DeviceOrResource, (void **)params->ppD3D11ShaderResourceView);
}

void cppIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11_params *params )
{
    ((IVRCompositor*)params->linux_side)->ReleaseMirrorTextureD3D11((void *)params->pD3D11ShaderResourceView);
}

void cppIVRCompositor_IVRCompositor_020_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_020_GetMirrorTextureGL_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetMirrorTextureGL((vr::EVREye)params->eEye, (vr::glUInt_t *)params->pglTextureId, (vr::glSharedTextureHandle_t *)params->pglSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->ReleaseSharedGLTexture((vr::glUInt_t)params->glTextureId, (vr::glSharedTextureHandle_t)params->glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess_params *params )
{
    ((IVRCompositor*)params->linux_side)->LockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)params->glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess_params *params )
{
    ((IVRCompositor*)params->linux_side)->UnlockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)params->glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetVulkanInstanceExtensionsRequired((char *)params->pchValue, (uint32_t)params->unBufferSize);
}

void cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetVulkanDeviceExtensionsRequired((VkPhysicalDevice_T *)params->pPhysicalDevice, (char *)params->pchValue, (uint32_t)params->unBufferSize);
}

#ifdef __cplusplus
}
#endif
