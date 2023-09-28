#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.19/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_013.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRCompositor_IVRCompositor_013
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
#endif /* __cplusplus */
};

void cppIVRCompositor_IVRCompositor_013_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_013_SetTrackingSpace_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_013_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_013_GetTrackingSpace_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_013_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_013_WaitGetPoses_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_013_GetLastPoses( struct cppIVRCompositor_IVRCompositor_013_GetLastPoses_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
}

void cppIVRCompositor_IVRCompositor_013_Submit( struct cppIVRCompositor_IVRCompositor_013_Submit_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_013_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_013_PostPresentHandoff_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_013_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_013_GetFrameTiming_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
}

void cppIVRCompositor_IVRCompositor_013_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_013_GetFrameTimeRemaining_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_013_FadeToColor( struct cppIVRCompositor_IVRCompositor_013_FadeToColor_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_013_FadeGrid( struct cppIVRCompositor_IVRCompositor_013_FadeGrid_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_013_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_013_SetSkyboxOverride_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_013_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_013_ClearSkyboxOverride_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_013_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_013_CompositorBringToFront_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_013_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_013_CompositorGoToBack_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_013_CompositorQuit( struct cppIVRCompositor_IVRCompositor_013_CompositorQuit_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_013_IsFullscreen( struct cppIVRCompositor_IVRCompositor_013_IsFullscreen_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_013_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_013_GetLastFrameRenderer_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_013_CanRenderScene( struct cppIVRCompositor_IVRCompositor_013_CanRenderScene_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_013_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_013_ShowMirrorWindow_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_013_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_013_HideMirrorWindow_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_013_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_013_IsMirrorWindowVisible_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_013_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_013_CompositorDumpImages_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

void cppIVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = iface->ShouldAppRenderWithLowResources(  );
}

void cppIVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn_params *params )
{
    struct cppIVRCompositor_IVRCompositor_013 *iface = (struct cppIVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
}

#ifdef __cplusplus
}
#endif
