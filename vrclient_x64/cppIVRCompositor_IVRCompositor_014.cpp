/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_014_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_014_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_014_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_014_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_014_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_014_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_014_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_GetLastPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_014_GetLastPoses_params *params = (struct IVRCompositor_IVRCompositor_014_GetLastPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex( void *args )
{
    struct IVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex_params *params = (struct IVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_PostPresentHandoff( void *args )
{
    struct IVRCompositor_IVRCompositor_014_PostPresentHandoff_params *params = (struct IVRCompositor_IVRCompositor_014_PostPresentHandoff_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->PostPresentHandoff(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_014_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_014_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_GetFrameTimeRemaining( void *args )
{
    struct IVRCompositor_IVRCompositor_014_GetFrameTimeRemaining_params *params = (struct IVRCompositor_IVRCompositor_014_GetFrameTimeRemaining_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->GetFrameTimeRemaining(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_014_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_014_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_014_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_014_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_ClearSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_014_ClearSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_014_ClearSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_014_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_014_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_014_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_014_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_014_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_014_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_014_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_014_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess_params *params = (struct IVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneFocusProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_GetLastFrameRenderer( void *args )
{
    struct IVRCompositor_IVRCompositor_014_GetLastFrameRenderer_params *params = (struct IVRCompositor_IVRCompositor_014_GetLastFrameRenderer_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->GetLastFrameRenderer(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_CanRenderScene( void *args )
{
    struct IVRCompositor_IVRCompositor_014_CanRenderScene_params *params = (struct IVRCompositor_IVRCompositor_014_CanRenderScene_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->CanRenderScene(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_ShowMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_014_ShowMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_014_ShowMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->ShowMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_HideMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_014_HideMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_014_HideMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->HideMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_IsMirrorWindowVisible( void *args )
{
    struct IVRCompositor_IVRCompositor_014_IsMirrorWindowVisible_params *params = (struct IVRCompositor_IVRCompositor_014_IsMirrorWindowVisible_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->IsMirrorWindowVisible(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_CompositorDumpImages( void *args )
{
    struct IVRCompositor_IVRCompositor_014_CompositorDumpImages_params *params = (struct IVRCompositor_IVRCompositor_014_CompositorDumpImages_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->CompositorDumpImages(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources( void *args )
{
    struct IVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources_params *params = (struct IVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = iface->ShouldAppRenderWithLowResources(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn( void *args )
{
    struct IVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn_params *params = (struct IVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_ForceReconnectProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_014_ForceReconnectProcess_params *params = (struct IVRCompositor_IVRCompositor_014_ForceReconnectProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->ForceReconnectProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_SuspendRendering( void *args )
{
    struct IVRCompositor_IVRCompositor_014_SuspendRendering_params *params = (struct IVRCompositor_IVRCompositor_014_SuspendRendering_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
    return 0;
}

