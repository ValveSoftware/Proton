#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.8/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_007.h"
#ifdef __cplusplus
extern "C" {
#endif
uint32_t cppIVRCompositor_IVRCompositor_007_GetLastError(void *linux_side, char *pchBuffer, uint32_t unBufferSize)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastError((char *)pchBuffer, (uint32_t)unBufferSize);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_007_SetVSync(void *linux_side, bool bVSync)
{
    ((IVRCompositor*)linux_side)->SetVSync((bool)bVSync);
}

bool cppIVRCompositor_IVRCompositor_007_GetVSync(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->GetVSync();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_007_SetGamma(void *linux_side, float fGamma)
{
    ((IVRCompositor*)linux_side)->SetGamma((float)fGamma);
}

float cppIVRCompositor_IVRCompositor_007_GetGamma(void *linux_side)
{
    float _ret;
    _ret = ((IVRCompositor*)linux_side)->GetGamma();
    return _ret;
}

vr::VRCompositorError cppIVRCompositor_IVRCompositor_007_WaitGetPoses(void *linux_side, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    vr::VRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
    return _ret;
}

vr::VRCompositorError cppIVRCompositor_IVRCompositor_007_Submit(void *linux_side, Hmd_Eye eEye, GraphicsAPIConvention eTextureType, void *pTexture, VRTextureBounds_t *pBounds)
{
    vr::VRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->Submit((vr::Hmd_Eye)eEye, (vr::GraphicsAPIConvention)eTextureType, (void *)pTexture, (const vr::VRTextureBounds_t *)pBounds);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

bool cppIVRCompositor_IVRCompositor_007_GetFrameTiming(void *linux_side, winCompositor_FrameTiming_098 *pTiming, uint32_t unFramesAgo)
{
    bool _ret;
    Compositor_FrameTiming lin;
    if(pTiming)
        struct_Compositor_FrameTiming_098_win_to_lin(pTiming, &lin);
    _ret = ((IVRCompositor*)linux_side)->GetFrameTiming(pTiming ? &lin : nullptr, (uint32_t)unFramesAgo);
    if(pTiming)
        struct_Compositor_FrameTiming_098_lin_to_win(&lin, pTiming);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_007_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

void cppIVRCompositor_IVRCompositor_007_FadeGrid(void *linux_side, float fSeconds, bool bFadeIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeIn);
}

void cppIVRCompositor_IVRCompositor_007_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_007_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_007_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_007_IsFullscreen(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsFullscreen();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_007_SetTrackingSpace(void *linux_side, TrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::TrackingUniverseOrigin)eOrigin);
}

vr::TrackingUniverseOrigin cppIVRCompositor_IVRCompositor_007_GetTrackingSpace(void *linux_side)
{
    vr::TrackingUniverseOrigin _ret;
    _ret = ((IVRCompositor*)linux_side)->GetTrackingSpace();
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetCurrentSceneFocusProcess();
    return _ret;
}

bool cppIVRCompositor_IVRCompositor_007_CanRenderScene(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->CanRenderScene();
    return _ret;
}

#ifdef __cplusplus
}
#endif
