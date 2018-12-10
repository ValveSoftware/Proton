#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.3a/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_017.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRCompositor_IVRCompositor_017_SetTrackingSpace(void *linux_side, ETrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)eOrigin);
}

vr::ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_017_GetTrackingSpace(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetTrackingSpace();
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_017_WaitGetPoses(void *linux_side, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    return ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_017_GetLastPoses(void *linux_side, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    return ((IVRCompositor*)linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose)
{
    return ((IVRCompositor*)linux_side)->GetLastPoseForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDevicePose_t *)pOutputPose, (vr::TrackedDevicePose_t *)pOutputGamePose);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_017_Submit(void *linux_side, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    return ((IVRCompositor*)linux_side)->Submit((vr::EVREye)eEye, (const vr::Texture_t *)pTexture, (const vr::VRTextureBounds_t *)pBounds, (vr::EVRSubmitFlags)nSubmitFlags);
}

void cppIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_017_PostPresentHandoff(void *linux_side)
{
    ((IVRCompositor*)linux_side)->PostPresentHandoff();
}

bool cppIVRCompositor_IVRCompositor_017_GetFrameTiming(void *linux_side, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo)
{
    return ((IVRCompositor*)linux_side)->GetFrameTiming((vr::Compositor_FrameTiming *)pTiming, (uint32_t)unFramesAgo);
}

uint32_t cppIVRCompositor_IVRCompositor_017_GetFrameTimings(void *linux_side, Compositor_FrameTiming * pTiming, uint32_t nFrames)
{
    return ((IVRCompositor*)linux_side)->GetFrameTimings((vr::Compositor_FrameTiming *)pTiming, (uint32_t)nFrames);
}

float cppIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetFrameTimeRemaining();
}

void cppIVRCompositor_IVRCompositor_017_GetCumulativeStats(void *linux_side, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes)
{
    ((IVRCompositor*)linux_side)->GetCumulativeStats((vr::Compositor_CumulativeStats *)pStats, (uint32_t)nStatsSizeInBytes);
}

void cppIVRCompositor_IVRCompositor_017_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

void cppIVRCompositor_IVRCompositor_017_FadeGrid(void *linux_side, float fSeconds, bool bFadeIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeIn);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride(void *linux_side, Texture_t * pTextures, uint32_t unTextureCount)
{
    return ((IVRCompositor*)linux_side)->SetSkyboxOverride((const vr::Texture_t *)pTextures, (uint32_t)unTextureCount);
}

void cppIVRCompositor_IVRCompositor_017_ClearSkyboxOverride(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_017_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_017_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_017_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_017_IsFullscreen(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsFullscreen();
}

uint32_t cppIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetCurrentSceneFocusProcess();
}

uint32_t cppIVRCompositor_IVRCompositor_017_GetLastFrameRenderer(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetLastFrameRenderer();
}

bool cppIVRCompositor_IVRCompositor_017_CanRenderScene(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->CanRenderScene();
}

void cppIVRCompositor_IVRCompositor_017_ShowMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_017_HideMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->HideMirrorWindow();
}

bool cppIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsMirrorWindowVisible();
}

void cppIVRCompositor_IVRCompositor_017_CompositorDumpImages(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorDumpImages();
}

bool cppIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->ShouldAppRenderWithLowResources();
}

void cppIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn(void *linux_side, bool bOverride)
{
    ((IVRCompositor*)linux_side)->ForceInterleavedReprojectionOn((bool)bOverride);
}

void cppIVRCompositor_IVRCompositor_017_ForceReconnectProcess(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ForceReconnectProcess();
}

void cppIVRCompositor_IVRCompositor_017_SuspendRendering(void *linux_side, bool bSuspend)
{
    ((IVRCompositor*)linux_side)->SuspendRendering((bool)bSuspend);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11(void *linux_side, EVREye eEye, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView)
{
    return ((IVRCompositor*)linux_side)->GetMirrorTextureD3D11((vr::EVREye)eEye, (void *)pD3D11DeviceOrResource, (void **)ppD3D11ShaderResourceView);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_017_GetMirrorTextureGL(void *linux_side, EVREye eEye, glUInt_t * pglTextureId, glSharedTextureHandle_t * pglSharedTextureHandle)
{
    return ((IVRCompositor*)linux_side)->GetMirrorTextureGL((vr::EVREye)eEye, (vr::glUInt_t *)pglTextureId, (vr::glSharedTextureHandle_t *)pglSharedTextureHandle);
}

bool cppIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture(void *linux_side, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    return ((IVRCompositor*)linux_side)->ReleaseSharedGLTexture((vr::glUInt_t)glTextureId, (vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess(void *linux_side, glSharedTextureHandle_t glSharedTextureHandle)
{
    ((IVRCompositor*)linux_side)->LockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess(void *linux_side, glSharedTextureHandle_t glSharedTextureHandle)
{
    ((IVRCompositor*)linux_side)->UnlockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

#ifdef __cplusplus
}
#endif
