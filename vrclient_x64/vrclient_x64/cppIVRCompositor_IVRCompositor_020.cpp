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
void cppIVRCompositor_IVRCompositor_020_SetTrackingSpace(void *linux_side, ETrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)eOrigin);
}

vr::ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_020_GetTrackingSpace(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetTrackingSpace();
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_020_WaitGetPoses(void *linux_side, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    return ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_020_GetLastPoses(void *linux_side, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    return ((IVRCompositor*)linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_020_GetLastPoseForTrackedDeviceIndex(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    return ((IVRCompositor*)linux_side)->GetLastPoseForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDevicePose_t *)pOutputPose, (vr::TrackedDevicePose_t *)pOutputGamePose);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_020_Submit(void *linux_side, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    return ((IVRCompositor*)linux_side)->Submit((vr::EVREye)eEye, (const vr::Texture_t *)pTexture, (const vr::VRTextureBounds_t *)pBounds, (vr::EVRSubmitFlags)nSubmitFlags);
}

void cppIVRCompositor_IVRCompositor_020_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_020_PostPresentHandoff(void *linux_side)
{
    ((IVRCompositor*)linux_side)->PostPresentHandoff();
}

bool cppIVRCompositor_IVRCompositor_020_GetFrameTiming(void *linux_side, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    return ((IVRCompositor*)linux_side)->GetFrameTiming((vr::Compositor_FrameTiming *)pTiming, (uint32_t)unFramesAgo);
}

uint32_t cppIVRCompositor_IVRCompositor_020_GetFrameTimings(void *linux_side, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    return ((IVRCompositor*)linux_side)->GetFrameTimings((vr::Compositor_FrameTiming *)pTiming, (uint32_t)nFrames);
}

float cppIVRCompositor_IVRCompositor_020_GetFrameTimeRemaining(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetFrameTimeRemaining();
}

void cppIVRCompositor_IVRCompositor_020_GetCumulativeStats(void *linux_side, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    ((IVRCompositor*)linux_side)->GetCumulativeStats((vr::Compositor_CumulativeStats *)pStats, (uint32_t)nStatsSizeInBytes);
}

void cppIVRCompositor_IVRCompositor_020_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

vr::HmdColor_t cppIVRCompositor_IVRCompositor_020_GetCurrentFadeColor(void *linux_side, bool bBackground)
{
    return ((IVRCompositor*)linux_side)->GetCurrentFadeColor((bool)bBackground);
}

void cppIVRCompositor_IVRCompositor_020_FadeGrid(void *linux_side, float fSeconds, bool bFadeIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeIn);
}

float cppIVRCompositor_IVRCompositor_020_GetCurrentGridAlpha(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetCurrentGridAlpha();
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride(void *linux_side, Texture_t * pTextures, uint32_t unTextureCount)
{
    return ((IVRCompositor*)linux_side)->SetSkyboxOverride((const vr::Texture_t *)pTextures, (uint32_t)unTextureCount);
}

void cppIVRCompositor_IVRCompositor_020_ClearSkyboxOverride(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_020_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_020_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_020_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_020_IsFullscreen(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsFullscreen();
}

uint32_t cppIVRCompositor_IVRCompositor_020_GetCurrentSceneFocusProcess(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetCurrentSceneFocusProcess();
}

uint32_t cppIVRCompositor_IVRCompositor_020_GetLastFrameRenderer(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetLastFrameRenderer();
}

bool cppIVRCompositor_IVRCompositor_020_CanRenderScene(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->CanRenderScene();
}

void cppIVRCompositor_IVRCompositor_020_ShowMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_020_HideMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->HideMirrorWindow();
}

bool cppIVRCompositor_IVRCompositor_020_IsMirrorWindowVisible(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsMirrorWindowVisible();
}

void cppIVRCompositor_IVRCompositor_020_CompositorDumpImages(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorDumpImages();
}

bool cppIVRCompositor_IVRCompositor_020_ShouldAppRenderWithLowResources(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->ShouldAppRenderWithLowResources();
}

void cppIVRCompositor_IVRCompositor_020_ForceInterleavedReprojectionOn(void *linux_side, bool bOverride)
{
    ((IVRCompositor*)linux_side)->ForceInterleavedReprojectionOn((bool)bOverride);
}

void cppIVRCompositor_IVRCompositor_020_ForceReconnectProcess(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ForceReconnectProcess();
}

void cppIVRCompositor_IVRCompositor_020_SuspendRendering(void *linux_side, bool bSuspend)
{
    ((IVRCompositor*)linux_side)->SuspendRendering((bool)bSuspend);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_020_GetMirrorTextureD3D11(void *linux_side, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    return ((IVRCompositor*)linux_side)->GetMirrorTextureD3D11((vr::EVREye)eEye, (void *)pD3D11DeviceOrResource, (void **)ppD3D11ShaderResourceView);
}

void cppIVRCompositor_IVRCompositor_020_ReleaseMirrorTextureD3D11(void *linux_side, void * pD3D11ShaderResourceView)
{
    ((IVRCompositor*)linux_side)->ReleaseMirrorTextureD3D11((void *)pD3D11ShaderResourceView);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_020_GetMirrorTextureGL(void *linux_side, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    return ((IVRCompositor*)linux_side)->GetMirrorTextureGL((vr::EVREye)eEye, (vr::glUInt_t *)pglTextureId, (vr::glSharedTextureHandle_t *)pglSharedTextureHandle);
}

bool cppIVRCompositor_IVRCompositor_020_ReleaseSharedGLTexture(void *linux_side, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    return ((IVRCompositor*)linux_side)->ReleaseSharedGLTexture((vr::glUInt_t)glTextureId, (vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_020_LockGLSharedTextureForAccess(void *linux_side, glSharedTextureHandle_t glSharedTextureHandle)
{
    ((IVRCompositor*)linux_side)->LockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_020_UnlockGLSharedTextureForAccess(void *linux_side, glSharedTextureHandle_t glSharedTextureHandle)
{
    ((IVRCompositor*)linux_side)->UnlockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

uint32_t cppIVRCompositor_IVRCompositor_020_GetVulkanInstanceExtensionsRequired(void *linux_side, char * pchValue, uint32_t unBufferSize)
{
    return ((IVRCompositor*)linux_side)->GetVulkanInstanceExtensionsRequired((char *)pchValue, (uint32_t)unBufferSize);
}

uint32_t cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired(void *linux_side, VkPhysicalDevice_T * pPhysicalDevice, char * pchValue, uint32_t unBufferSize)
{
    return ((IVRCompositor*)linux_side)->GetVulkanDeviceExtensionsRequired((VkPhysicalDevice_T *)pPhysicalDevice, (char *)pchValue, (uint32_t)unBufferSize);
}

#ifdef __cplusplus
}
#endif
