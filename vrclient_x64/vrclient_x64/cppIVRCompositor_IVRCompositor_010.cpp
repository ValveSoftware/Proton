/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_010.h"
void cppIVRCompositor_IVRCompositor_010_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_010_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_010_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_010_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_010_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_010_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_010_GetLastPoses( struct cppIVRCompositor_IVRCompositor_010_GetLastPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_010_Submit( struct cppIVRCompositor_IVRCompositor_010_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_010_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_010_PostPresentHandoff_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_010_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_010_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    u_Compositor_FrameTiming_0914 u_pTiming;
    if (params->pTiming) u_pTiming = *params->pTiming;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming ? &u_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming) *params->pTiming = u_pTiming;
}

void cppIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_010_FadeToColor( struct cppIVRCompositor_IVRCompositor_010_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_010_FadeGrid( struct cppIVRCompositor_IVRCompositor_010_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_010_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_010_ClearSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_010_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_010_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_010_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_010_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_010_CompositorQuit( struct cppIVRCompositor_IVRCompositor_010_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_010_IsFullscreen( struct cppIVRCompositor_IVRCompositor_010_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_010_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_010_GetLastFrameRenderer_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_010_CanRenderScene( struct cppIVRCompositor_IVRCompositor_010_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_010_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_010_ShowMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_010_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_010_HideMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_010_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_010_CompositorDumpImages_params *params )
{
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

