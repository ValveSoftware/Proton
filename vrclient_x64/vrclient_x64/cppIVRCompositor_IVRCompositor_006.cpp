/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_006.h"
void cppIVRCompositor_IVRCompositor_006_GetLastError( struct cppIVRCompositor_IVRCompositor_006_GetLastError_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastError( params->pchBuffer, params->unBufferSize );
}

void cppIVRCompositor_IVRCompositor_006_SetVSync( struct cppIVRCompositor_IVRCompositor_006_SetVSync_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->SetVSync( params->bVSync );
}

void cppIVRCompositor_IVRCompositor_006_GetVSync( struct cppIVRCompositor_IVRCompositor_006_GetVSync_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (bool)iface->GetVSync(  );
}

void cppIVRCompositor_IVRCompositor_006_SetGamma( struct cppIVRCompositor_IVRCompositor_006_SetGamma_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->SetGamma( params->fGamma );
}

void cppIVRCompositor_IVRCompositor_006_GetGamma( struct cppIVRCompositor_IVRCompositor_006_GetGamma_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (float)iface->GetGamma(  );
}

void cppIVRCompositor_IVRCompositor_006_SetGraphicsDevice( struct cppIVRCompositor_IVRCompositor_006_SetGraphicsDevice_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->SetGraphicsDevice( params->eType, params->pDevice );
}

void cppIVRCompositor_IVRCompositor_006_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_006_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_006_Submit( struct cppIVRCompositor_IVRCompositor_006_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds );
}

void cppIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_006_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_006_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    u_Compositor_FrameTiming_090 u_pTiming;
    if (params->pTiming) u_pTiming = *params->pTiming;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming ? &u_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming) *params->pTiming = u_pTiming;
}

void cppIVRCompositor_IVRCompositor_006_FadeToColor( struct cppIVRCompositor_IVRCompositor_006_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_006_FadeGrid( struct cppIVRCompositor_IVRCompositor_006_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_006_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_006_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_006_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_006_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_006_CompositorQuit( struct cppIVRCompositor_IVRCompositor_006_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_006_IsFullscreen( struct cppIVRCompositor_IVRCompositor_006_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_006_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_006_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_006_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_006_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_006_CanRenderScene( struct cppIVRCompositor_IVRCompositor_006_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

