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
void cppIVRCompositor_IVRCompositor_005_GetLastError( struct cppIVRCompositor_IVRCompositor_005_GetLastError_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastError((char *)params->pchBuffer, (uint32_t)params->unBufferSize);
}

void cppIVRCompositor_IVRCompositor_005_SetVSync( struct cppIVRCompositor_IVRCompositor_005_SetVSync_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetVSync((bool)params->bVSync);
}

void cppIVRCompositor_IVRCompositor_005_GetVSync( struct cppIVRCompositor_IVRCompositor_005_GetVSync_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetVSync();
}

void cppIVRCompositor_IVRCompositor_005_SetGamma( struct cppIVRCompositor_IVRCompositor_005_SetGamma_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetGamma((float)params->fGamma);
}

void cppIVRCompositor_IVRCompositor_005_GetGamma( struct cppIVRCompositor_IVRCompositor_005_GetGamma_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetGamma();
}

void cppIVRCompositor_IVRCompositor_005_SetGraphicsDevice( struct cppIVRCompositor_IVRCompositor_005_SetGraphicsDevice_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetGraphicsDevice((vr::Compositor_DeviceType)params->eType, (void *)params->pDevice);
}

void cppIVRCompositor_IVRCompositor_005_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_005_WaitGetPoses_params *params )
{
    ((IVRCompositor*)params->linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)params->pPoseArray, (uint32_t)params->unPoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_005_Submit( struct cppIVRCompositor_IVRCompositor_005_Submit_params *params )
{
    ((IVRCompositor*)params->linux_side)->Submit((vr::Hmd_Eye)params->eEye, (void *)params->pTexture, (vr::Compositor_TextureBounds *)params->pBounds);
}

void cppIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_005_GetOverlayDefaults( struct cppIVRCompositor_IVRCompositor_005_GetOverlayDefaults_params *params )
{
    ((IVRCompositor*)params->linux_side)->GetOverlayDefaults((vr::Compositor_OverlaySettings *)params->pSettings);
}

void cppIVRCompositor_IVRCompositor_005_SetOverlay( struct cppIVRCompositor_IVRCompositor_005_SetOverlay_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetOverlay((void *)params->pTexture, (vr::Compositor_OverlaySettings *)params->pSettings);
}

void cppIVRCompositor_IVRCompositor_005_SetOverlayRaw( struct cppIVRCompositor_IVRCompositor_005_SetOverlayRaw_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetOverlayRaw((void *)params->buffer, (uint32_t)params->width, (uint32_t)params->height, (uint32_t)params->depth, (vr::Compositor_OverlaySettings *)params->pSettings);
}

void cppIVRCompositor_IVRCompositor_005_SetOverlayFromFile( struct cppIVRCompositor_IVRCompositor_005_SetOverlayFromFile_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetOverlayFromFile((const char *)params->pchFilePath, (vr::Compositor_OverlaySettings *)params->pSettings);
}

void cppIVRCompositor_IVRCompositor_005_ClearOverlay( struct cppIVRCompositor_IVRCompositor_005_ClearOverlay_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearOverlay();
}

void cppIVRCompositor_IVRCompositor_005_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_005_GetFrameTiming_params *params )
{
    Compositor_FrameTiming lin_pTiming;
    if (params->pTiming)
        struct_Compositor_FrameTiming_091_win_to_lin( params->pTiming, &lin_pTiming );
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTiming(params->pTiming ? &lin_pTiming : nullptr, (uint32_t)params->unFramesAgo);
    if (params->pTiming)
        struct_Compositor_FrameTiming_091_lin_to_win( &lin_pTiming, params->pTiming );
}

void cppIVRCompositor_IVRCompositor_005_FadeToColor( struct cppIVRCompositor_IVRCompositor_005_FadeToColor_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeToColor((float)params->fSeconds, (float)params->fRed, (float)params->fGreen, (float)params->fBlue, (float)params->fAlpha, (bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_005_FadeGrid( struct cppIVRCompositor_IVRCompositor_005_FadeGrid_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeGrid((float)params->fSeconds, (bool)params->bFadeIn);
}

void cppIVRCompositor_IVRCompositor_005_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_005_CompositorBringToFront_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_005_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_005_CompositorGoToBack_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_005_CompositorQuit( struct cppIVRCompositor_IVRCompositor_005_CompositorQuit_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorQuit();
}

void cppIVRCompositor_IVRCompositor_005_IsFullscreen( struct cppIVRCompositor_IVRCompositor_005_IsFullscreen_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsFullscreen();
}

void cppIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection( struct cppIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->ComputeOverlayIntersection((const vr::Compositor_OverlaySettings *)params->pSettings, (float)params->fAspectRatio, (vr::TrackingUniverseOrigin)params->eOrigin, (vr::HmdVector3_t)params->vSource, (vr::HmdVector3_t)params->vDirection, (vr::HmdVector2_t *)params->pvecIntersectionUV, (vr::HmdVector3_t *)params->pvecIntersectionTrackingSpace);
}

void cppIVRCompositor_IVRCompositor_005_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_005_SetTrackingSpace_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetTrackingSpace((vr::TrackingUniverseOrigin)params->eOrigin);
}

void cppIVRCompositor_IVRCompositor_005_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_005_GetTrackingSpace_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetTrackingSpace();
}

#ifdef __cplusplus
}
#endif
