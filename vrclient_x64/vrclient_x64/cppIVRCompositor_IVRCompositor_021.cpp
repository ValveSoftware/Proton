/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_021.h"
struct u_IVRCompositor_IVRCompositor_021
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual uint32_t GetFrameTimings( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual HmdColor_t GetCurrentFadeColor( bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual float GetCurrentGridAlpha(  ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual void ReleaseMirrorTextureD3D11( void * ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
    virtual uint32_t GetVulkanInstanceExtensionsRequired( char *, uint32_t ) = 0;
    virtual uint32_t GetVulkanDeviceExtensionsRequired( VkPhysicalDevice_T *, char *, uint32_t ) = 0;
    virtual void SetExplicitTimingMode( bool ) = 0;
    virtual uint32_t SubmitExplicitTimingData(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRCompositor_IVRCompositor_021_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_021_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_021_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_021_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_021_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_021_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_021_GetLastPoses( struct cppIVRCompositor_IVRCompositor_021_GetLastPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_021_GetLastPoseForTrackedDeviceIndex_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
}

void cppIVRCompositor_IVRCompositor_021_Submit( struct cppIVRCompositor_IVRCompositor_021_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_021_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_021_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_021_PostPresentHandoff_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_021_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_021_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
}

void cppIVRCompositor_IVRCompositor_021_GetFrameTimings( struct cppIVRCompositor_IVRCompositor_021_GetFrameTimings_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetFrameTimings( params->pTiming, params->nFrames );
}

void cppIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_021_GetFrameTimeRemaining_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_021_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_021_GetCumulativeStats_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->GetCumulativeStats( params->pStats, params->nStatsSizeInBytes );
}

void cppIVRCompositor_IVRCompositor_021_FadeToColor( struct cppIVRCompositor_IVRCompositor_021_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_021_GetCurrentFadeColor( struct cppIVRCompositor_IVRCompositor_021_GetCurrentFadeColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    *params->_ret = iface->GetCurrentFadeColor( params->bBackground );
}

void cppIVRCompositor_IVRCompositor_021_FadeGrid( struct cppIVRCompositor_IVRCompositor_021_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha( struct cppIVRCompositor_IVRCompositor_021_GetCurrentGridAlpha_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (float)iface->GetCurrentGridAlpha(  );
}

void cppIVRCompositor_IVRCompositor_021_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_021_SetSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_021_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_021_ClearSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_021_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_021_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_021_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_021_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_021_CompositorQuit( struct cppIVRCompositor_IVRCompositor_021_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_021_IsFullscreen( struct cppIVRCompositor_IVRCompositor_021_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_021_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_021_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_021_GetLastFrameRenderer_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_021_CanRenderScene( struct cppIVRCompositor_IVRCompositor_021_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_021_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_021_ShowMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_021_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_021_HideMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_021_IsMirrorWindowVisible_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_021_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_021_CompositorDumpImages_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

void cppIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_021_ShouldAppRenderWithLowResources_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (bool)iface->ShouldAppRenderWithLowResources(  );
}

void cppIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_021_ForceInterleavedReprojectionOn_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
}

void cppIVRCompositor_IVRCompositor_021_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_021_ForceReconnectProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->ForceReconnectProcess(  );
}

void cppIVRCompositor_IVRCompositor_021_SuspendRendering( struct cppIVRCompositor_IVRCompositor_021_SuspendRendering_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
}

void cppIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_021_GetMirrorTextureD3D11_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetMirrorTextureD3D11( params->eEye, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView );
}

void cppIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_021_ReleaseMirrorTextureD3D11_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->ReleaseMirrorTextureD3D11( params->pD3D11ShaderResourceView );
}

void cppIVRCompositor_IVRCompositor_021_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_021_GetMirrorTextureGL_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetMirrorTextureGL( params->eEye, params->pglTextureId, params->pglSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_021_ReleaseSharedGLTexture_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (bool)iface->ReleaseSharedGLTexture( params->glTextureId, params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_021_LockGLSharedTextureForAccess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->LockGLSharedTextureForAccess( params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_021_UnlockGLSharedTextureForAccess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->UnlockGLSharedTextureForAccess( params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_021_GetVulkanInstanceExtensionsRequired_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVulkanInstanceExtensionsRequired( params->pchValue, params->unBufferSize );
}

void cppIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired( struct cppIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVulkanDeviceExtensionsRequired( params->pPhysicalDevice, params->pchValue, params->unBufferSize );
}

void cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode( struct cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    iface->SetExplicitTimingMode( params->bExplicitTimingMode );
}

void cppIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData( struct cppIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData_params *params )
{
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->SubmitExplicitTimingData(  );
}

