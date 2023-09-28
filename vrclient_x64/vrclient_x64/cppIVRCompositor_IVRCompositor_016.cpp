#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.3/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_016.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRCompositor_IVRCompositor_016
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( Compositor_FrameTiming *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const Texture_t *, uint32_t ) = 0;
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
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
#endif /* __cplusplus */
};

void cppIVRCompositor_IVRCompositor_016_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_016_SetTrackingSpace_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_016_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_016_GetTrackingSpace_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_016_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_016_WaitGetPoses_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_016_GetLastPoses( struct cppIVRCompositor_IVRCompositor_016_GetLastPoses_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_016_GetLastPoseForTrackedDeviceIndex_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
}

void cppIVRCompositor_IVRCompositor_016_Submit( struct cppIVRCompositor_IVRCompositor_016_Submit_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_016_ClearLastSubmittedFrame_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_016_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_016_PostPresentHandoff_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_016_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_016_GetFrameTiming_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    Compositor_FrameTiming lin_pTiming;
    if (params->pTiming)
        struct_Compositor_FrameTiming_103_win_to_lin( params->pTiming, &lin_pTiming );
    params->_ret = iface->GetFrameTiming( params->pTiming ? &lin_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming)
        struct_Compositor_FrameTiming_103_lin_to_win( &lin_pTiming, params->pTiming );
}

void cppIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_016_GetFrameTimeRemaining_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_016_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_016_GetCumulativeStats_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->GetCumulativeStats( params->pStats, params->nStatsSizeInBytes );
}

void cppIVRCompositor_IVRCompositor_016_FadeToColor( struct cppIVRCompositor_IVRCompositor_016_FadeToColor_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_016_FadeGrid( struct cppIVRCompositor_IVRCompositor_016_FadeGrid_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_016_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_016_SetSkyboxOverride_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_016_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_016_ClearSkyboxOverride_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_016_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_016_CompositorBringToFront_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_016_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_016_CompositorGoToBack_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_016_CompositorQuit( struct cppIVRCompositor_IVRCompositor_016_CompositorQuit_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_016_IsFullscreen( struct cppIVRCompositor_IVRCompositor_016_IsFullscreen_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_016_GetCurrentSceneFocusProcess_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_016_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_016_GetLastFrameRenderer_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_016_CanRenderScene( struct cppIVRCompositor_IVRCompositor_016_CanRenderScene_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_016_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_016_ShowMirrorWindow_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_016_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_016_HideMirrorWindow_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_016_IsMirrorWindowVisible_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_016_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_016_CompositorDumpImages_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

void cppIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_016_ShouldAppRenderWithLowResources_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->ShouldAppRenderWithLowResources(  );
}

void cppIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_016_ForceInterleavedReprojectionOn_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
}

void cppIVRCompositor_IVRCompositor_016_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_016_ForceReconnectProcess_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->ForceReconnectProcess(  );
}

void cppIVRCompositor_IVRCompositor_016_SuspendRendering( struct cppIVRCompositor_IVRCompositor_016_SuspendRendering_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
}

void cppIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_016_GetMirrorTextureD3D11_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->GetMirrorTextureD3D11( params->eEye, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView );
}

void cppIVRCompositor_IVRCompositor_016_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_016_GetMirrorTextureGL_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->GetMirrorTextureGL( params->eEye, params->pglTextureId, params->pglSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_016_ReleaseSharedGLTexture_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    params->_ret = iface->ReleaseSharedGLTexture( params->glTextureId, params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_016_LockGLSharedTextureForAccess_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->LockGLSharedTextureForAccess( params->glSharedTextureHandle );
}

void cppIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_016_UnlockGLSharedTextureForAccess_params *params )
{
    struct cppIVRCompositor_IVRCompositor_016 *iface = (struct cppIVRCompositor_IVRCompositor_016 *)params->linux_side;
    iface->UnlockGLSharedTextureForAccess( params->glSharedTextureHandle );
}

#ifdef __cplusplus
}
#endif
