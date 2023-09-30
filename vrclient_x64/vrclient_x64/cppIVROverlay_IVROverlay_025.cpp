/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_025.h"
void cppIVROverlay_IVROverlay_025_FindOverlay( struct cppIVROverlay_IVROverlay_025_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_CreateOverlay( struct cppIVROverlay_IVROverlay_025_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_DestroyOverlay( struct cppIVROverlay_IVROverlay_025_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_GetOverlayKey( struct cppIVROverlay_IVROverlay_025_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_025_GetOverlayName( struct cppIVROverlay_IVROverlay_025_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_025_SetOverlayName( struct cppIVROverlay_IVROverlay_025_SetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
}

void cppIVROverlay_IVROverlay_025_GetOverlayImageData( struct cppIVROverlay_IVROverlay_025_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_025_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_025_SetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_025_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_025_GetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_SetOverlayFlag( struct cppIVROverlay_IVROverlay_025_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_025_GetOverlayFlag( struct cppIVROverlay_IVROverlay_025_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_025_GetOverlayFlags( struct cppIVROverlay_IVROverlay_025_GetOverlayFlags_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
}

void cppIVROverlay_IVROverlay_025_SetOverlayColor( struct cppIVROverlay_IVROverlay_025_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_025_GetOverlayColor( struct cppIVROverlay_IVROverlay_025_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_025_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_025_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_025_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_025_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_025_SetOverlayTexelAspect_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_025_GetOverlayTexelAspect_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
}

void cppIVROverlay_IVROverlay_025_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_025_SetOverlaySortOrder_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
}

void cppIVROverlay_IVROverlay_025_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_025_GetOverlaySortOrder_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
}

void cppIVROverlay_IVROverlay_025_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_025_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_025_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_025_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_025_SetOverlayCurvature( struct cppIVROverlay_IVROverlay_025_SetOverlayCurvature_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayCurvature( params->ulOverlayHandle, params->fCurvature );
}

void cppIVROverlay_IVROverlay_025_GetOverlayCurvature( struct cppIVROverlay_IVROverlay_025_GetOverlayCurvature_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayCurvature( params->ulOverlayHandle, params->pfCurvature );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_025_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_025_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformCursor_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformCursor( params->ulCursorOverlayHandle, params->pvHotspot );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_025_GetOverlayTransformCursor_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformCursor( params->ulOverlayHandle, params->pvHotspot );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTransformProjection( struct cppIVROverlay_IVROverlay_025_SetOverlayTransformProjection_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformProjection( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform, params->pProjection, params->eEye );
}

void cppIVROverlay_IVROverlay_025_ShowOverlay( struct cppIVROverlay_IVROverlay_025_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_HideOverlay( struct cppIVROverlay_IVROverlay_025_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_IsOverlayVisible( struct cppIVROverlay_IVROverlay_025_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_025_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_025_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    u_VREvent_t_1168 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_025_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_025_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_025_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_025_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_025_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_025_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_025_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_025_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_025_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_025_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_025_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_025_IsHoverTargetOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_025_SetOverlayIntersectionMask_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
}

void cppIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration( struct cppIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->TriggerLaserMouseHapticVibration( params->ulOverlayHandle, params->fDurationSeconds, params->fFrequency, params->fAmplitude );
}

void cppIVROverlay_IVROverlay_025_SetOverlayCursor( struct cppIVROverlay_IVROverlay_025_SetOverlayCursor_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayCursor( params->ulOverlayHandle, params->ulCursorHandle );
}

void cppIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayCursorPositionOverride( params->ulOverlayHandle, params->pvCursor );
}

void cppIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayCursorPositionOverride( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_SetOverlayTexture( struct cppIVROverlay_IVROverlay_025_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_025_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_025_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_SetOverlayRaw( struct cppIVROverlay_IVROverlay_025_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unBytesPerPixel );
}

void cppIVROverlay_IVROverlay_025_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_025_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTexture( struct cppIVROverlay_IVROverlay_025_GetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
}

void cppIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_025_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_025_GetOverlayTextureSize_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
}

void cppIVROverlay_IVROverlay_025_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_025_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_025_IsDashboardVisible( struct cppIVROverlay_IVROverlay_025_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_025_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_025_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_025_ShowDashboard( struct cppIVROverlay_IVROverlay_025_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_025_ShowKeyboard( struct cppIVROverlay_IVROverlay_025_ShowKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
}

void cppIVROverlay_IVROverlay_025_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_025_ShowKeyboardForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
}

void cppIVROverlay_IVROverlay_025_GetKeyboardText( struct cppIVROverlay_IVROverlay_025_GetKeyboardText_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_025_HideKeyboard( struct cppIVROverlay_IVROverlay_025_HideKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

void cppIVROverlay_IVROverlay_025_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_025_ShowMessageOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
}

void cppIVROverlay_IVROverlay_025_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_025_CloseMessageOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    iface->CloseMessageOverlay(  );
}

