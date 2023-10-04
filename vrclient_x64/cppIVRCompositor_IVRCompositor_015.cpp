/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_015_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_015_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_015_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_015_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_015_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_015_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetLastPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetLastPoses_params *params = (struct IVRCompositor_IVRCompositor_015_GetLastPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex_params *params = (struct IVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_PostPresentHandoff( void *args )
{
    struct IVRCompositor_IVRCompositor_015_PostPresentHandoff_params *params = (struct IVRCompositor_IVRCompositor_015_PostPresentHandoff_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->PostPresentHandoff(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_015_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetFrameTimeRemaining( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetFrameTimeRemaining_params *params = (struct IVRCompositor_IVRCompositor_015_GetFrameTimeRemaining_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->GetFrameTimeRemaining(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetCumulativeStats( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetCumulativeStats_params *params = (struct IVRCompositor_IVRCompositor_015_GetCumulativeStats_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->GetCumulativeStats( params->pStats, params->nStatsSizeInBytes );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_015_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_015_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_015_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_015_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_ClearSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_015_ClearSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_015_ClearSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_015_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_015_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_015_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_015_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_015_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_015_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_015_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_015_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess_params *params = (struct IVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneFocusProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetLastFrameRenderer( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetLastFrameRenderer_params *params = (struct IVRCompositor_IVRCompositor_015_GetLastFrameRenderer_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->GetLastFrameRenderer(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_CanRenderScene( void *args )
{
    struct IVRCompositor_IVRCompositor_015_CanRenderScene_params *params = (struct IVRCompositor_IVRCompositor_015_CanRenderScene_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->CanRenderScene(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_ShowMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_015_ShowMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_015_ShowMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->ShowMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_HideMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_015_HideMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_015_HideMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->HideMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_IsMirrorWindowVisible( void *args )
{
    struct IVRCompositor_IVRCompositor_015_IsMirrorWindowVisible_params *params = (struct IVRCompositor_IVRCompositor_015_IsMirrorWindowVisible_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->IsMirrorWindowVisible(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_CompositorDumpImages( void *args )
{
    struct IVRCompositor_IVRCompositor_015_CompositorDumpImages_params *params = (struct IVRCompositor_IVRCompositor_015_CompositorDumpImages_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->CompositorDumpImages(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources( void *args )
{
    struct IVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources_params *params = (struct IVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->ShouldAppRenderWithLowResources(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn( void *args )
{
    struct IVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn_params *params = (struct IVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_ForceReconnectProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_015_ForceReconnectProcess_params *params = (struct IVRCompositor_IVRCompositor_015_ForceReconnectProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->ForceReconnectProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_SuspendRendering( void *args )
{
    struct IVRCompositor_IVRCompositor_015_SuspendRendering_params *params = (struct IVRCompositor_IVRCompositor_015_SuspendRendering_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_RequestScreenshot( void *args )
{
    struct IVRCompositor_IVRCompositor_015_RequestScreenshot_params *params = (struct IVRCompositor_IVRCompositor_015_RequestScreenshot_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->RequestScreenshot( params->type, params->pchDestinationFileName, params->pchVRDestinationFileName );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetCurrentScreenshotType( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetCurrentScreenshotType_params *params = (struct IVRCompositor_IVRCompositor_015_GetCurrentScreenshotType_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->GetCurrentScreenshotType(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11_params *params = (struct IVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->GetMirrorTextureD3D11( params->eEye, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_GetMirrorTextureGL( void *args )
{
    struct IVRCompositor_IVRCompositor_015_GetMirrorTextureGL_params *params = (struct IVRCompositor_IVRCompositor_015_GetMirrorTextureGL_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->GetMirrorTextureGL( params->eEye, params->pglTextureId, params->pglSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture( void *args )
{
    struct IVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture_params *params = (struct IVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    params->_ret = iface->ReleaseSharedGLTexture( params->glTextureId, params->glSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess( void *args )
{
    struct IVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess_params *params = (struct IVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->LockGLSharedTextureForAccess( params->glSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess( void *args )
{
    struct IVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess_params *params = (struct IVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    iface->UnlockGLSharedTextureForAccess( params->glSharedTextureHandle );
    return 0;
}

