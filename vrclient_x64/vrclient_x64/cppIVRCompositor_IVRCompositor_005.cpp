/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRCompositor_IVRCompositor_005.h"
void cppIVRCompositor_IVRCompositor_005_GetLastError( struct cppIVRCompositor_IVRCompositor_005_GetLastError_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastError( params->pchBuffer, params->unBufferSize );
}

void cppIVRCompositor_IVRCompositor_005_SetVSync( struct cppIVRCompositor_IVRCompositor_005_SetVSync_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetVSync( params->bVSync );
}

void cppIVRCompositor_IVRCompositor_005_GetVSync( struct cppIVRCompositor_IVRCompositor_005_GetVSync_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = (bool)iface->GetVSync(  );
}

void cppIVRCompositor_IVRCompositor_005_SetGamma( struct cppIVRCompositor_IVRCompositor_005_SetGamma_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetGamma( params->fGamma );
}

void cppIVRCompositor_IVRCompositor_005_GetGamma( struct cppIVRCompositor_IVRCompositor_005_GetGamma_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = (float)iface->GetGamma(  );
}

void cppIVRCompositor_IVRCompositor_005_SetGraphicsDevice( struct cppIVRCompositor_IVRCompositor_005_SetGraphicsDevice_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetGraphicsDevice( params->eType, params->pDevice );
}

void cppIVRCompositor_IVRCompositor_005_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_005_WaitGetPoses_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->WaitGetPoses( params->pPoseArray, params->unPoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_005_Submit( struct cppIVRCompositor_IVRCompositor_005_Submit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->Submit( params->eEye, params->pTexture, params->pBounds );
}

void cppIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_005_GetOverlayDefaults( struct cppIVRCompositor_IVRCompositor_005_GetOverlayDefaults_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->GetOverlayDefaults( params->pSettings );
}

void cppIVRCompositor_IVRCompositor_005_SetOverlay( struct cppIVRCompositor_IVRCompositor_005_SetOverlay_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetOverlay( params->pTexture, params->pSettings );
}

void cppIVRCompositor_IVRCompositor_005_SetOverlayRaw( struct cppIVRCompositor_IVRCompositor_005_SetOverlayRaw_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetOverlayRaw( params->buffer, params->width, params->height, params->depth, params->pSettings );
}

void cppIVRCompositor_IVRCompositor_005_SetOverlayFromFile( struct cppIVRCompositor_IVRCompositor_005_SetOverlayFromFile_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetOverlayFromFile( params->pchFilePath, params->pSettings );
}

void cppIVRCompositor_IVRCompositor_005_ClearOverlay( struct cppIVRCompositor_IVRCompositor_005_ClearOverlay_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->ClearOverlay(  );
}

void cppIVRCompositor_IVRCompositor_005_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_005_GetFrameTiming_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    u_Compositor_FrameTiming_090 u_pTiming;
    if (params->pTiming) u_pTiming = *params->pTiming;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming ? &u_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming) *params->pTiming = u_pTiming;
}

void cppIVRCompositor_IVRCompositor_005_FadeToColor( struct cppIVRCompositor_IVRCompositor_005_FadeToColor_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_005_FadeGrid( struct cppIVRCompositor_IVRCompositor_005_FadeGrid_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_005_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_005_CompositorBringToFront_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_005_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_005_CompositorGoToBack_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_005_CompositorQuit( struct cppIVRCompositor_IVRCompositor_005_CompositorQuit_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_005_IsFullscreen( struct cppIVRCompositor_IVRCompositor_005_IsFullscreen_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection( struct cppIVRCompositor_IVRCompositor_005_ComputeOverlayIntersection_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->pSettings, params->fAspectRatio, params->eOrigin, params->vSource, params->vDirection, params->pvecIntersectionUV, params->pvecIntersectionTrackingSpace );
}

void cppIVRCompositor_IVRCompositor_005_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_005_SetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_005_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_005_GetTrackingSpace_params *params )
{
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
}

