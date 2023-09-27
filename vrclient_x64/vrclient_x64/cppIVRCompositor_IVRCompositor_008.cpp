#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.10/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_008.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRCompositor_IVRCompositor_008_GetLastError( struct cppIVRCompositor_IVRCompositor_008_GetLastError_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastError((char *)params->pchBuffer, (uint32_t)params->unBufferSize);
}

void cppIVRCompositor_IVRCompositor_008_SetVSync( struct cppIVRCompositor_IVRCompositor_008_SetVSync_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetVSync((bool)params->bVSync);
}

void cppIVRCompositor_IVRCompositor_008_GetVSync( struct cppIVRCompositor_IVRCompositor_008_GetVSync_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetVSync();
}

void cppIVRCompositor_IVRCompositor_008_SetGamma( struct cppIVRCompositor_IVRCompositor_008_SetGamma_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetGamma((float)params->fGamma);
}

void cppIVRCompositor_IVRCompositor_008_GetGamma( struct cppIVRCompositor_IVRCompositor_008_GetGamma_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetGamma();
}

void cppIVRCompositor_IVRCompositor_008_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_008_WaitGetPoses_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)params->pRenderPoseArray, (uint32_t)params->unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)params->pGamePoseArray, (uint32_t)params->unGamePoseArrayCount);
}

void cppIVRCompositor_IVRCompositor_008_Submit( struct cppIVRCompositor_IVRCompositor_008_Submit_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->Submit((vr::Hmd_Eye)params->eEye, (vr::GraphicsAPIConvention)params->eTextureType, (void *)params->pTexture, (const vr::VRTextureBounds_t *)params->pBounds, (vr::VRSubmitFlags_t)params->nSubmitFlags);
}

void cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_008_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_008_GetFrameTiming_params *params )
{
    Compositor_FrameTiming lin_pTiming;
    if (params->pTiming)
        struct_Compositor_FrameTiming_0910_win_to_lin( params->pTiming, &lin_pTiming );
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTiming(params->pTiming ? &lin_pTiming : nullptr, (uint32_t)params->unFramesAgo);
    if (params->pTiming)
        struct_Compositor_FrameTiming_0910_lin_to_win( &lin_pTiming, params->pTiming );
}

void cppIVRCompositor_IVRCompositor_008_FadeToColor( struct cppIVRCompositor_IVRCompositor_008_FadeToColor_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeToColor((float)params->fSeconds, (float)params->fRed, (float)params->fGreen, (float)params->fBlue, (float)params->fAlpha, (bool)params->bBackground);
}

void cppIVRCompositor_IVRCompositor_008_FadeGrid( struct cppIVRCompositor_IVRCompositor_008_FadeGrid_params *params )
{
    ((IVRCompositor*)params->linux_side)->FadeGrid((float)params->fSeconds, (bool)params->bFadeIn);
}

void cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetSkyboxOverride((vr::GraphicsAPIConvention)params->eTextureType, (void *)params->pFront, (void *)params->pBack, (void *)params->pLeft, (void *)params->pRight, (void *)params->pTop, (void *)params->pBottom);
}

void cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride_params *params )
{
    ((IVRCompositor*)params->linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_008_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_008_CompositorBringToFront_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_008_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_008_CompositorGoToBack_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_008_CompositorQuit( struct cppIVRCompositor_IVRCompositor_008_CompositorQuit_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorQuit();
}

void cppIVRCompositor_IVRCompositor_008_IsFullscreen( struct cppIVRCompositor_IVRCompositor_008_IsFullscreen_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->IsFullscreen();
}

void cppIVRCompositor_IVRCompositor_008_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_008_SetTrackingSpace_params *params )
{
    ((IVRCompositor*)params->linux_side)->SetTrackingSpace((vr::TrackingUniverseOrigin)params->eOrigin);
}

void cppIVRCompositor_IVRCompositor_008_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_008_GetTrackingSpace_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetTrackingSpace();
}

void cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetCurrentSceneFocusProcess();
}

void cppIVRCompositor_IVRCompositor_008_CanRenderScene( struct cppIVRCompositor_IVRCompositor_008_CanRenderScene_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->CanRenderScene();
}

void cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow_params *params )
{
    ((IVRCompositor*)params->linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_008_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_008_HideMirrorWindow_params *params )
{
    ((IVRCompositor*)params->linux_side)->HideMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_008_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_008_CompositorDumpImages_params *params )
{
    ((IVRCompositor*)params->linux_side)->CompositorDumpImages();
}

void cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetFrameTimeRemaining();
}

void cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer_params *params )
{
    params->_ret = ((IVRCompositor*)params->linux_side)->GetLastFrameRenderer();
}

#ifdef __cplusplus
}
#endif
