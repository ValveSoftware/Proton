/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_011.h"
struct u_IVRCompositor_IVRCompositor_011
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_0915 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
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
#endif /* __cplusplus */
};

void cppIVRCompositor_IVRCompositor_011_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_011_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_011_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_011_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_011_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_011_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_011_GetLastPoses( struct cppIVRCompositor_IVRCompositor_011_GetLastPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_011_Submit( struct cppIVRCompositor_IVRCompositor_011_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_011_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_011_PostPresentHandoff_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_011_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_011_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
}

void cppIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_011_FadeToColor( struct cppIVRCompositor_IVRCompositor_011_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_011_FadeGrid( struct cppIVRCompositor_IVRCompositor_011_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_011_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_011_SetSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_011_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_011_ClearSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_011_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_011_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_011_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_011_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_011_CompositorQuit( struct cppIVRCompositor_IVRCompositor_011_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_011_IsFullscreen( struct cppIVRCompositor_IVRCompositor_011_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_011_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_011_GetLastFrameRenderer_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_011_CanRenderScene( struct cppIVRCompositor_IVRCompositor_011_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_011_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_011_ShowMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_011_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_011_HideMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_011_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_011_CompositorDumpImages_params *params )
{
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

