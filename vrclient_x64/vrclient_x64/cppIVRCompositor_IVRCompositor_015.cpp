#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.1/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_015.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRCompositor_IVRCompositor_015_SetTrackingSpace(void *linux_side, ETrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)eOrigin);
}

ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_015_GetTrackingSpace(void *linux_side)
{
    ETrackingUniverseOrigin _ret;
    _ret = ((IVRCompositor*)linux_side)->GetTrackingSpace();
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_015_WaitGetPoses(void *linux_side, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_015_GetLastPoses(void *linux_side, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastPoseForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDevicePose_t *)pOutputPose, (vr::TrackedDevicePose_t *)pOutputGamePose);
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_015_Submit(void *linux_side, EVREye eEye, const Texture_t *pTexture, const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->Submit((vr::EVREye)eEye, (const vr::Texture_t *)pTexture, (const vr::VRTextureBounds_t *)pBounds, (vr::EVRSubmitFlags)nSubmitFlags);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_015_PostPresentHandoff(void *linux_side)
{
    ((IVRCompositor*)linux_side)->PostPresentHandoff();
}

bool cppIVRCompositor_IVRCompositor_015_GetFrameTiming(void *linux_side, Compositor_FrameTiming *pTiming, uint32_t unFramesAgo)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->GetFrameTiming((vr::Compositor_FrameTiming *)pTiming, (uint32_t)unFramesAgo);
    return _ret;
}

float cppIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining(void *linux_side)
{
    float _ret;
    _ret = ((IVRCompositor*)linux_side)->GetFrameTimeRemaining();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_015_GetCumulativeStats(void *linux_side, Compositor_CumulativeStats *pStats, uint32_t nStatsSizeInBytes)
{
    ((IVRCompositor*)linux_side)->GetCumulativeStats((vr::Compositor_CumulativeStats *)pStats, (uint32_t)nStatsSizeInBytes);
}

void cppIVRCompositor_IVRCompositor_015_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

void cppIVRCompositor_IVRCompositor_015_FadeGrid(void *linux_side, float fSeconds, bool bFadeIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeIn);
}

EVRCompositorError cppIVRCompositor_IVRCompositor_015_SetSkyboxOverride(void *linux_side, const Texture_t *pTextures, uint32_t unTextureCount)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->SetSkyboxOverride((const vr::Texture_t *)pTextures, (uint32_t)unTextureCount);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_015_ClearSkyboxOverride(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_015_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_015_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_015_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_015_IsFullscreen(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsFullscreen();
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetCurrentSceneFocusProcess();
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_015_GetLastFrameRenderer(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastFrameRenderer();
    return _ret;
}

bool cppIVRCompositor_IVRCompositor_015_CanRenderScene(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->CanRenderScene();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_015_ShowMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_015_HideMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->HideMirrorWindow();
}

bool cppIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsMirrorWindowVisible();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_015_CompositorDumpImages(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorDumpImages();
}

bool cppIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->ShouldAppRenderWithLowResources();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn(void *linux_side, bool bOverride)
{
    ((IVRCompositor*)linux_side)->ForceInterleavedReprojectionOn((bool)bOverride);
}

void cppIVRCompositor_IVRCompositor_015_ForceReconnectProcess(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ForceReconnectProcess();
}

void cppIVRCompositor_IVRCompositor_015_SuspendRendering(void *linux_side, bool bSuspend)
{
    ((IVRCompositor*)linux_side)->SuspendRendering((bool)bSuspend);
}

EVRCompositorError cppIVRCompositor_IVRCompositor_015_RequestScreenshot(void *linux_side, EVRScreenshotType type, const char *pchDestinationFileName, const char *pchVRDestinationFileName)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->RequestScreenshot((vr::EVRScreenshotType)type, (const char *)pchDestinationFileName, (const char *)pchVRDestinationFileName);
    return _ret;
}

EVRScreenshotType cppIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType(void *linux_side)
{
    EVRScreenshotType _ret;
    _ret = ((IVRCompositor*)linux_side)->GetCurrentScreenshotType();
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11(void *linux_side, EVREye eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetMirrorTextureD3D11((vr::EVREye)eEye, (void *)pD3D11DeviceOrResource, (void **)ppD3D11ShaderResourceView);
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_015_GetMirrorTextureGL(void *linux_side, EVREye eEye, glUInt_t *pglTextureId, glSharedTextureHandle_t *pglSharedTextureHandle)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetMirrorTextureGL((vr::EVREye)eEye, (vr::glUInt_t *)pglTextureId, (vr::glSharedTextureHandle_t *)pglSharedTextureHandle);
    return _ret;
}

bool cppIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture(void *linux_side, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->ReleaseSharedGLTexture((vr::glUInt_t)glTextureId, (vr::glSharedTextureHandle_t)glSharedTextureHandle);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess(void *linux_side, glSharedTextureHandle_t glSharedTextureHandle)
{
    ((IVRCompositor*)linux_side)->LockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess(void *linux_side, glSharedTextureHandle_t glSharedTextureHandle)
{
    ((IVRCompositor*)linux_side)->UnlockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

#ifdef __cplusplus
}
#endif
