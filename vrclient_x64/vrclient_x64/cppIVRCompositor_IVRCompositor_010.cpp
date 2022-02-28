#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_010.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRCompositor_IVRCompositor_010_SetTrackingSpace(void *linux_side, ETrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)eOrigin);
}

vr::ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_010_GetTrackingSpace(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetTrackingSpace();
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_010_WaitGetPoses(void *linux_side, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    return ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_010_GetLastPoses(void *linux_side, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    return ((IVRCompositor*)linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_010_Submit(void *linux_side, EVREye eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags nSubmitFlags)
{
    return ((IVRCompositor*)linux_side)->Submit((vr::EVREye)eEye, (const vr::Texture_t *)pTexture, (const vr::VRTextureBounds_t *)pBounds, (vr::EVRSubmitFlags)nSubmitFlags);
}

void cppIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_010_PostPresentHandoff(void *linux_side)
{
    ((IVRCompositor*)linux_side)->PostPresentHandoff();
}

bool cppIVRCompositor_IVRCompositor_010_GetFrameTiming(void *linux_side, winCompositor_FrameTiming_0914 * pTiming, uint32_t unFramesAgo)
{
    Compositor_FrameTiming lin;
    bool _ret;
    if(pTiming)
        struct_Compositor_FrameTiming_0914_win_to_lin(pTiming, &lin);
    _ret = ((IVRCompositor*)linux_side)->GetFrameTiming(pTiming ? &lin : nullptr, (uint32_t)unFramesAgo);
    if(pTiming)
        struct_Compositor_FrameTiming_0914_lin_to_win(&lin, pTiming);
    return _ret;
}

float cppIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetFrameTimeRemaining();
}

void cppIVRCompositor_IVRCompositor_010_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

void cppIVRCompositor_IVRCompositor_010_FadeGrid(void *linux_side, float fSeconds, bool bFadeIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeIn);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride(void *linux_side, Texture_t * pTextures, uint32_t unTextureCount)
{
    return ((IVRCompositor*)linux_side)->SetSkyboxOverride((const vr::Texture_t *)pTextures, (uint32_t)unTextureCount);
}

void cppIVRCompositor_IVRCompositor_010_ClearSkyboxOverride(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_010_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_010_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_010_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_010_IsFullscreen(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsFullscreen();
}

uint32_t cppIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetCurrentSceneFocusProcess();
}

uint32_t cppIVRCompositor_IVRCompositor_010_GetLastFrameRenderer(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetLastFrameRenderer();
}

bool cppIVRCompositor_IVRCompositor_010_CanRenderScene(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->CanRenderScene();
}

void cppIVRCompositor_IVRCompositor_010_ShowMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_010_HideMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->HideMirrorWindow();
}

bool cppIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsMirrorWindowVisible();
}

void cppIVRCompositor_IVRCompositor_010_CompositorDumpImages(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorDumpImages();
}

#ifdef __cplusplus
}
#endif
