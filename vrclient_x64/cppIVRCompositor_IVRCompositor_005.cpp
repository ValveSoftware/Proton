/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_005_GetLastError( void *args )
{
    struct IVRCompositor_IVRCompositor_005_GetLastError_params *params = (struct IVRCompositor_IVRCompositor_005_GetLastError_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = iface->GetLastError( params->pchBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_SetVSync( void *args )
{
    struct IVRCompositor_IVRCompositor_005_SetVSync_params *params = (struct IVRCompositor_IVRCompositor_005_SetVSync_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetVSync( params->bVSync );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_GetVSync( void *args )
{
    struct IVRCompositor_IVRCompositor_005_GetVSync_params *params = (struct IVRCompositor_IVRCompositor_005_GetVSync_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = iface->GetVSync(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_SetGamma( void *args )
{
    struct IVRCompositor_IVRCompositor_005_SetGamma_params *params = (struct IVRCompositor_IVRCompositor_005_SetGamma_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetGamma( params->fGamma );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_GetGamma( void *args )
{
    struct IVRCompositor_IVRCompositor_005_GetGamma_params *params = (struct IVRCompositor_IVRCompositor_005_GetGamma_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = iface->GetGamma(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_SetGraphicsDevice( void *args )
{
    struct IVRCompositor_IVRCompositor_005_SetGraphicsDevice_params *params = (struct IVRCompositor_IVRCompositor_005_SetGraphicsDevice_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetGraphicsDevice( params->eType, params->pDevice );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_005_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_005_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->WaitGetPoses( params->pPoseArray, params->unPoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_005_Submit_params *params = (struct IVRCompositor_IVRCompositor_005_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->Submit( params->eEye, params->pTexture, params->pBounds );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_005_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_GetOverlayDefaults( void *args )
{
    struct IVRCompositor_IVRCompositor_005_GetOverlayDefaults_params *params = (struct IVRCompositor_IVRCompositor_005_GetOverlayDefaults_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->GetOverlayDefaults( params->pSettings );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_SetOverlay( void *args )
{
    struct IVRCompositor_IVRCompositor_005_SetOverlay_params *params = (struct IVRCompositor_IVRCompositor_005_SetOverlay_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetOverlay( params->pTexture, params->pSettings );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_SetOverlayRaw( void *args )
{
    struct IVRCompositor_IVRCompositor_005_SetOverlayRaw_params *params = (struct IVRCompositor_IVRCompositor_005_SetOverlayRaw_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetOverlayRaw( params->buffer, params->width, params->height, params->depth, params->pSettings );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_SetOverlayFromFile( void *args )
{
    struct IVRCompositor_IVRCompositor_005_SetOverlayFromFile_params *params = (struct IVRCompositor_IVRCompositor_005_SetOverlayFromFile_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    iface->SetOverlayFromFile( u_pchFilePath, params->pSettings );
    vrclient_free_path( u_pchFilePath );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_ClearOverlay( void *args )
{
    struct IVRCompositor_IVRCompositor_005_ClearOverlay_params *params = (struct IVRCompositor_IVRCompositor_005_ClearOverlay_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->ClearOverlay(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_005_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_005_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    u_Compositor_FrameTiming_090 u_pTiming;
    if (params->pTiming) u_pTiming = *params->pTiming;
    params->_ret = iface->GetFrameTiming( params->pTiming ? &u_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming) *params->pTiming = u_pTiming;
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_005_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_005_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_005_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_005_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_005_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_005_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_005_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_005_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_005_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_005_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_005_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_005_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_ComputeOverlayIntersection( void *args )
{
    struct IVRCompositor_IVRCompositor_005_ComputeOverlayIntersection_params *params = (struct IVRCompositor_IVRCompositor_005_ComputeOverlayIntersection_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->pSettings, params->fAspectRatio, params->eOrigin, params->vSource, params->vDirection, params->pvecIntersectionUV, params->pvecIntersectionTrackingSpace );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_005_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_005_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_005_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_005_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_005_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_005 *iface = (struct u_IVRCompositor_IVRCompositor_005 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
    return 0;
}

