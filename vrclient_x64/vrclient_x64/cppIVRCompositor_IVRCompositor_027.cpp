#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_027.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRCompositor_IVRCompositor_027_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_027_SetTrackingSpace_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)params->eOrigin);
}

void cppIVRCompositor_IVRCompositor_027_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_027_GetTrackingSpace_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetTrackingSpace();
}

void cppIVRCompositor_IVRCompositor_027_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_027_WaitGetPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_027_GetLastPoses( struct cppIVRCompositor_IVRCompositor_027_GetLastPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastPoseForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDevicePose_t *)params->pOutputPose, (vr::TrackedDevicePose_t *)params->pOutputGamePose);
}

void cppIVRCompositor_IVRCompositor_027_Submit( struct cppIVRCompositor_IVRCompositor_027_Submit_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->Submit((vr::EVREye)params->eEye, (const vr::Texture_t *)params->pTexture, (const vr::VRTextureBounds_t *)params->pBounds, (vr::EVRSubmitFlags)params->nSubmitFlags);
}

void cppIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_027_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_027_PostPresentHandoff_params *params )
{
    ((IVRCompositor*)params->linux_side)->PostPresentHandoff();
}

void cppIVRCompositor_IVRCompositor_027_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_027_GetFrameTiming_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTiming((vr::Compositor_FrameTiming *)params->pTiming, (uint32_t)params->unFramesAgo);
}

void cppIVRCompositor_IVRCompositor_027_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_027_GetFrameTimings_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTimings((vr::Compositor_FrameTiming *)params->pTiming, (uint32_t)params->nFrames);
}

void cppIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTimeRemaining();
}

void cppIVRCompositor_IVRCompositor_027_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_027_GetCumulativeStats_params *params )
{
    ((IVRCompositor*)params->linux_side)->GetCumulativeStats((vr::Compositor_CumulativeStats *)params->pStats, (uint32_t)params->nStatsSizeInBytes);
}

void cppIVRCompositor_IVRCompositor_027_FadeToColor( struct cppIVRCompositor_IVRCompositor_027_FadeToColor_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeToColor((float)params->fSeconds, (float)params->fRed, (float)params->fGreen, (float)params->fBlue, (float)params->fAlpha, (bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_027_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_027_GetCurrentFadeColor_params *params )
{
    *params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentFadeColor((bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_027_FadeGrid( struct cppIVRCompositor_IVRCompositor_027_FadeGrid_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeGrid((float)params->fSeconds, (bool)params->bFadeGridIn);
}

void cppIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentGridAlpha();
}

void cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->SetSkyboxOverride((const vr::Texture_t *)params->pTextures, (uint32_t)params->unTextureCount);
}

void cppIVRCompositor_IVRCompositor_027_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_027_ClearSkyboxOverride_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_027_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_027_CompositorBringToFront_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_027_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_027_CompositorGoToBack_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_027_CompositorQuit( struct cppIVRCompositor_IVRCompositor_027_CompositorQuit_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorQuit();
}

void cppIVRCompositor_IVRCompositor_027_IsFullscreen( struct cppIVRCompositor_IVRCompositor_027_IsFullscreen_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsFullscreen();
}

void cppIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentSceneFocusProcess();
}

void cppIVRCompositor_IVRCompositor_027_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_027_GetLastFrameRenderer_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastFrameRenderer();
}

void cppIVRCompositor_IVRCompositor_027_CanRenderScene( struct cppIVRCompositor_IVRCompositor_027_CanRenderScene_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->CanRenderScene();
}

void cppIVRCompositor_IVRCompositor_027_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_027_ShowMirrorWindow_params *params )
{
    ((IVRCompositor*)params->linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_027_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_027_HideMirrorWindow_params *params )
{
    ((IVRCompositor*)params->linux_side)->HideMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsMirrorWindowVisible();
}

void cppIVRCompositor_IVRCompositor_027_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_027_CompositorDumpImages_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorDumpImages();
}

void cppIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->ShouldAppRenderWithLowResources();
}

void cppIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn_params *params )
{
    ((IVRCompositor*)params->linux_side)->ForceInterleavedReprojectionOn((bool)params->bOverride);
}

void cppIVRCompositor_IVRCompositor_027_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_027_ForceReconnectProcess_params *params )
{
    ((IVRCompositor*)params->linux_side)->ForceReconnectProcess();
}

void cppIVRCompositor_IVRCompositor_027_SuspendRendering( struct cppIVRCompositor_IVRCompositor_027_SuspendRendering_params *params )
{
    ((IVRCompositor*)params->linux_side)->SuspendRendering((bool)params->bSuspend);
}

void cppIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetMirrorTextureD3D11((vr::EVREye)params->eEye, (void *)params->pD3D11DeviceOrResource, (void **)params->ppD3D11ShaderResourceView);
}

void cppIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11_params *params )
{
    ((IVRCompositor*)params->linux_side)->ReleaseMirrorTextureD3D11((void *)params->pD3D11ShaderResourceView);
}

void cppIVRCompositor_IVRCompositor_027_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_027_GetMirrorTextureGL_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetMirrorTextureGL((vr::EVREye)params->eEye, (vr::glUInt_t *)params->pglTextureId, (vr::glSharedTextureHandle_t *)params->pglSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->ReleaseSharedGLTexture((vr::glUInt_t)params->glTextureId, (vr::glSharedTextureHandle_t)params->glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess_params *params )
{
    ((IVRCompositor*)params->linux_side)->LockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)params->glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess_params *params )
{
    ((IVRCompositor*)params->linux_side)->UnlockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)params->glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetVulkanInstanceExtensionsRequired((char *)params->pchValue, (uint32_t)params->unBufferSize);
}

void cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetVulkanDeviceExtensionsRequired((VkPhysicalDevice_T *)params->pPhysicalDevice, (char *)params->pchValue, (uint32_t)params->unBufferSize);
}

void cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode( struct cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetExplicitTimingMode((vr::EVRCompositorTimingMode)params->eTimingMode);
}

void cppIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData( struct cppIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->SubmitExplicitTimingData();
}

void cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled( struct cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsMotionSmoothingEnabled();
}

void cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported( struct cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsMotionSmoothingSupported();
}

void cppIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading( struct cppIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsCurrentSceneFocusAppLoading();
}

void cppIVRCompositor_IVRCompositor_027_SetStageOverride_Async( struct cppIVRCompositor_IVRCompositor_027_SetStageOverride_Async_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->SetStageOverride_Async((const char *)params->pchRenderModelPath, (const vr::HmdMatrix34_t *)params->pTransform, (const vr::Compositor_StageRenderSettings *)params->pRenderSettings, (uint32_t)params->nSizeOfRenderSettings);
}

void cppIVRCompositor_IVRCompositor_027_ClearStageOverride( struct cppIVRCompositor_IVRCompositor_027_ClearStageOverride_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearStageOverride();
}

void cppIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults( struct cppIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCompositorBenchmarkResults((vr::Compositor_BenchmarkResults *)params->pBenchmarkResults, (uint32_t)params->nSizeOfBenchmarkResults);
}

void cppIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs( struct cppIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastPosePredictionIDs((uint32_t *)params->pRenderPosePredictionID, (uint32_t *)params->pGamePosePredictionID);
}

void cppIVRCompositor_IVRCompositor_027_GetPosesForFrame( struct cppIVRCompositor_IVRCompositor_027_GetPosesForFrame_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetPosesForFrame((uint32_t)params->unPosePredictionID, (vr::TrackedDevicePose_t *)params->pPoseArray, (uint32_t)params->unPoseArrayCount);
}

#ifdef __cplusplus
}
#endif
