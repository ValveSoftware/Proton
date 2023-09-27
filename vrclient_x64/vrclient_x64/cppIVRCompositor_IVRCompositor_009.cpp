#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.13/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_009.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRCompositor_IVRCompositor_009_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_009_SetTrackingSpace_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)params->eOrigin);
}

void cppIVRCompositor_IVRCompositor_009_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_009_GetTrackingSpace_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetTrackingSpace();
}

void cppIVRCompositor_IVRCompositor_009_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_009_WaitGetPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_009_GetLastPoses( struct cppIVRCompositor_IVRCompositor_009_GetLastPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_009_Submit( struct cppIVRCompositor_IVRCompositor_009_Submit_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->Submit((vr::EVREye)params->eEye, (const vr::Texture_t *)params->pTexture, (const vr::VRTextureBounds_t *)params->pBounds, (vr::EVRSubmitFlags)params->nSubmitFlags);
}

void cppIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_009_ClearLastSubmittedFrame_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_009_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_009_PostPresentHandoff_params *params )
{
    ((IVRCompositor*)params->linux_side)->PostPresentHandoff();
}

void cppIVRCompositor_IVRCompositor_009_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_009_GetFrameTiming_params *params )
{
    Compositor_FrameTiming lin_pTiming;
    if (params->pTiming)
        struct_Compositor_FrameTiming_0913_win_to_lin( params->pTiming, &lin_pTiming );
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTiming(params->pTiming ? &lin_pTiming : nullptr, (uint32_t)params->unFramesAgo);
    if (params->pTiming)
        struct_Compositor_FrameTiming_0913_lin_to_win( &lin_pTiming, params->pTiming );
}

void cppIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_009_GetFrameTimeRemaining_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTimeRemaining();
}

void cppIVRCompositor_IVRCompositor_009_FadeToColor( struct cppIVRCompositor_IVRCompositor_009_FadeToColor_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeToColor((float)params->fSeconds, (float)params->fRed, (float)params->fGreen, (float)params->fBlue, (float)params->fAlpha, (bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_009_FadeGrid( struct cppIVRCompositor_IVRCompositor_009_FadeGrid_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeGrid((float)params->fSeconds, (bool)params->bFadeIn);
}

void cppIVRCompositor_IVRCompositor_009_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_009_SetSkyboxOverride_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->SetSkyboxOverride((const vr::Texture_t *)params->pTextures, (uint32_t)params->unTextureCount);
}

void cppIVRCompositor_IVRCompositor_009_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_009_ClearSkyboxOverride_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_009_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_009_CompositorBringToFront_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_009_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_009_CompositorGoToBack_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_009_CompositorQuit( struct cppIVRCompositor_IVRCompositor_009_CompositorQuit_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorQuit();
}

void cppIVRCompositor_IVRCompositor_009_IsFullscreen( struct cppIVRCompositor_IVRCompositor_009_IsFullscreen_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsFullscreen();
}

void cppIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_009_GetCurrentSceneFocusProcess_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentSceneFocusProcess();
}

void cppIVRCompositor_IVRCompositor_009_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_009_GetLastFrameRenderer_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastFrameRenderer();
}

void cppIVRCompositor_IVRCompositor_009_CanRenderScene( struct cppIVRCompositor_IVRCompositor_009_CanRenderScene_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->CanRenderScene();
}

void cppIVRCompositor_IVRCompositor_009_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_009_ShowMirrorWindow_params *params )
{
    ((IVRCompositor*)params->linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_009_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_009_HideMirrorWindow_params *params )
{
    ((IVRCompositor*)params->linux_side)->HideMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_009_IsMirrorWindowVisible_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsMirrorWindowVisible();
}

void cppIVRCompositor_IVRCompositor_009_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_009_CompositorDumpImages_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorDumpImages();
}

#ifdef __cplusplus
}
#endif
