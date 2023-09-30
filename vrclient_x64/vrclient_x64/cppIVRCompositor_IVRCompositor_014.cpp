/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_014.h"
void cppIVRCompositor_IVRCompositor_014_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_014_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_014_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_014_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_014_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_014_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_014_GetLastPoses( struct cppIVRCompositor_IVRCompositor_014_GetLastPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
}

void cppIVRCompositor_IVRCompositor_014_Submit( struct cppIVRCompositor_IVRCompositor_014_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_014_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_014_PostPresentHandoff_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_014_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_014_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
}

void cppIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_014_FadeToColor( struct cppIVRCompositor_IVRCompositor_014_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_014_FadeGrid( struct cppIVRCompositor_IVRCompositor_014_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_014_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_014_SetSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_014_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_014_ClearSkyboxOverride_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_014_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_014_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_014_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_014_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_014_CompositorQuit( struct cppIVRCompositor_IVRCompositor_014_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_014_IsFullscreen( struct cppIVRCompositor_IVRCompositor_014_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_014_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_014_GetLastFrameRenderer_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_014_CanRenderScene( struct cppIVRCompositor_IVRCompositor_014_CanRenderScene_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_014_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_014_ShowMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_014_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_014_HideMirrorWindow_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_014_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_014_CompositorDumpImages_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

void cppIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    params->_ret = (bool)iface->ShouldAppRenderWithLowResources(  );
}

void cppIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
}

void cppIVRCompositor_IVRCompositor_014_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_014_ForceReconnectProcess_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->ForceReconnectProcess(  );
}

void cppIVRCompositor_IVRCompositor_014_SuspendRendering( struct cppIVRCompositor_IVRCompositor_014_SuspendRendering_params *params )
{
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
}

