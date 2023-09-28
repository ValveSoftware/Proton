#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.10/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_008.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRCompositor_IVRCompositor_008
{
#ifdef __cplusplus
    virtual uint32_t GetLastError( char *, uint32_t ) = 0;
    virtual void SetVSync( bool ) = 0;
    virtual bool GetVSync(  ) = 0;
    virtual void SetGamma( float ) = 0;
    virtual float GetGamma(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t Submit( uint32_t, uint32_t, void *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual bool GetFrameTiming( Compositor_FrameTiming *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual void SetSkyboxOverride( uint32_t, void *, void *, void *, void *, void *, void * ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRCompositor_IVRCompositor_008_GetLastError( struct cppIVRCompositor_IVRCompositor_008_GetLastError_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetLastError( params->pchBuffer, params->unBufferSize );
}

void cppIVRCompositor_IVRCompositor_008_SetVSync( struct cppIVRCompositor_IVRCompositor_008_SetVSync_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetVSync( params->bVSync );
}

void cppIVRCompositor_IVRCompositor_008_GetVSync( struct cppIVRCompositor_IVRCompositor_008_GetVSync_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetVSync(  );
}

void cppIVRCompositor_IVRCompositor_008_SetGamma( struct cppIVRCompositor_IVRCompositor_008_SetGamma_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetGamma( params->fGamma );
}

void cppIVRCompositor_IVRCompositor_008_GetGamma( struct cppIVRCompositor_IVRCompositor_008_GetGamma_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetGamma(  );
}

void cppIVRCompositor_IVRCompositor_008_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_008_WaitGetPoses_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_008_Submit( struct cppIVRCompositor_IVRCompositor_008_Submit_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->Submit( params->eEye, params->eTextureType, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_008_ClearLastSubmittedFrame_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_008_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_008_GetFrameTiming_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    Compositor_FrameTiming lin_pTiming;
    if (params->pTiming)
        struct_Compositor_FrameTiming_0910_win_to_lin( params->pTiming, &lin_pTiming );
    params->_ret = iface->GetFrameTiming( params->pTiming ? &lin_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming)
        struct_Compositor_FrameTiming_0910_lin_to_win( &lin_pTiming, params->pTiming );
}

void cppIVRCompositor_IVRCompositor_008_FadeToColor( struct cppIVRCompositor_IVRCompositor_008_FadeToColor_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_008_FadeGrid( struct cppIVRCompositor_IVRCompositor_008_FadeGrid_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_008_SetSkyboxOverride_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetSkyboxOverride( params->eTextureType, params->pFront, params->pBack, params->pLeft, params->pRight, params->pTop, params->pBottom );
}

void cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_008_ClearSkyboxOverride_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_008_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_008_CompositorBringToFront_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_008_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_008_CompositorGoToBack_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_008_CompositorQuit( struct cppIVRCompositor_IVRCompositor_008_CompositorQuit_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_008_IsFullscreen( struct cppIVRCompositor_IVRCompositor_008_IsFullscreen_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_008_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_008_SetTrackingSpace_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_008_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_008_GetTrackingSpace_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_008_GetCurrentSceneFocusProcess_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_008_CanRenderScene( struct cppIVRCompositor_IVRCompositor_008_CanRenderScene_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_008_ShowMirrorWindow_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_008_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_008_HideMirrorWindow_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_008_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_008_CompositorDumpImages_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

void cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_008_GetFrameTimeRemaining_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_008_GetLastFrameRenderer_params *params )
{
    struct cppIVRCompositor_IVRCompositor_008 *iface = (struct cppIVRCompositor_IVRCompositor_008 *)params->linux_side;
    params->_ret = iface->GetLastFrameRenderer(  );
}

#ifdef __cplusplus
}
#endif
