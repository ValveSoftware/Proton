/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_008.h"
void cppIVRCompositor_IVRCompositor_008_GetLastError( struct cppIVRCompositor_IVRCompositor_008_GetLastError_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastError( params->pchBuffer, params->unBufferSize );
}

void cppIVRCompositor_IVRCompositor_008_SetVSync( struct cppIVRCompositor_IVRCompositor_008_SetVSync_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetVSync( params->bVSync );
}

void cppIVRCompositor_IVRCompositor_008_GetVSync( struct cppIVRCompositor_IVRCompositor_008_GetVSync_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (bool)iface->GetVSync(  );
}

void cppIVRCompositor_IVRCompositor_008_SetGamma( struct cppIVRCompositor_IVRCompositor_008_SetGamma_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetGamma( params->fGamma );
}

void cppIVRCompositor_IVRCompositor_008_GetGamma( struct cppIVRCompositor_IVRCompositor_008_GetGamma_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (float)iface->GetGamma(  );
}

void cppIVRCompositor_IVRCompositor_008_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_008_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_008_Submit( struct cppIVRCompositor_IVRCompositor_008_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->eTextureType, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_008_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_008_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    u_Compositor_FrameTiming_093 u_pTiming;
    if (params->pTiming) u_pTiming = *params->pTiming;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming ? &u_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming) *params->pTiming = u_pTiming;
}

void cppIVRCompositor_IVRCompositor_008_FadeToColor( struct cppIVRCompositor_IVRCompositor_008_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_008_FadeGrid( struct cppIVRCompositor_IVRCompositor_008_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetSkyboxOverride( params->eTextureType, params->pFront, params->pBack, params->pLeft, params->pRight, params->pTop, params->pBottom );
}

void cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_008_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_008_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_008_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_008_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_008_CompositorQuit( struct cppIVRCompositor_IVRCompositor_008_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_008_IsFullscreen( struct cppIVRCompositor_IVRCompositor_008_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_008_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_008_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_008_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_008_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_008_CanRenderScene( struct cppIVRCompositor_IVRCompositor_008_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_008_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_008_HideMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_008_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_008_CompositorDumpImages_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

void cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer_params *params )
{
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
}

