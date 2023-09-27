#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.8.19/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_022.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRCompositor_IVRCompositor_022_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_022_SetTrackingSpace_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)params->eOrigin);
}

void cppIVRCompositor_IVRCompositor_022_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_022_GetTrackingSpace_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetTrackingSpace();
}

void cppIVRCompositor_IVRCompositor_022_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_022_WaitGetPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_022_GetLastPoses( struct cppIVRCompositor_IVRCompositor_022_GetLastPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastPoseForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDevicePose_t *)params->pOutputPose, (vr::TrackedDevicePose_t *)params->pOutputGamePose);
}

void cppIVRCompositor_IVRCompositor_022_Submit( struct cppIVRCompositor_IVRCompositor_022_Submit_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->Submit((vr::EVREye)params->eEye, (const vr::Texture_t *)params->pTexture, (const vr::VRTextureBounds_t *)params->pBounds, (vr::EVRSubmitFlags)params->nSubmitFlags);
}

void cppIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_022_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_022_PostPresentHandoff_params *params )
{
    ((IVRCompositor*)params->linux_side)->PostPresentHandoff();
}

void cppIVRCompositor_IVRCompositor_022_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_022_GetFrameTiming_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTiming((vr::Compositor_FrameTiming *)params->pTiming, (uint32_t)params->unFramesAgo);
}

void cppIVRCompositor_IVRCompositor_022_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_022_GetFrameTimings_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTimings((vr::Compositor_FrameTiming *)params->pTiming, (uint32_t)params->nFrames);
}

void cppIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTimeRemaining();
}

void cppIVRCompositor_IVRCompositor_022_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_022_GetCumulativeStats_params *params )
{
    ((IVRCompositor*)params->linux_side)->GetCumulativeStats((vr::Compositor_CumulativeStats *)params->pStats, (uint32_t)params->nStatsSizeInBytes);
}

void cppIVRCompositor_IVRCompositor_022_FadeToColor( struct cppIVRCompositor_IVRCompositor_022_FadeToColor_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeToColor((float)params->fSeconds, (float)params->fRed, (float)params->fGreen, (float)params->fBlue, (float)params->fAlpha, (bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_022_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_022_GetCurrentFadeColor_params *params )
{
    *params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentFadeColor((bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_022_FadeGrid( struct cppIVRCompositor_IVRCompositor_022_FadeGrid_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeGrid((float)params->fSeconds, (bool)params->bFadeIn);
}

void cppIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentGridAlpha();
}

void cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->SetSkyboxOverride((const vr::Texture_t *)params->pTextures, (uint32_t)params->unTextureCount);
}

void cppIVRCompositor_IVRCompositor_022_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_022_ClearSkyboxOverride_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_022_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_022_CompositorBringToFront_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_022_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_022_CompositorGoToBack_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_022_CompositorQuit( struct cppIVRCompositor_IVRCompositor_022_CompositorQuit_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorQuit();
}

void cppIVRCompositor_IVRCompositor_022_IsFullscreen( struct cppIVRCompositor_IVRCompositor_022_IsFullscreen_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsFullscreen();
}

void cppIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentSceneFocusProcess();
}

void cppIVRCompositor_IVRCompositor_022_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_022_GetLastFrameRenderer_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastFrameRenderer();
}

void cppIVRCompositor_IVRCompositor_022_CanRenderScene( struct cppIVRCompositor_IVRCompositor_022_CanRenderScene_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->CanRenderScene();
}

void cppIVRCompositor_IVRCompositor_022_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_022_ShowMirrorWindow_params *params )
{
    ((IVRCompositor*)params->linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_022_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_022_HideMirrorWindow_params *params )
{
    ((IVRCompositor*)params->linux_side)->HideMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsMirrorWindowVisible();
}

void cppIVRCompositor_IVRCompositor_022_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_022_CompositorDumpImages_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorDumpImages();
}

void cppIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->ShouldAppRenderWithLowResources();
}

void cppIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn_params *params )
{
    ((IVRCompositor*)params->linux_side)->ForceInterleavedReprojectionOn((bool)params->bOverride);
}

void cppIVRCompositor_IVRCompositor_022_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_022_ForceReconnectProcess_params *params )
{
    ((IVRCompositor*)params->linux_side)->ForceReconnectProcess();
}

void cppIVRCompositor_IVRCompositor_022_SuspendRendering( struct cppIVRCompositor_IVRCompositor_022_SuspendRendering_params *params )
{
    ((IVRCompositor*)params->linux_side)->SuspendRendering((bool)params->bSuspend);
}

void cppIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetMirrorTextureD3D11((vr::EVREye)params->eEye, (void *)params->pD3D11DeviceOrResource, (void **)params->ppD3D11ShaderResourceView);
}

void cppIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11_params *params )
{
    ((IVRCompositor*)params->linux_side)->ReleaseMirrorTextureD3D11((void *)params->pD3D11ShaderResourceView);
}

void cppIVRCompositor_IVRCompositor_022_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_022_GetMirrorTextureGL_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetMirrorTextureGL((vr::EVREye)params->eEye, (vr::glUInt_t *)params->pglTextureId, (vr::glSharedTextureHandle_t *)params->pglSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->ReleaseSharedGLTexture((vr::glUInt_t)params->glTextureId, (vr::glSharedTextureHandle_t)params->glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess_params *params )
{
    ((IVRCompositor*)params->linux_side)->LockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)params->glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess_params *params )
{
    ((IVRCompositor*)params->linux_side)->UnlockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)params->glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetVulkanInstanceExtensionsRequired((char *)params->pchValue, (uint32_t)params->unBufferSize);
}

void cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetVulkanDeviceExtensionsRequired((VkPhysicalDevice_T *)params->pPhysicalDevice, (char *)params->pchValue, (uint32_t)params->unBufferSize);
}

void cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode( struct cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetExplicitTimingMode((vr::EVRCompositorTimingMode)params->eTimingMode);
}

void cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData( struct cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->SubmitExplicitTimingData();
}

void cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled( struct cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsMotionSmoothingEnabled();
}

void cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported( struct cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsMotionSmoothingSupported();
}

void cppIVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading( struct cppIVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsCurrentSceneFocusAppLoading();
}

#ifdef __cplusplus
}
#endif
