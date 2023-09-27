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
void cppIVRCompositor_IVRCompositor_006_GetLastError( struct cppIVRCompositor_IVRCompositor_006_GetLastError_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastError((char *)params->pchBuffer, (uint32_t)params->unBufferSize);
}

void cppIVRCompositor_IVRCompositor_006_SetVSync( struct cppIVRCompositor_IVRCompositor_006_SetVSync_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetVSync((bool)params->bVSync);
}

void cppIVRCompositor_IVRCompositor_006_GetVSync( struct cppIVRCompositor_IVRCompositor_006_GetVSync_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetVSync();
}

void cppIVRCompositor_IVRCompositor_006_SetGamma( struct cppIVRCompositor_IVRCompositor_006_SetGamma_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetGamma((float)params->fGamma);
}

void cppIVRCompositor_IVRCompositor_006_GetGamma( struct cppIVRCompositor_IVRCompositor_006_GetGamma_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetGamma();
}

void cppIVRCompositor_IVRCompositor_006_SetGraphicsDevice( struct cppIVRCompositor_IVRCompositor_006_SetGraphicsDevice_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetGraphicsDevice((vr::Compositor_DeviceType)params->eType, (void *)params->pDevice);
}

void cppIVRCompositor_IVRCompositor_006_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_006_WaitGetPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_006_Submit( struct cppIVRCompositor_IVRCompositor_006_Submit_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->Submit((vr::Hmd_Eye)params->eEye, (void *)params->pTexture, (vr::VRTextureBounds_t *)params->pBounds);
}

void cppIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_006_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_006_GetFrameTiming_params *params )
{
    Compositor_FrameTiming lin_pTiming;
    if (params->pTiming)
        struct_Compositor_FrameTiming_092_win_to_lin( params->pTiming, &lin_pTiming );
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTiming(params->pTiming ? &lin_pTiming : nullptr, (uint32_t)params->unFramesAgo);
    if (params->pTiming)
        struct_Compositor_FrameTiming_092_lin_to_win( &lin_pTiming, params->pTiming );
}

void cppIVRCompositor_IVRCompositor_006_FadeToColor( struct cppIVRCompositor_IVRCompositor_006_FadeToColor_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeToColor((float)params->fSeconds, (float)params->fRed, (float)params->fGreen, (float)params->fBlue, (float)params->fAlpha, (bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_006_FadeGrid( struct cppIVRCompositor_IVRCompositor_006_FadeGrid_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeGrid((float)params->fSeconds, (bool)params->bFadeIn);
}

void cppIVRCompositor_IVRCompositor_006_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_006_CompositorBringToFront_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_006_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_006_CompositorGoToBack_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_006_CompositorQuit( struct cppIVRCompositor_IVRCompositor_006_CompositorQuit_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorQuit();
}

void cppIVRCompositor_IVRCompositor_006_IsFullscreen( struct cppIVRCompositor_IVRCompositor_006_IsFullscreen_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsFullscreen();
}

void cppIVRCompositor_IVRCompositor_006_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_006_SetTrackingSpace_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetTrackingSpace((vr::TrackingUniverseOrigin)params->eOrigin);
}

void cppIVRCompositor_IVRCompositor_006_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_006_GetTrackingSpace_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetTrackingSpace();
}

void cppIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentSceneFocusProcess();
}

void cppIVRCompositor_IVRCompositor_006_CanRenderScene( struct cppIVRCompositor_IVRCompositor_006_CanRenderScene_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->CanRenderScene();
}

#ifdef __cplusplus
}
#endif
