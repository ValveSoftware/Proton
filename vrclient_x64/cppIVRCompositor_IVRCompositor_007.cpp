/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_007_GetLastError( void *args )
{
    struct IVRCompositor_IVRCompositor_007_GetLastError_params *params = (struct IVRCompositor_IVRCompositor_007_GetLastError_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = iface->GetLastError( params->pchBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_SetVSync( void *args )
{
    struct IVRCompositor_IVRCompositor_007_SetVSync_params *params = (struct IVRCompositor_IVRCompositor_007_SetVSync_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->SetVSync( params->bVSync );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_GetVSync( void *args )
{
    struct IVRCompositor_IVRCompositor_007_GetVSync_params *params = (struct IVRCompositor_IVRCompositor_007_GetVSync_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = iface->GetVSync(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_SetGamma( void *args )
{
    struct IVRCompositor_IVRCompositor_007_SetGamma_params *params = (struct IVRCompositor_IVRCompositor_007_SetGamma_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->SetGamma( params->fGamma );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_GetGamma( void *args )
{
    struct IVRCompositor_IVRCompositor_007_GetGamma_params *params = (struct IVRCompositor_IVRCompositor_007_GetGamma_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = iface->GetGamma(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_007_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_007_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_007_Submit_params *params = (struct IVRCompositor_IVRCompositor_007_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = iface->Submit( params->eEye, params->eTextureType, params->pTexture, params->pBounds );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_007_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_007_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_007_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    u_Compositor_FrameTiming_093 u_pTiming;
    if (params->pTiming) u_pTiming = *params->pTiming;
    params->_ret = iface->GetFrameTiming( params->pTiming ? &u_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming) *params->pTiming = u_pTiming;
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_007_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_007_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_007_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_007_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_007_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_007_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_007_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_007_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_007_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_007_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_007_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_007_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_007_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_007_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_007_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_007_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess_params *params = (struct IVRCompositor_IVRCompositor_007_GetCurrentSceneFocusProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneFocusProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_007_CanRenderScene( void *args )
{
    struct IVRCompositor_IVRCompositor_007_CanRenderScene_params *params = (struct IVRCompositor_IVRCompositor_007_CanRenderScene_params *)args;
    struct u_IVRCompositor_IVRCompositor_007 *iface = (struct u_IVRCompositor_IVRCompositor_007 *)params->linux_side;
    params->_ret = iface->CanRenderScene(  );
    return 0;
}

