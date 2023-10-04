/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_022_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_022_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_022_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_022_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_022_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_022_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetLastPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetLastPoses_params *params = (struct IVRCompositor_IVRCompositor_022_GetLastPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex_params *params = (struct IVRCompositor_IVRCompositor_022_GetLastPoseForTrackedDeviceIndex_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_022_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_PostPresentHandoff( void *args )
{
    struct IVRCompositor_IVRCompositor_022_PostPresentHandoff_params *params = (struct IVRCompositor_IVRCompositor_022_PostPresentHandoff_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->PostPresentHandoff(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_022_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetFrameTimings( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetFrameTimings_params *params = (struct IVRCompositor_IVRCompositor_022_GetFrameTimings_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetFrameTimings( params->pTiming, params->nFrames );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetFrameTimeRemaining( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetFrameTimeRemaining_params *params = (struct IVRCompositor_IVRCompositor_022_GetFrameTimeRemaining_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetFrameTimeRemaining(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetCumulativeStats( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetCumulativeStats_params *params = (struct IVRCompositor_IVRCompositor_022_GetCumulativeStats_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->GetCumulativeStats( params->pStats, params->nStatsSizeInBytes );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_022_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_022_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetCurrentFadeColor( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetCurrentFadeColor_params *params = (struct IVRCompositor_IVRCompositor_022_GetCurrentFadeColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    *params->_ret = iface->GetCurrentFadeColor( params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_022_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_022_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetCurrentGridAlpha( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetCurrentGridAlpha_params *params = (struct IVRCompositor_IVRCompositor_022_GetCurrentGridAlpha_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetCurrentGridAlpha(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_ClearSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_022_ClearSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_022_ClearSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_022_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_022_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_022_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_022_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_022_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_022_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_022_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_022_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess_params *params = (struct IVRCompositor_IVRCompositor_022_GetCurrentSceneFocusProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneFocusProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetLastFrameRenderer( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetLastFrameRenderer_params *params = (struct IVRCompositor_IVRCompositor_022_GetLastFrameRenderer_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetLastFrameRenderer(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_CanRenderScene( void *args )
{
    struct IVRCompositor_IVRCompositor_022_CanRenderScene_params *params = (struct IVRCompositor_IVRCompositor_022_CanRenderScene_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->CanRenderScene(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_ShowMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_022_ShowMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_022_ShowMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->ShowMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_HideMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_022_HideMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_022_HideMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->HideMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_IsMirrorWindowVisible( void *args )
{
    struct IVRCompositor_IVRCompositor_022_IsMirrorWindowVisible_params *params = (struct IVRCompositor_IVRCompositor_022_IsMirrorWindowVisible_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->IsMirrorWindowVisible(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_CompositorDumpImages( void *args )
{
    struct IVRCompositor_IVRCompositor_022_CompositorDumpImages_params *params = (struct IVRCompositor_IVRCompositor_022_CompositorDumpImages_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->CompositorDumpImages(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources( void *args )
{
    struct IVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources_params *params = (struct IVRCompositor_IVRCompositor_022_ShouldAppRenderWithLowResources_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->ShouldAppRenderWithLowResources(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn( void *args )
{
    struct IVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn_params *params = (struct IVRCompositor_IVRCompositor_022_ForceInterleavedReprojectionOn_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_ForceReconnectProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_022_ForceReconnectProcess_params *params = (struct IVRCompositor_IVRCompositor_022_ForceReconnectProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->ForceReconnectProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_SuspendRendering( void *args )
{
    struct IVRCompositor_IVRCompositor_022_SuspendRendering_params *params = (struct IVRCompositor_IVRCompositor_022_SuspendRendering_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11_params *params = (struct IVRCompositor_IVRCompositor_022_GetMirrorTextureD3D11_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetMirrorTextureD3D11( params->eEye, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11( void *args )
{
    struct IVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11_params *params = (struct IVRCompositor_IVRCompositor_022_ReleaseMirrorTextureD3D11_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->ReleaseMirrorTextureD3D11( params->pD3D11ShaderResourceView );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetMirrorTextureGL( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetMirrorTextureGL_params *params = (struct IVRCompositor_IVRCompositor_022_GetMirrorTextureGL_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetMirrorTextureGL( params->eEye, params->pglTextureId, params->pglSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture( void *args )
{
    struct IVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture_params *params = (struct IVRCompositor_IVRCompositor_022_ReleaseSharedGLTexture_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->ReleaseSharedGLTexture( params->glTextureId, params->glSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess( void *args )
{
    struct IVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess_params *params = (struct IVRCompositor_IVRCompositor_022_LockGLSharedTextureForAccess_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->LockGLSharedTextureForAccess( params->glSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess( void *args )
{
    struct IVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess_params *params = (struct IVRCompositor_IVRCompositor_022_UnlockGLSharedTextureForAccess_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->UnlockGLSharedTextureForAccess( params->glSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired_params *params = (struct IVRCompositor_IVRCompositor_022_GetVulkanInstanceExtensionsRequired_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->GetVulkanInstanceExtensionsRequired( params->pchValue, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_SetExplicitTimingMode( void *args )
{
    struct IVRCompositor_IVRCompositor_022_SetExplicitTimingMode_params *params = (struct IVRCompositor_IVRCompositor_022_SetExplicitTimingMode_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    iface->SetExplicitTimingMode( params->eTimingMode );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData( void *args )
{
    struct IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData_params *params = (struct IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->SubmitExplicitTimingData(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled( void *args )
{
    struct IVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled_params *params = (struct IVRCompositor_IVRCompositor_022_IsMotionSmoothingEnabled_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->IsMotionSmoothingEnabled(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported( void *args )
{
    struct IVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported_params *params = (struct IVRCompositor_IVRCompositor_022_IsMotionSmoothingSupported_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->IsMotionSmoothingSupported(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading( void *args )
{
    struct IVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading_params *params = (struct IVRCompositor_IVRCompositor_022_IsCurrentSceneFocusAppLoading_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    params->_ret = iface->IsCurrentSceneFocusAppLoading(  );
    return 0;
}

