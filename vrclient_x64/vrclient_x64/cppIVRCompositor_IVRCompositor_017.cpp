/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_017.h"
void cppIVRCompositor_IVRCompositor_017_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_017_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_017_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_017_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_017_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_017_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_017_GetLastPoses( struct cppIVRCompositor_IVRCompositor_017_GetLastPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_017_GetLastPoseForTrackedDeviceIndex_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
}

void cppIVRCompositor_IVRCompositor_017_Submit( struct cppIVRCompositor_IVRCompositor_017_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_017_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_017_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_017_PostPresentHandoff_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_017_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_017_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
}

void cppIVRCompositor_IVRCompositor_017_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_017_GetFrameTimings_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetFrameTimings( params->pTiming, params->nFrames );
}

void cppIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_017_GetFrameTimeRemaining_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_017_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_017_GetCumulativeStats_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->GetCumulativeStats( params->pStats, params->nStatsSizeInBytes );
}

void cppIVRCompositor_IVRCompositor_017_FadeToColor( struct cppIVRCompositor_IVRCompositor_017_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_017_FadeGrid( struct cppIVRCompositor_IVRCompositor_017_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_017_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_017_ClearSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_017_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_017_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_017_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_017_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_017_CompositorQuit( struct cppIVRCompositor_IVRCompositor_017_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_017_IsFullscreen( struct cppIVRCompositor_IVRCompositor_017_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_017_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_017_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_017_GetLastFrameRenderer_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_017_CanRenderScene( struct cppIVRCompositor_IVRCompositor_017_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_017_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_017_ShowMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_017_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_017_HideMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_017_IsMirrorWindowVisible_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_017_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_017_CompositorDumpImages_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

void cppIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_017_ShouldAppRenderWithLowResources_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (bool)iface->ShouldAppRenderWithLowResources(  );
}

void cppIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_017_ForceInterleavedReprojectionOn_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
}

void cppIVRCompositor_IVRCompositor_017_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_017_ForceReconnectProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->ForceReconnectProcess(  );
}

void cppIVRCompositor_IVRCompositor_017_SuspendRendering( struct cppIVRCompositor_IVRCompositor_017_SuspendRendering_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
}

void cppIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_017_GetMirrorTextureD3D11_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetMirrorTextureD3D11( params->eEye, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView );
}

void cppIVRCompositor_IVRCompositor_017_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_017_GetMirrorTextureGL_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetMirrorTextureGL( params->eEye, params->pglTextureId, params->pglSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_017_ReleaseSharedGLTexture_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    params->_ret = (bool)iface->ReleaseSharedGLTexture( params->glTextureId, params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_017_LockGLSharedTextureForAccess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->LockGLSharedTextureForAccess( params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_017_UnlockGLSharedTextureForAccess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    iface->UnlockGLSharedTextureForAccess( params->glSharedTextureHandle );
}

