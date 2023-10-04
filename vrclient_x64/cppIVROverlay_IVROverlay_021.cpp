/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVROverlay_IVROverlay_021_FindOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_FindOverlay_params *params = (struct IVROverlay_IVROverlay_021_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_CreateOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_CreateOverlay_params *params = (struct IVROverlay_IVROverlay_021_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_DestroyOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_DestroyOverlay_params *params = (struct IVROverlay_IVROverlay_021_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayKey( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayKey_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayName_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayName_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayImageData( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayImageData_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayRenderingPid( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayColor_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayColor_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_021_SetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_021_GetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayCurvature( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayCurvature_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayCurvature_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayCurvature( params->ulOverlayHandle, params->fCurvature );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayCurvature( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayCurvature_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayCurvature_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayCurvature( params->ulOverlayHandle, params->pfCurvature );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayRenderModel( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayRenderModel_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayRenderModel_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayRenderModel( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pColor, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayRenderModel( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayRenderModel_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayRenderModel_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayRenderModel( params->ulOverlayHandle, params->pchRenderModel, params->pColor );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayTransformType( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayTransformType_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_ShowOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_ShowOverlay_params *params = (struct IVROverlay_IVROverlay_021_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_HideOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_HideOverlay_params *params = (struct IVROverlay_IVROverlay_021_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_IsOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_021_IsOverlayVisible_params *params = (struct IVROverlay_IVROverlay_021_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates( void *args )
{
    struct IVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates_params *params = (struct IVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_PollNextOverlayEvent( void *args )
{
    struct IVROverlay_IVROverlay_021_PollNextOverlayEvent_params *params = (struct IVROverlay_IVROverlay_021_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    u_VREvent_t_1322 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_ComputeOverlayIntersection( void *args )
{
    struct IVROverlay_IVROverlay_021_ComputeOverlayIntersection_params *params = (struct IVROverlay_IVROverlay_021_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_IsHoverTargetOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_IsHoverTargetOverlay_params *params = (struct IVROverlay_IVROverlay_021_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayDualAnalogTransform( params->ulOverlay, params->eWhich, params->pvCenter, params->fRadius );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayDualAnalogTransform( params->ulOverlay, params->eWhich, params->pvCenter, params->pfRadius );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_ClearOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_021_ClearOverlayTexture_params *params = (struct IVROverlay_IVROverlay_021_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayRaw( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayRaw_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayFromFile( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayFromFile_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle( void *args )
{
    struct IVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle_params *params = (struct IVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayTextureSize( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayTextureSize_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayTextureSize_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_CreateDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_CreateDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_021_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_IsDashboardVisible( void *args )
{
    struct IVROverlay_IVROverlay_021_IsDashboardVisible_params *params = (struct IVROverlay_IVROverlay_021_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->IsDashboardVisible(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_IsActiveDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_IsActiveDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_021_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_ShowDashboard( void *args )
{
    struct IVROverlay_IVROverlay_021_ShowDashboard_params *params = (struct IVROverlay_IVROverlay_021_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetPrimaryDashboardDevice( void *args )
{
    struct IVROverlay_IVROverlay_021_GetPrimaryDashboardDevice_params *params = (struct IVROverlay_IVROverlay_021_GetPrimaryDashboardDevice_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetPrimaryDashboardDevice(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_ShowKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_021_ShowKeyboard_params *params = (struct IVROverlay_IVROverlay_021_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_ShowKeyboardForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_ShowKeyboardForOverlay_params *params = (struct IVROverlay_IVROverlay_021_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetKeyboardText( void *args )
{
    struct IVROverlay_IVROverlay_021_GetKeyboardText_params *params = (struct IVROverlay_IVROverlay_021_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_HideKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_021_HideKeyboard_params *params = (struct IVROverlay_IVROverlay_021_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    iface->HideKeyboard(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay_params *params = (struct IVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayIntersectionMask( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayIntersectionMask_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayIntersectionMask_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_GetOverlayFlags( void *args )
{
    struct IVROverlay_IVROverlay_021_GetOverlayFlags_params *params = (struct IVROverlay_IVROverlay_021_GetOverlayFlags_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_ShowMessageOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_ShowMessageOverlay_params *params = (struct IVROverlay_IVROverlay_021_ShowMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_CloseMessageOverlay( void *args )
{
    struct IVROverlay_IVROverlay_021_CloseMessageOverlay_params *params = (struct IVROverlay_IVROverlay_021_CloseMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    iface->CloseMessageOverlay(  );
    return 0;
}

