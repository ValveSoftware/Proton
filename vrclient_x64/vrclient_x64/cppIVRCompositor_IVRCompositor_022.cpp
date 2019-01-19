#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.1.3b/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_022.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRCompositor_IVRCompositor_022_SetTrackingSpace(void *linux_side, ETrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)eOrigin);
}

vr::ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_022_GetTrackingSpace(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetTrackingSpace();
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_022_WaitGetPoses(void *linux_side, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    return ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_022_GetLastPoses(void *linux_side, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    return ((IVRCompositor*)linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    return ((IVRCompositor*)linux_side)->GetLastPoseForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDevicePose_t *)pOutputPose, (vr::TrackedDevicePose_t *)pOutputGamePose);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_022_Submit(void *linux_side, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    return ((IVRCompositor*)linux_side)->Submit((vr::EVREye)eEye, (const vr::Texture_t *)pTexture, (const vr::VRTextureBounds_t *)pBounds, (vr::EVRSubmitFlags)nSubmitFlags);
}

void cppIVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_022_PostPresentHandoff(void *linux_side)
{
    ((IVRCompositor*)linux_side)->PostPresentHandoff();
}

bool cppIVRCompositor_IVRCompositor_022_GetFrameTiming(void *linux_side, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    return ((IVRCompositor*)linux_side)->GetFrameTiming((vr::Compositor_FrameTiming *)pTiming, (uint32_t)unFramesAgo);
}

uint32_t cppIVRCompositor_IVRCompositor_022_GetFrameTimings(void *linux_side, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    return ((IVRCompositor*)linux_side)->GetFrameTimings((vr::Compositor_FrameTiming *)pTiming, (uint32_t)nFrames);
}

float cppIVRCompositor_IVRCompositor_022_GetFrameTimeRemaining(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetFrameTimeRemaining();
}

void cppIVRCompositor_IVRCompositor_022_GetCumulativeStats(void *linux_side, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    ((IVRCompositor*)linux_side)->GetCumulativeStats((vr::Compositor_CumulativeStats *)pStats, (uint32_t)nStatsSizeInBytes);
}

void cppIVRCompositor_IVRCompositor_022_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

vr::HmdColor_t cppIVRCompositor_IVRCompositor_022_GetCurrentFadeColor(void *linux_side, bool bBackground)
{
    return ((IVRCompositor*)linux_side)->GetCurrentFadeColor((bool)bBackground);
}

void cppIVRCompositor_IVRCompositor_022_FadeGrid(void *linux_side, float fSeconds, bool bFadeIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeIn);
}

float cppIVRCompositor_IVRCompositor_022_GetCurrentGridAlpha(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetCurrentGridAlpha();
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride(void *linux_side, Texture_t * pTextures, uint32_t unTextureCount)
{
    return ((IVRCompositor*)linux_side)->SetSkyboxOverride((const vr::Texture_t *)pTextures, (uint32_t)unTextureCount);
}

void cppIVRCompositor_IVRCompositor_022_ClearSkyboxOverride(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_022_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_022_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_022_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_022_IsFullscreen(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsFullscreen();
}

uint32_t cppIVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetCurrentSceneFocusProcess();
}

uint32_t cppIVRCompositor_IVRCompositor_022_GetLastFrameRenderer(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetLastFrameRenderer();
}

bool cppIVRCompositor_IVRCompositor_022_CanRenderScene(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->CanRenderScene();
}

void cppIVRCompositor_IVRCompositor_022_ShowMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_022_HideMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->HideMirrorWindow();
}

bool cppIVRCompositor_IVRCompositor_022_IsMirrorWindowVisible(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsMirrorWindowVisible();
}

void cppIVRCompositor_IVRCompositor_022_CompositorDumpImages(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorDumpImages();
}

bool cppIVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->ShouldAppRenderWithLowResources();
}

void cppIVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn(void *linux_side, bool bOverride)
{
    ((IVRCompositor*)linux_side)->ForceInterleavedReprojectionOn((bool)bOverride);
}

void cppIVRCompositor_IVRCompositor_022_ForceReconnectProcess(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ForceReconnectProcess();
}

void cppIVRCompositor_IVRCompositor_022_SuspendRendering(void *linux_side, bool bSuspend)
{
    ((IVRCompositor*)linux_side)->SuspendRendering((bool)bSuspend);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11(void *linux_side, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    return ((IVRCompositor*)linux_side)->GetMirrorTextureD3D11((vr::EVREye)eEye, (void *)pD3D11DeviceOrResource, (void **)ppD3D11ShaderResourceView);
}

void cppIVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11(void *linux_side, void * pD3D11ShaderResourceView)
{
    ((IVRCompositor*)linux_side)->ReleaseMirrorTextureD3D11((void *)pD3D11ShaderResourceView);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_022_GetMirrorTextureGL(void *linux_side, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    return ((IVRCompositor*)linux_side)->GetMirrorTextureGL((vr::EVREye)eEye, (vr::glUInt_t *)pglTextureId, (vr::glSharedTextureHandle_t *)pglSharedTextureHandle);
}

bool cppIVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture(void *linux_side, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    return ((IVRCompositor*)linux_side)->ReleaseSharedGLTexture((vr::glUInt_t)glTextureId, (vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess(void *linux_side, glSharedTextureHandle_t glSharedTextureHandle)
{
    ((IVRCompositor*)linux_side)->LockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess(void *linux_side, glSharedTextureHandle_t glSharedTextureHandle)
{
    ((IVRCompositor*)linux_side)->UnlockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

uint32_t cppIVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired(void *linux_side, char * pchValue, uint32_t unBufferSize)
{
    return ((IVRCompositor*)linux_side)->GetVulkanInstanceExtensionsRequired((char *)pchValue, (uint32_t)unBufferSize);
}

uint32_t cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired(void *linux_side, VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize)
{
    return ((IVRCompositor*)linux_side)->GetVulkanDeviceExtensionsRequired((VkPhysicalDevice_T *)pPhysicalDevice, (char *)pchValue, (uint32_t)unBufferSize);
}

void cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode(void *linux_side, EVRCompositorTimingMode eTimingMode)
{
    ((IVRCompositor*)linux_side)->SetExplicitTimingMode((vr::EVRCompositorTimingMode)eTimingMode);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->SubmitExplicitTimingData();
}

bool cppIVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsMotionSmoothingEnabled();
}

#ifdef __cplusplus
}
#endif
