/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_006_GetLastError( void *args )
{
    struct IVRCompositor_IVRCompositor_006_GetLastError_params *params = (struct IVRCompositor_IVRCompositor_006_GetLastError_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastError( params->pchBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_SetVSync( void *args )
{
    struct IVRCompositor_IVRCompositor_006_SetVSync_params *params = (struct IVRCompositor_IVRCompositor_006_SetVSync_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->SetVSync( params->bVSync );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_GetVSync( void *args )
{
    struct IVRCompositor_IVRCompositor_006_GetVSync_params *params = (struct IVRCompositor_IVRCompositor_006_GetVSync_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (bool)iface->GetVSync(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_SetGamma( void *args )
{
    struct IVRCompositor_IVRCompositor_006_SetGamma_params *params = (struct IVRCompositor_IVRCompositor_006_SetGamma_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->SetGamma( params->fGamma );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_GetGamma( void *args )
{
    struct IVRCompositor_IVRCompositor_006_GetGamma_params *params = (struct IVRCompositor_IVRCompositor_006_GetGamma_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (float)iface->GetGamma(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_SetGraphicsDevice( void *args )
{
    struct IVRCompositor_IVRCompositor_006_SetGraphicsDevice_params *params = (struct IVRCompositor_IVRCompositor_006_SetGraphicsDevice_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->SetGraphicsDevice( params->eType, params->pDevice );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_006_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_006_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_006_Submit_params *params = (struct IVRCompositor_IVRCompositor_006_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_006_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_006_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_006_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    u_Compositor_FrameTiming_090 u_pTiming;
    if (params->pTiming) u_pTiming = *params->pTiming;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming ? &u_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming) *params->pTiming = u_pTiming;
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_006_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_006_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_006_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_006_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_006_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_006_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_006_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_006_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_006_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_006_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_006_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_006_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_006_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_006_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_006_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_006_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess_params *params = (struct IVRCompositor_IVRCompositor_006_GetCurrentSceneFocusProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_006_CanRenderScene( void *args )
{
    struct IVRCompositor_IVRCompositor_006_CanRenderScene_params *params = (struct IVRCompositor_IVRCompositor_006_CanRenderScene_params *)args;
    struct u_IVRCompositor_IVRCompositor_006 *iface = (struct u_IVRCompositor_IVRCompositor_006 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
    return 0;
}

