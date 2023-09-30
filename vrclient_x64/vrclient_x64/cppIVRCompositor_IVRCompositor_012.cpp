/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_012_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_012_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_012_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_012_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_012_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_012_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_012_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_GetLastPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_012_GetLastPoses_params *params = (struct IVRCompositor_IVRCompositor_012_GetLastPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex( void *args )
{
    struct IVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex_params *params = (struct IVRCompositor_IVRCompositor_012_GetLastPoseForTrackedDeviceIndex_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_012_Submit_params *params = (struct IVRCompositor_IVRCompositor_012_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_012_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_PostPresentHandoff( void *args )
{
    struct IVRCompositor_IVRCompositor_012_PostPresentHandoff_params *params = (struct IVRCompositor_IVRCompositor_012_PostPresentHandoff_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->PostPresentHandoff(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_012_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_012_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_GetFrameTimeRemaining( void *args )
{
    struct IVRCompositor_IVRCompositor_012_GetFrameTimeRemaining_params *params = (struct IVRCompositor_IVRCompositor_012_GetFrameTimeRemaining_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_012_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_012_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_012_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_012_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_012_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_012_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_ClearSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_012_ClearSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_012_ClearSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_012_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_012_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_012_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_012_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_012_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_012_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_012_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_012_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess_params *params = (struct IVRCompositor_IVRCompositor_012_GetCurrentSceneFocusProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_GetLastFrameRenderer( void *args )
{
    struct IVRCompositor_IVRCompositor_012_GetLastFrameRenderer_params *params = (struct IVRCompositor_IVRCompositor_012_GetLastFrameRenderer_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_CanRenderScene( void *args )
{
    struct IVRCompositor_IVRCompositor_012_CanRenderScene_params *params = (struct IVRCompositor_IVRCompositor_012_CanRenderScene_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_ShowMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_012_ShowMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_012_ShowMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->ShowMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_HideMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_012_HideMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_012_HideMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->HideMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_IsMirrorWindowVisible( void *args )
{
    struct IVRCompositor_IVRCompositor_012_IsMirrorWindowVisible_params *params = (struct IVRCompositor_IVRCompositor_012_IsMirrorWindowVisible_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_CompositorDumpImages( void *args )
{
    struct IVRCompositor_IVRCompositor_012_CompositorDumpImages_params *params = (struct IVRCompositor_IVRCompositor_012_CompositorDumpImages_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    iface->CompositorDumpImages(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources( void *args )
{
    struct IVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources_params *params = (struct IVRCompositor_IVRCompositor_012_ShouldAppRenderWithLowResources_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    params->_ret = (bool)iface->ShouldAppRenderWithLowResources(  );
    return 0;
}

