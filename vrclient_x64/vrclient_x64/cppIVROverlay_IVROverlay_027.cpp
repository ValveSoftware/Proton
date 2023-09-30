/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_027.h"
void cppIVROverlay_IVROverlay_027_FindOverlay( struct cppIVROverlay_IVROverlay_027_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_CreateOverlay( struct cppIVROverlay_IVROverlay_027_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_DestroyOverlay( struct cppIVROverlay_IVROverlay_027_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_GetOverlayKey( struct cppIVROverlay_IVROverlay_027_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_027_GetOverlayName( struct cppIVROverlay_IVROverlay_027_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_027_SetOverlayName( struct cppIVROverlay_IVROverlay_027_SetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
}

void cppIVROverlay_IVROverlay_027_GetOverlayImageData( struct cppIVROverlay_IVROverlay_027_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_027_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_027_SetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_027_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_027_GetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_SetOverlayFlag( struct cppIVROverlay_IVROverlay_027_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_027_GetOverlayFlag( struct cppIVROverlay_IVROverlay_027_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_027_GetOverlayFlags( struct cppIVROverlay_IVROverlay_027_GetOverlayFlags_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
}

void cppIVROverlay_IVROverlay_027_SetOverlayColor( struct cppIVROverlay_IVROverlay_027_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_027_GetOverlayColor( struct cppIVROverlay_IVROverlay_027_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_027_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_027_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_027_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_027_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_027_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_027_SetOverlayTexelAspect_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
}

void cppIVROverlay_IVROverlay_027_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_027_GetOverlayTexelAspect_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
}

void cppIVROverlay_IVROverlay_027_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_027_SetOverlaySortOrder_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
}

void cppIVROverlay_IVROverlay_027_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_027_GetOverlaySortOrder_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
}

void cppIVROverlay_IVROverlay_027_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_027_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_027_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_027_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_027_SetOverlayCurvature( struct cppIVROverlay_IVROverlay_027_SetOverlayCurvature_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayCurvature( params->ulOverlayHandle, params->fCurvature );
}

void cppIVROverlay_IVROverlay_027_GetOverlayCurvature( struct cppIVROverlay_IVROverlay_027_GetOverlayCurvature_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayCurvature( params->ulOverlayHandle, params->pfCurvature );
}

void cppIVROverlay_IVROverlay_027_SetOverlayPreCurvePitch( struct cppIVROverlay_IVROverlay_027_SetOverlayPreCurvePitch_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayPreCurvePitch( params->ulOverlayHandle, params->fRadians );
}

void cppIVROverlay_IVROverlay_027_GetOverlayPreCurvePitch( struct cppIVROverlay_IVROverlay_027_GetOverlayPreCurvePitch_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayPreCurvePitch( params->ulOverlayHandle, params->pfRadians );
}

void cppIVROverlay_IVROverlay_027_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_027_SetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_027_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_027_GetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_027_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_027_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_027_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_027_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_027_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_027_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_027_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_027_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_027_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_027_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_027_SetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_027_SetOverlayTransformCursor_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformCursor( params->ulCursorOverlayHandle, params->pvHotspot );
}

void cppIVROverlay_IVROverlay_027_GetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_027_GetOverlayTransformCursor_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformCursor( params->ulOverlayHandle, params->pvHotspot );
}

void cppIVROverlay_IVROverlay_027_SetOverlayTransformProjection( struct cppIVROverlay_IVROverlay_027_SetOverlayTransformProjection_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformProjection( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform, params->pProjection, params->eEye );
}

void cppIVROverlay_IVROverlay_027_ShowOverlay( struct cppIVROverlay_IVROverlay_027_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_HideOverlay( struct cppIVROverlay_IVROverlay_027_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_IsOverlayVisible( struct cppIVROverlay_IVROverlay_027_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_027_WaitFrameSync( struct cppIVROverlay_IVROverlay_027_WaitFrameSync_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitFrameSync( params->nTimeoutMs );
}

void cppIVROverlay_IVROverlay_027_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_027_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    u_VREvent_t_1168 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_027_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_027_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_027_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_027_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_027_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_027_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_027_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_027_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_027_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_027_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_027_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_027_IsHoverTargetOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_027_SetOverlayIntersectionMask_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
}

void cppIVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration( struct cppIVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->TriggerLaserMouseHapticVibration( params->ulOverlayHandle, params->fDurationSeconds, params->fFrequency, params->fAmplitude );
}

void cppIVROverlay_IVROverlay_027_SetOverlayCursor( struct cppIVROverlay_IVROverlay_027_SetOverlayCursor_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayCursor( params->ulOverlayHandle, params->ulCursorHandle );
}

void cppIVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayCursorPositionOverride( params->ulOverlayHandle, params->pvCursor );
}

void cppIVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayCursorPositionOverride( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_SetOverlayTexture( struct cppIVROverlay_IVROverlay_027_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_027_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_027_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_SetOverlayRaw( struct cppIVROverlay_IVROverlay_027_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unBytesPerPixel );
}

void cppIVROverlay_IVROverlay_027_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_027_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_027_GetOverlayTexture( struct cppIVROverlay_IVROverlay_027_GetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
}

void cppIVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_027_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_027_GetOverlayTextureSize_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
}

void cppIVROverlay_IVROverlay_027_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_027_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_027_IsDashboardVisible( struct cppIVROverlay_IVROverlay_027_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_027_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_027_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_027_ShowDashboard( struct cppIVROverlay_IVROverlay_027_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_027_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_027_GetPrimaryDashboardDevice_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_027_ShowKeyboard( struct cppIVROverlay_IVROverlay_027_ShowKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
}

void cppIVROverlay_IVROverlay_027_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_027_ShowKeyboardForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
}

void cppIVROverlay_IVROverlay_027_GetKeyboardText( struct cppIVROverlay_IVROverlay_027_GetKeyboardText_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_027_HideKeyboard( struct cppIVROverlay_IVROverlay_027_HideKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

void cppIVROverlay_IVROverlay_027_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_027_ShowMessageOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
}

void cppIVROverlay_IVROverlay_027_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_027_CloseMessageOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    iface->CloseMessageOverlay(  );
}

