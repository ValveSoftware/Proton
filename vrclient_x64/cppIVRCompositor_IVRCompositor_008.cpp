/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_008_GetLastError( void *args )
{
    struct IVRCompositor_IVRCompositor_008_GetLastError_params *params = (struct IVRCompositor_IVRCompositor_008_GetLastError_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetLastError( params->pchBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_SetVSync( void *args )
{
    struct IVRCompositor_IVRCompositor_008_SetVSync_params *params = (struct IVRCompositor_IVRCompositor_008_SetVSync_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetVSync( params->bVSync );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_GetVSync( void *args )
{
    struct IVRCompositor_IVRCompositor_008_GetVSync_params *params = (struct IVRCompositor_IVRCompositor_008_GetVSync_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetVSync(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_SetGamma( void *args )
{
    struct IVRCompositor_IVRCompositor_008_SetGamma_params *params = (struct IVRCompositor_IVRCompositor_008_SetGamma_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetGamma( params->fGamma );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_GetGamma( void *args )
{
    struct IVRCompositor_IVRCompositor_008_GetGamma_params *params = (struct IVRCompositor_IVRCompositor_008_GetGamma_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetGamma(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_008_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_008_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_008_Submit_params *params = (struct IVRCompositor_IVRCompositor_008_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->Submit( params->eEye, params->eTextureType, params->pTexture, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_008_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_008_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    u_Compositor_FrameTiming_093 u_pTiming;
    if (params->pTiming) u_pTiming = *params->pTiming;
    params->_ret = iface->GetFrameTiming( params->pTiming ? &u_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming) *params->pTiming = u_pTiming;
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_008_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_008_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_008_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_008_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_008_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_008_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetSkyboxOverride( params->eTextureType, params->pFront, params->pBack, params->pLeft, params->pRight, params->pTop, params->pBottom );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_ClearSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_008_ClearSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_008_ClearSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_008_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_008_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_008_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_008_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_008_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_008_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_008_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_008_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_008_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_008_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_008_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_008_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess_params *params = (struct IVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneFocusProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_CanRenderScene( void *args )
{
    struct IVRCompositor_IVRCompositor_008_CanRenderScene_params *params = (struct IVRCompositor_IVRCompositor_008_CanRenderScene_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->CanRenderScene(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_ShowMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_008_ShowMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_008_ShowMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->ShowMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_HideMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_008_HideMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_008_HideMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->HideMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_CompositorDumpImages( void *args )
{
    struct IVRCompositor_IVRCompositor_008_CompositorDumpImages_params *params = (struct IVRCompositor_IVRCompositor_008_CompositorDumpImages_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorDumpImages(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_GetFrameTimeRemaining( void *args )
{
    struct IVRCompositor_IVRCompositor_008_GetFrameTimeRemaining_params *params = (struct IVRCompositor_IVRCompositor_008_GetFrameTimeRemaining_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetFrameTimeRemaining(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_008_GetLastFrameRenderer( void *args )
{
    struct IVRCompositor_IVRCompositor_008_GetLastFrameRenderer_params *params = (struct IVRCompositor_IVRCompositor_008_GetLastFrameRenderer_params *)args;
    struct u_IVRCompositor_IVRCompositor_008 *iface = (struct u_IVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetLastFrameRenderer(  );
    return 0;
}

