/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_020.h"
void cppIVROverlay_IVROverlay_020_FindOverlay( struct cppIVROverlay_IVROverlay_020_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_020_CreateOverlay( struct cppIVROverlay_IVROverlay_020_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_020_DestroyOverlay( struct cppIVROverlay_IVROverlay_020_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_020_GetOverlayKey( struct cppIVROverlay_IVROverlay_020_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_020_GetOverlayName( struct cppIVROverlay_IVROverlay_020_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_020_SetOverlayName( struct cppIVROverlay_IVROverlay_020_SetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
}

void cppIVROverlay_IVROverlay_020_GetOverlayImageData( struct cppIVROverlay_IVROverlay_020_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_020_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_020_SetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_020_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_020_GetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_020_SetOverlayFlag( struct cppIVROverlay_IVROverlay_020_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_020_GetOverlayFlag( struct cppIVROverlay_IVROverlay_020_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_020_SetOverlayColor( struct cppIVROverlay_IVROverlay_020_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_020_GetOverlayColor( struct cppIVROverlay_IVROverlay_020_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_020_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_020_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_020_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_020_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_020_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_020_SetOverlayTexelAspect_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
}

void cppIVROverlay_IVROverlay_020_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_020_GetOverlayTexelAspect_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
}

void cppIVROverlay_IVROverlay_020_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_020_SetOverlaySortOrder_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
}

void cppIVROverlay_IVROverlay_020_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_020_GetOverlaySortOrder_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
}

void cppIVROverlay_IVROverlay_020_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_020_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_020_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_020_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_020_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_020_SetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_020_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_020_GetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_020_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_020_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_020_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_020_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_020_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_020_GetOverlayRenderModel_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderModel( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pColor, params->pError );
}

void cppIVROverlay_IVROverlay_020_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_020_SetOverlayRenderModel_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderModel( params->ulOverlayHandle, params->pchRenderModel, params->pColor );
}

void cppIVROverlay_IVROverlay_020_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_020_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_020_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_020_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_020_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_020_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
}

void cppIVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
}

void cppIVROverlay_IVROverlay_020_ShowOverlay( struct cppIVROverlay_IVROverlay_020_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_020_HideOverlay( struct cppIVROverlay_IVROverlay_020_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_020_IsOverlayVisible( struct cppIVROverlay_IVROverlay_020_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_020_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_020_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    u_VREvent_t_1322 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_020_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_020_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_020_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_020_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_020_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_020_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_020_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_020_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_020_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_020_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_020_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_020_IsHoverTargetOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_020_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_020_GetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_020_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_020_SetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_020_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_020_SetOverlayNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayDualAnalogTransform( params->ulOverlay, params->eWhich, params->pvCenter, params->fRadius );
}

void cppIVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayDualAnalogTransform( params->ulOverlay, params->eWhich, params->pvCenter, params->pfRadius );
}

void cppIVROverlay_IVROverlay_020_SetOverlayTexture( struct cppIVROverlay_IVROverlay_020_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_020_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_020_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_020_SetOverlayRaw( struct cppIVROverlay_IVROverlay_020_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_020_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_020_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_020_GetOverlayTexture( struct cppIVROverlay_IVROverlay_020_GetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
}

void cppIVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_020_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_020_GetOverlayTextureSize_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
}

void cppIVROverlay_IVROverlay_020_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_020_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_020_IsDashboardVisible( struct cppIVROverlay_IVROverlay_020_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_020_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_020_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_020_ShowDashboard( struct cppIVROverlay_IVROverlay_020_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_020_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_020_GetPrimaryDashboardDevice_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_020_ShowKeyboard( struct cppIVROverlay_IVROverlay_020_ShowKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_020_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_020_ShowKeyboardForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_020_GetKeyboardText( struct cppIVROverlay_IVROverlay_020_GetKeyboardText_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_020_HideKeyboard( struct cppIVROverlay_IVROverlay_020_HideKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

void cppIVROverlay_IVROverlay_020_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_020_SetOverlayIntersectionMask_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
}

void cppIVROverlay_IVROverlay_020_GetOverlayFlags( struct cppIVROverlay_IVROverlay_020_GetOverlayFlags_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
}

void cppIVROverlay_IVROverlay_020_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_020_ShowMessageOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
}

void cppIVROverlay_IVROverlay_020_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_020_CloseMessageOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    iface->CloseMessageOverlay(  );
}

