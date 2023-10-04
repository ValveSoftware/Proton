/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_017_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_017_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_017_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_017_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_017_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_017_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetLastPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetLastPoses_params *params = (struct IVRCompositor_IVRCompositor_017_GetLastPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex_params *params = (struct IVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_PostPresentHandoff( void *args )
{
    struct IVRCompositor_IVRCompositor_017_PostPresentHandoff_params *params = (struct IVRCompositor_IVRCompositor_017_PostPresentHandoff_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->PostPresentHandoff(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_017_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetFrameTimings( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetFrameTimings_params *params = (struct IVRCompositor_IVRCompositor_017_GetFrameTimings_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->GetFrameTimings( params->pTiming, params->nFrames );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetFrameTimeRemaining( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetFrameTimeRemaining_params *params = (struct IVRCompositor_IVRCompositor_017_GetFrameTimeRemaining_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->GetFrameTimeRemaining(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetCumulativeStats( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetCumulativeStats_params *params = (struct IVRCompositor_IVRCompositor_017_GetCumulativeStats_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->GetCumulativeStats( params->pStats, params->nStatsSizeInBytes );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_017_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_017_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_017_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_017_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_ClearSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_017_ClearSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_017_ClearSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_017_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_017_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_017_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_017_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_017_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_017_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_017_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_017_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess_params *params = (struct IVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneFocusProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetLastFrameRenderer( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetLastFrameRenderer_params *params = (struct IVRCompositor_IVRCompositor_017_GetLastFrameRenderer_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->GetLastFrameRenderer(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_CanRenderScene( void *args )
{
    struct IVRCompositor_IVRCompositor_017_CanRenderScene_params *params = (struct IVRCompositor_IVRCompositor_017_CanRenderScene_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->CanRenderScene(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_ShowMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_017_ShowMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_017_ShowMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->ShowMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_HideMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_017_HideMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_017_HideMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->HideMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_IsMirrorWindowVisible( void *args )
{
    struct IVRCompositor_IVRCompositor_017_IsMirrorWindowVisible_params *params = (struct IVRCompositor_IVRCompositor_017_IsMirrorWindowVisible_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->IsMirrorWindowVisible(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_CompositorDumpImages( void *args )
{
    struct IVRCompositor_IVRCompositor_017_CompositorDumpImages_params *params = (struct IVRCompositor_IVRCompositor_017_CompositorDumpImages_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->CompositorDumpImages(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources( void *args )
{
    struct IVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources_params *params = (struct IVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->ShouldAppRenderWithLowResources(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn( void *args )
{
    struct IVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn_params *params = (struct IVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_ForceReconnectProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_017_ForceReconnectProcess_params *params = (struct IVRCompositor_IVRCompositor_017_ForceReconnectProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->ForceReconnectProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_SuspendRendering( void *args )
{
    struct IVRCompositor_IVRCompositor_017_SuspendRendering_params *params = (struct IVRCompositor_IVRCompositor_017_SuspendRendering_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11_params *params = (struct IVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->GetMirrorTextureD3D11( params->eEye, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_GetMirrorTextureGL( void *args )
{
    struct IVRCompositor_IVRCompositor_017_GetMirrorTextureGL_params *params = (struct IVRCompositor_IVRCompositor_017_GetMirrorTextureGL_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->GetMirrorTextureGL( params->eEye, params->pglTextureId, params->pglSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture( void *args )
{
    struct IVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture_params *params = (struct IVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = iface->ReleaseSharedGLTexture( params->glTextureId, params->glSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess( void *args )
{
    struct IVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess_params *params = (struct IVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->LockGLSharedTextureForAccess( params->glSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess( void *args )
{
    struct IVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess_params *params = (struct IVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->UnlockGLSharedTextureForAccess( params->glSharedTextureHandle );
    return 0;
}

