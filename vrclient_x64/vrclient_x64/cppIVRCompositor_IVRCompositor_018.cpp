/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_018.h"
void cppIVRCompositor_IVRCompositor_018_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_018_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_018_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_018_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_018_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_018_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_018_GetLastPoses( struct cppIVRCompositor_IVRCompositor_018_GetLastPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_018_GetLastPoseForTrackedDeviceIndex_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
}

void cppIVRCompositor_IVRCompositor_018_Submit( struct cppIVRCompositor_IVRCompositor_018_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_018_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_018_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_018_PostPresentHandoff_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_018_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_018_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
}

void cppIVRCompositor_IVRCompositor_018_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_018_GetFrameTimings_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetFrameTimings( params->pTiming, params->nFrames );
}

void cppIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_018_GetFrameTimeRemaining_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_018_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_018_GetCumulativeStats_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->GetCumulativeStats( params->pStats, params->nStatsSizeInBytes );
}

void cppIVRCompositor_IVRCompositor_018_FadeToColor( struct cppIVRCompositor_IVRCompositor_018_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_018_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_018_GetCurrentFadeColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    *params->_ret = iface->GetCurrentFadeColor( params->bBackground );
}

void cppIVRCompositor_IVRCompositor_018_FadeGrid( struct cppIVRCompositor_IVRCompositor_018_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_018_GetCurrentGridAlpha_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (float)iface->GetCurrentGridAlpha(  );
}

void cppIVRCompositor_IVRCompositor_018_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_018_SetSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_018_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_018_ClearSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_018_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_018_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_018_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_018_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_018_CompositorQuit( struct cppIVRCompositor_IVRCompositor_018_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_018_IsFullscreen( struct cppIVRCompositor_IVRCompositor_018_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_018_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_018_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_018_GetLastFrameRenderer_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_018_CanRenderScene( struct cppIVRCompositor_IVRCompositor_018_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_018_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_018_ShowMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_018_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_018_HideMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_018_IsMirrorWindowVisible_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_018_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_018_CompositorDumpImages_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

void cppIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_018_ShouldAppRenderWithLowResources_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (bool)iface->ShouldAppRenderWithLowResources(  );
}

void cppIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_018_ForceInterleavedReprojectionOn_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
}

void cppIVRCompositor_IVRCompositor_018_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_018_ForceReconnectProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->ForceReconnectProcess(  );
}

void cppIVRCompositor_IVRCompositor_018_SuspendRendering( struct cppIVRCompositor_IVRCompositor_018_SuspendRendering_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
}

void cppIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_018_GetMirrorTextureD3D11_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetMirrorTextureD3D11( params->eEye, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView );
}

void cppIVRCompositor_IVRCompositor_018_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_018_GetMirrorTextureGL_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetMirrorTextureGL( params->eEye, params->pglTextureId, params->pglSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_018_ReleaseSharedGLTexture_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    params->_ret = (bool)iface->ReleaseSharedGLTexture( params->glTextureId, params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_018_LockGLSharedTextureForAccess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->LockGLSharedTextureForAccess( params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_018_UnlockGLSharedTextureForAccess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    iface->UnlockGLSharedTextureForAccess( params->glSharedTextureHandle );
}

