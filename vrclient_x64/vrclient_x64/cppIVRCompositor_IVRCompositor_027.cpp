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
void cppIVRCompositor_IVRCompositor_027_SetTrackingSpace(void *linux_side, ETrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)eOrigin);
}

ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_027_GetTrackingSpace(void *linux_side)
{
    ETrackingUniverseOrigin _ret;
    _ret = ((IVRCompositor*)linux_side)->GetTrackingSpace();
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_WaitGetPoses(void *linux_side, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetLastPoses(void *linux_side, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastPoseForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::TrackedDevicePose_t *)pOutputPose, (vr::TrackedDevicePose_t *)pOutputGamePose);
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_Submit(void *linux_side, EVREye eEye, const Texture_t *pTexture, const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->Submit((vr::EVREye)eEye, (const vr::Texture_t *)pTexture, (const vr::VRTextureBounds_t *)pBounds, (vr::EVRSubmitFlags)nSubmitFlags);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_027_PostPresentHandoff(void *linux_side)
{
    ((IVRCompositor*)linux_side)->PostPresentHandoff();
}

bool cppIVRCompositor_IVRCompositor_027_GetFrameTiming(void *linux_side, Compositor_FrameTiming *pTiming, uint32_t unFramesAgo)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->GetFrameTiming((vr::Compositor_FrameTiming *)pTiming, (uint32_t)unFramesAgo);
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_027_GetFrameTimings(void *linux_side, Compositor_FrameTiming *pTiming, uint32_t nFrames)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetFrameTimings((vr::Compositor_FrameTiming *)pTiming, (uint32_t)nFrames);
    return _ret;
}

float cppIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining(void *linux_side)
{
    float _ret;
    _ret = ((IVRCompositor*)linux_side)->GetFrameTimeRemaining();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_GetCumulativeStats(void *linux_side, Compositor_CumulativeStats *pStats, uint32_t nStatsSizeInBytes)
{
    ((IVRCompositor*)linux_side)->GetCumulativeStats((vr::Compositor_CumulativeStats *)pStats, (uint32_t)nStatsSizeInBytes);
}

void cppIVRCompositor_IVRCompositor_027_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

HmdColor_t cppIVRCompositor_IVRCompositor_027_GetCurrentFadeColor(void *linux_side, bool bBackground)
{
    HmdColor_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetCurrentFadeColor((bool)bBackground);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_FadeGrid(void *linux_side, float fSeconds, bool bFadeGridIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeGridIn);
}

float cppIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha(void *linux_side)
{
    float _ret;
    _ret = ((IVRCompositor*)linux_side)->GetCurrentGridAlpha();
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride(void *linux_side, const Texture_t *pTextures, uint32_t unTextureCount)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->SetSkyboxOverride((const vr::Texture_t *)pTextures, (uint32_t)unTextureCount);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_ClearSkyboxOverride(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_027_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_027_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_027_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_027_IsFullscreen(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsFullscreen();
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetCurrentSceneFocusProcess();
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_027_GetLastFrameRenderer(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastFrameRenderer();
    return _ret;
}

bool cppIVRCompositor_IVRCompositor_027_CanRenderScene(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->CanRenderScene();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_ShowMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_027_HideMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->HideMirrorWindow();
}

bool cppIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsMirrorWindowVisible();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_CompositorDumpImages(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorDumpImages();
}

bool cppIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->ShouldAppRenderWithLowResources();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn(void *linux_side, bool bOverride)
{
    ((IVRCompositor*)linux_side)->ForceInterleavedReprojectionOn((bool)bOverride);
}

void cppIVRCompositor_IVRCompositor_027_ForceReconnectProcess(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ForceReconnectProcess();
}

void cppIVRCompositor_IVRCompositor_027_SuspendRendering(void *linux_side, bool bSuspend)
{
    ((IVRCompositor*)linux_side)->SuspendRendering((bool)bSuspend);
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11(void *linux_side, EVREye eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetMirrorTextureD3D11((vr::EVREye)eEye, (void *)pD3D11DeviceOrResource, (void **)ppD3D11ShaderResourceView);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11(void *linux_side, void *pD3D11ShaderResourceView)
{
    ((IVRCompositor*)linux_side)->ReleaseMirrorTextureD3D11((void *)pD3D11ShaderResourceView);
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetMirrorTextureGL(void *linux_side, EVREye eEye, glUInt_t *pglTextureId, glSharedTextureHandle_t *pglSharedTextureHandle)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetMirrorTextureGL((vr::EVREye)eEye, (vr::glUInt_t *)pglTextureId, (vr::glSharedTextureHandle_t *)pglSharedTextureHandle);
    return _ret;
}

bool cppIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture(void *linux_side, glUInt_t glTextureId, glSharedTextureHandle_t glSharedTextureHandle)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->ReleaseSharedGLTexture((vr::glUInt_t)glTextureId, (vr::glSharedTextureHandle_t)glSharedTextureHandle);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess(void *linux_side, glSharedTextureHandle_t glSharedTextureHandle)
{
    ((IVRCompositor*)linux_side)->LockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

void cppIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess(void *linux_side, glSharedTextureHandle_t glSharedTextureHandle)
{
    ((IVRCompositor*)linux_side)->UnlockGLSharedTextureForAccess((vr::glSharedTextureHandle_t)glSharedTextureHandle);
}

uint32_t cppIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired(void *linux_side, char *pchValue, uint32_t unBufferSize)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetVulkanInstanceExtensionsRequired((char *)pchValue, (uint32_t)unBufferSize);
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired(void *linux_side, VkPhysicalDevice_T *pPhysicalDevice, char *pchValue, uint32_t unBufferSize)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetVulkanDeviceExtensionsRequired((VkPhysicalDevice_T *)pPhysicalDevice, (char *)pchValue, (uint32_t)unBufferSize);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode(void *linux_side, EVRCompositorTimingMode eTimingMode)
{
    ((IVRCompositor*)linux_side)->SetExplicitTimingMode((vr::EVRCompositorTimingMode)eTimingMode);
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData(void *linux_side)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->SubmitExplicitTimingData();
    return _ret;
}

bool cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsMotionSmoothingEnabled();
    return _ret;
}

bool cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsMotionSmoothingSupported();
    return _ret;
}

bool cppIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsCurrentSceneFocusAppLoading();
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_SetStageOverride_Async(void *linux_side, const char *pchRenderModelPath, const HmdMatrix34_t *pTransform, const Compositor_StageRenderSettings *pRenderSettings, uint32_t nSizeOfRenderSettings)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->SetStageOverride_Async((const char *)pchRenderModelPath, (const vr::HmdMatrix34_t *)pTransform, (const vr::Compositor_StageRenderSettings *)pRenderSettings, (uint32_t)nSizeOfRenderSettings);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_027_ClearStageOverride(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearStageOverride();
}

bool cppIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults(void *linux_side, Compositor_BenchmarkResults *pBenchmarkResults, uint32_t nSizeOfBenchmarkResults)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->GetCompositorBenchmarkResults((vr::Compositor_BenchmarkResults *)pBenchmarkResults, (uint32_t)nSizeOfBenchmarkResults);
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs(void *linux_side, uint32_t *pRenderPosePredictionID, uint32_t *pGamePosePredictionID)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastPosePredictionIDs((uint32_t *)pRenderPosePredictionID, (uint32_t *)pGamePosePredictionID);
    return _ret;
}

EVRCompositorError cppIVRCompositor_IVRCompositor_027_GetPosesForFrame(void *linux_side, uint32_t unPosePredictionID, TrackedDevicePose_t *pPoseArray, uint32_t unPoseArrayCount)
{
    EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetPosesForFrame((uint32_t)unPosePredictionID, (vr::TrackedDevicePose_t *)pPoseArray, (uint32_t)unPoseArrayCount);
    return _ret;
}

#ifdef __cplusplus
}
#endif
