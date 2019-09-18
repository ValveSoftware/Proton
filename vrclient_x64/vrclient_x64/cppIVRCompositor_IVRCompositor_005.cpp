#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_0.9.1/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_005.h"
#ifdef __cplusplus
extern "C" {
#endif
uint32_t cppIVRCompositor_IVRCompositor_005_GetLastError(void *linux_side, char * pchBuffer, uint32_t unBufferSize)
{
    return ((IVRCompositor*)linux_side)->GetLastError((char *)pchBuffer, (uint32_t)unBufferSize);
}

void cppIVRCompositor_IVRCompositor_005_SetVSync(void *linux_side, bool bVSync)
{
    ((IVRCompositor*)linux_side)->SetVSync((bool)bVSync);
}

bool cppIVRCompositor_IVRCompositor_005_GetVSync(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetVSync();
}

void cppIVRCompositor_IVRCompositor_005_SetGamma(void *linux_side, float fGamma)
{
    ((IVRCompositor*)linux_side)->SetGamma((float)fGamma);
}

float cppIVRCompositor_IVRCompositor_005_GetGamma(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetGamma();
}

void cppIVRCompositor_IVRCompositor_005_SetGraphicsDevice(void *linux_side, Compositor_DeviceType eType, void * pDevice)
{
    ((IVRCompositor*)linux_side)->SetGraphicsDevice((vr::Compositor_DeviceType)eType, (void *)pDevice);
}

void cppIVRCompositor_IVRCompositor_005_WaitGetPoses(void *linux_side, TrackedDevicePose_t * pPoseArray, uint32_t unPoseArrayCount)
{
    ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pPoseArray, (uint32_t)unPoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_005_Submit(void *linux_side, Hmd_Eye eEye, void * pTexture, Compositor_TextureBounds * pBounds)
{
    ((IVRCompositor*)linux_side)->Submit((vr::Hmd_Eye)eEye, (void *)pTexture, (vr::Compositor_TextureBounds *)pBounds);
}

void cppIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_005_GetOverlayDefaults(void *linux_side, Compositor_OverlaySettings * pSettings)
{
    ((IVRCompositor*)linux_side)->GetOverlayDefaults((vr::Compositor_OverlaySettings *)pSettings);
}

void cppIVRCompositor_IVRCompositor_005_SetOverlay(void *linux_side, void * pTexture, Compositor_OverlaySettings * pSettings)
{
    ((IVRCompositor*)linux_side)->SetOverlay((void *)pTexture, (vr::Compositor_OverlaySettings *)pSettings);
}

void cppIVRCompositor_IVRCompositor_005_SetOverlayRaw(void *linux_side, void * buffer, uint32_t width, uint32_t height, uint32_t depth, Compositor_OverlaySettings * pSettings)
{
    ((IVRCompositor*)linux_side)->SetOverlayRaw((void *)buffer, (uint32_t)width, (uint32_t)height, (uint32_t)depth, (vr::Compositor_OverlaySettings *)pSettings);
}

void cppIVRCompositor_IVRCompositor_005_SetOverlayFromFile(void *linux_side, const char * pchFilePath, Compositor_OverlaySettings * pSettings)
{
    ((IVRCompositor*)linux_side)->SetOverlayFromFile((const char *)pchFilePath, (vr::Compositor_OverlaySettings *)pSettings);
}

void cppIVRCompositor_IVRCompositor_005_ClearOverlay(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearOverlay();
}

bool cppIVRCompositor_IVRCompositor_005_GetFrameTiming(void *linux_side, winCompositor_FrameTiming_091 * pTiming, uint32_t unFramesAgo)
{
    Compositor_FrameTiming lin;
    bool _ret;
    if(pTiming)
        struct_Compositor_FrameTiming_091_win_to_lin(pTiming, &lin);
    _ret = ((IVRCompositor*)linux_side)->GetFrameTiming(pTiming ? &lin : nullptr, (uint32_t)unFramesAgo);
    if(pTiming)
        struct_Compositor_FrameTiming_091_lin_to_win(&lin, pTiming);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_005_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

void cppIVRCompositor_IVRCompositor_005_FadeGrid(void *linux_side, float fSeconds, bool bFadeIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeIn);
}

void cppIVRCompositor_IVRCompositor_005_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_005_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_005_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_005_IsFullscreen(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->IsFullscreen();
}

bool cppIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection(void *linux_side, Compositor_OverlaySettings * pSettings, float fAspectRatio, TrackingUniverseOrigin eOrigin, HmdVector3_t vSource, HmdVector3_t vDirection, HmdVector2_t * pvecIntersectionUV, HmdVector3_t * pvecIntersectionTrackingSpace)
{
    return ((IVRCompositor*)linux_side)->ComputeOverlayIntersection((const vr::Compositor_OverlaySettings *)pSettings, (float)fAspectRatio, (vr::TrackingUniverseOrigin)eOrigin, (vr::HmdVector3_t)vSource, (vr::HmdVector3_t)vDirection, (vr::HmdVector2_t *)pvecIntersectionUV, (vr::HmdVector3_t *)pvecIntersectionTrackingSpace);
}

void cppIVRCompositor_IVRCompositor_005_SetTrackingSpace(void *linux_side, TrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::TrackingUniverseOrigin)eOrigin);
}

vr::TrackingUniverseOrigin cppIVRCompositor_IVRCompositor_005_GetTrackingSpace(void *linux_side)
{
    return ((IVRCompositor*)linux_side)->GetTrackingSpace();
}

#ifdef __cplusplus
}
#endif
