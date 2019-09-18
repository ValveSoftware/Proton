#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_0.9.2/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_006.h"
#ifdef __cplusplus
extern "C" {
#endif
uint32_t cppIVRCompositor_IVRCompositor_006_GetLastError(void *linux_side, char * pchBuffer, uint32_t unBufferSize)
{
    return ((IVRCompositor*)linux_side)->GetLastError((char *)pchBuffer, (uint32_t)unBufferSize);
}

void cppIVRCompositor_IVRCompositor_006_SetVSync(void *linux_side, bool bVSync)
{
    ((IVRCompositor*)linux_side)->SetVSync((bool)bVSync);
}

bool cppIVRCompositor_IVRCompositor_006_GetVSync(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetVSync();
}

void cppIVRCompositor_IVRCompositor_006_SetGamma(void *linux_side, float fGamma)
{
    ((IVRCompositor*)linux_side)->SetGamma((float)fGamma);
}

float cppIVRCompositor_IVRCompositor_006_GetGamma(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetGamma();
}

void cppIVRCompositor_IVRCompositor_006_SetGraphicsDevice(void *linux_side, Compositor_DeviceType eType, void * pDevice)
{
    ((IVRCompositor*)linux_side)->SetGraphicsDevice((vr::Compositor_DeviceType)eType, (void *)pDevice);
}

vr::VRCompositorError cppIVRCompositor_IVRCompositor_006_WaitGetPoses(void *linux_side, TrackedDevicePose_t * pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t * pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    return ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
}

vr::VRCompositorError cppIVRCompositor_IVRCompositor_006_Submit(void *linux_side, Hmd_Eye eEye, void * pTexture, VRTextureBounds_t * pBounds)
{
    return ((IVRCompositor*)linux_side)->Submit((vr::Hmd_Eye)eEye, (void *)pTexture, (vr::VRTextureBounds_t *)pBounds);
}

void cppIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

bool cppIVRCompositor_IVRCompositor_006_GetFrameTiming(void *linux_side, winCompositor_FrameTiming_092 * pTiming, uint32_t unFramesAgo)
{
    Compositor_FrameTiming lin;
    bool _ret;
    if(pTiming)
        struct_Compositor_FrameTiming_092_win_to_lin(pTiming, &lin);
    _ret = ((IVRCompositor*)linux_side)->GetFrameTiming(pTiming ? &lin : nullptr, (uint32_t)unFramesAgo);
    if(pTiming)
        struct_Compositor_FrameTiming_092_lin_to_win(&lin, pTiming);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_006_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

void cppIVRCompositor_IVRCompositor_006_FadeGrid(void *linux_side, float fSeconds, bool bFadeIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeIn);
}

void cppIVRCompositor_IVRCompositor_006_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_006_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_006_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_006_IsFullscreen(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsFullscreen();
}

void cppIVRCompositor_IVRCompositor_006_SetTrackingSpace(void *linux_side, TrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::TrackingUniverseOrigin)eOrigin);
}

vr::TrackingUniverseOrigin cppIVRCompositor_IVRCompositor_006_GetTrackingSpace(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetTrackingSpace();
}

uint32_t cppIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetCurrentSceneFocusProcess();
}

bool cppIVRCompositor_IVRCompositor_006_CanRenderScene(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->CanRenderScene();
}

#ifdef __cplusplus
}
#endif
