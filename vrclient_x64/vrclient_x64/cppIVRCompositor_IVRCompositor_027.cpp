/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_027.h"
void cppIVRCompositor_IVRCompositor_027_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_027_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_027_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_027_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_027_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_027_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_027_GetLastPoses( struct cppIVRCompositor_IVRCompositor_027_GetLastPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_027_GetLastPoseForTrackedDeviceIndex_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
}

void cppIVRCompositor_IVRCompositor_027_Submit( struct cppIVRCompositor_IVRCompositor_027_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_027_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_027_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_027_PostPresentHandoff_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_027_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_027_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
}

void cppIVRCompositor_IVRCompositor_027_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_027_GetFrameTimings_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetFrameTimings( params->pTiming, params->nFrames );
}

void cppIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_027_GetFrameTimeRemaining_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_027_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_027_GetCumulativeStats_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->GetCumulativeStats( params->pStats, params->nStatsSizeInBytes );
}

void cppIVRCompositor_IVRCompositor_027_FadeToColor( struct cppIVRCompositor_IVRCompositor_027_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_027_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_027_GetCurrentFadeColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    *params->_ret = iface->GetCurrentFadeColor( params->bBackground );
}

void cppIVRCompositor_IVRCompositor_027_FadeGrid( struct cppIVRCompositor_IVRCompositor_027_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeGridIn );
}

void cppIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_027_GetCurrentGridAlpha_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (float)iface->GetCurrentGridAlpha(  );
}

void cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_027_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_027_ClearSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_027_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_027_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_027_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_027_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_027_CompositorQuit( struct cppIVRCompositor_IVRCompositor_027_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_027_IsFullscreen( struct cppIVRCompositor_IVRCompositor_027_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_027_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_027_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_027_GetLastFrameRenderer_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_027_CanRenderScene( struct cppIVRCompositor_IVRCompositor_027_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_027_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_027_ShowMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_027_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_027_HideMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_027_IsMirrorWindowVisible_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_027_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_027_CompositorDumpImages_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

void cppIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_027_ShouldAppRenderWithLowResources_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (bool)iface->ShouldAppRenderWithLowResources(  );
}

void cppIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_027_ForceInterleavedReprojectionOn_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
}

void cppIVRCompositor_IVRCompositor_027_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_027_ForceReconnectProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->ForceReconnectProcess(  );
}

void cppIVRCompositor_IVRCompositor_027_SuspendRendering( struct cppIVRCompositor_IVRCompositor_027_SuspendRendering_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
}

void cppIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_027_GetMirrorTextureD3D11_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetMirrorTextureD3D11( params->eEye, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView );
}

void cppIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_027_ReleaseMirrorTextureD3D11_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->ReleaseMirrorTextureD3D11( params->pD3D11ShaderResourceView );
}

void cppIVRCompositor_IVRCompositor_027_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_027_GetMirrorTextureGL_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetMirrorTextureGL( params->eEye, params->pglTextureId, params->pglSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_027_ReleaseSharedGLTexture_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (bool)iface->ReleaseSharedGLTexture( params->glTextureId, params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_027_LockGLSharedTextureForAccess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->LockGLSharedTextureForAccess( params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_027_UnlockGLSharedTextureForAccess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->UnlockGLSharedTextureForAccess( params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_027_GetVulkanInstanceExtensionsRequired_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVulkanInstanceExtensionsRequired( params->pchValue, params->unBufferSize );
}

void cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVulkanDeviceExtensionsRequired( params->pPhysicalDevice, params->pchValue, params->unBufferSize );
}

void cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode( struct cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->SetExplicitTimingMode( params->eTimingMode );
}

void cppIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData( struct cppIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SubmitExplicitTimingData(  );
}

void cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled( struct cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingEnabled_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (bool)iface->IsMotionSmoothingEnabled(  );
}

void cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported( struct cppIVRCompositor_IVRCompositor_027_IsMotionSmoothingSupported_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (bool)iface->IsMotionSmoothingSupported(  );
}

void cppIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading( struct cppIVRCompositor_IVRCompositor_027_IsCurrentSceneFocusAppLoading_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (bool)iface->IsCurrentSceneFocusAppLoading(  );
}

void cppIVRCompositor_IVRCompositor_027_SetStageOverride_Async( struct cppIVRCompositor_IVRCompositor_027_SetStageOverride_Async_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetStageOverride_Async( params->pchRenderModelPath, params->pTransform, params->pRenderSettings, params->nSizeOfRenderSettings );
}

void cppIVRCompositor_IVRCompositor_027_ClearStageOverride( struct cppIVRCompositor_IVRCompositor_027_ClearStageOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    iface->ClearStageOverride(  );
}

void cppIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults( struct cppIVRCompositor_IVRCompositor_027_GetCompositorBenchmarkResults_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (bool)iface->GetCompositorBenchmarkResults( params->pBenchmarkResults, params->nSizeOfBenchmarkResults );
}

void cppIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs( struct cppIVRCompositor_IVRCompositor_027_GetLastPosePredictionIDs_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPosePredictionIDs( params->pRenderPosePredictionID, params->pGamePosePredictionID );
}

void cppIVRCompositor_IVRCompositor_027_GetPosesForFrame( struct cppIVRCompositor_IVRCompositor_027_GetPosesForFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPosesForFrame( params->unPosePredictionID, params->pPoseArray, params->unPoseArrayCount );
}

