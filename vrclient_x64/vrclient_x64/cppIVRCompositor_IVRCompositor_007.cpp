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
void cppIVRCompositor_IVRCompositor_007_GetLastError( struct cppIVRCompositor_IVRCompositor_007_GetLastError_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastError((char *)params->pchBuffer, (uint32_t)params->unBufferSize);
}

void cppIVRCompositor_IVRCompositor_007_SetVSync( struct cppIVRCompositor_IVRCompositor_007_SetVSync_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetVSync((bool)params->bVSync);
}

void cppIVRCompositor_IVRCompositor_007_GetVSync( struct cppIVRCompositor_IVRCompositor_007_GetVSync_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetVSync();
}

void cppIVRCompositor_IVRCompositor_007_SetGamma( struct cppIVRCompositor_IVRCompositor_007_SetGamma_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetGamma((float)params->fGamma);
}

void cppIVRCompositor_IVRCompositor_007_GetGamma( struct cppIVRCompositor_IVRCompositor_007_GetGamma_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetGamma();
}

void cppIVRCompositor_IVRCompositor_007_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_007_WaitGetPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_007_Submit( struct cppIVRCompositor_IVRCompositor_007_Submit_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->Submit((vr::Hmd_Eye)params->eEye, (vr::GraphicsAPIConvention)params->eTextureType, (void *)params->pTexture, (const vr::VRTextureBounds_t *)params->pBounds);
}

void cppIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_007_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_007_GetFrameTiming_params *params )
{
    Compositor_FrameTiming lin_pTiming;
    if (params->pTiming)
        struct_Compositor_FrameTiming_098_win_to_lin( params->pTiming, &lin_pTiming );
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTiming(params->pTiming ? &lin_pTiming : nullptr, (uint32_t)params->unFramesAgo);
    if (params->pTiming)
        struct_Compositor_FrameTiming_098_lin_to_win( &lin_pTiming, params->pTiming );
}

void cppIVRCompositor_IVRCompositor_007_FadeToColor( struct cppIVRCompositor_IVRCompositor_007_FadeToColor_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeToColor((float)params->fSeconds, (float)params->fRed, (float)params->fGreen, (float)params->fBlue, (float)params->fAlpha, (bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_007_FadeGrid( struct cppIVRCompositor_IVRCompositor_007_FadeGrid_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeGrid((float)params->fSeconds, (bool)params->bFadeIn);
}

void cppIVRCompositor_IVRCompositor_007_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_007_CompositorBringToFront_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_007_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_007_CompositorGoToBack_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_007_CompositorQuit( struct cppIVRCompositor_IVRCompositor_007_CompositorQuit_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorQuit();
}

void cppIVRCompositor_IVRCompositor_007_IsFullscreen( struct cppIVRCompositor_IVRCompositor_007_IsFullscreen_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsFullscreen();
}

void cppIVRCompositor_IVRCompositor_007_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_007_SetTrackingSpace_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetTrackingSpace((vr::TrackingUniverseOrigin)params->eOrigin);
}

void cppIVRCompositor_IVRCompositor_007_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_007_GetTrackingSpace_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetTrackingSpace();
}

void cppIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentSceneFocusProcess();
}

void cppIVRCompositor_IVRCompositor_007_CanRenderScene( struct cppIVRCompositor_IVRCompositor_007_CanRenderScene_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->CanRenderScene();
}

#ifdef __cplusplus
}
#endif
