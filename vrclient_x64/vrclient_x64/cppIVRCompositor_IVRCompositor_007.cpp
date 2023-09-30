/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_007.h"
void cppIVRCompositor_IVRCompositor_007_GetLastError( struct cppIVRCompositor_IVRCompositor_007_GetLastError_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastError( params->pchBuffer, params->unBufferSize );
}

void cppIVRCompositor_IVRCompositor_007_SetVSync( struct cppIVRCompositor_IVRCompositor_007_SetVSync_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->SetVSync( params->bVSync );
}

void cppIVRCompositor_IVRCompositor_007_GetVSync( struct cppIVRCompositor_IVRCompositor_007_GetVSync_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = (bool)iface->GetVSync(  );
}

void cppIVRCompositor_IVRCompositor_007_SetGamma( struct cppIVRCompositor_IVRCompositor_007_SetGamma_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->SetGamma( params->fGamma );
}

void cppIVRCompositor_IVRCompositor_007_GetGamma( struct cppIVRCompositor_IVRCompositor_007_GetGamma_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = (float)iface->GetGamma(  );
}

void cppIVRCompositor_IVRCompositor_007_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_007_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_007_Submit( struct cppIVRCompositor_IVRCompositor_007_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->eTextureType, params->pTexture, params->pBounds );
}

void cppIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_007_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_007_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    u_Compositor_FrameTiming_093 u_pTiming;
    if (params->pTiming) u_pTiming = *params->pTiming;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming ? &u_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming) *params->pTiming = u_pTiming;
}

void cppIVRCompositor_IVRCompositor_007_FadeToColor( struct cppIVRCompositor_IVRCompositor_007_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_007_FadeGrid( struct cppIVRCompositor_IVRCompositor_007_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_007_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_007_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_007_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_007_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_007_CompositorQuit( struct cppIVRCompositor_IVRCompositor_007_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_007_IsFullscreen( struct cppIVRCompositor_IVRCompositor_007_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_007_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_007_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_007_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_007_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_007_CanRenderScene( struct cppIVRCompositor_IVRCompositor_007_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

