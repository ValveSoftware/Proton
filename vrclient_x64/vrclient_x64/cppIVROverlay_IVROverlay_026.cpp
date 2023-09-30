/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVROverlay_IVROverlay_026_FindOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_FindOverlay_params *params = (struct IVROverlay_IVROverlay_026_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_CreateOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_CreateOverlay_params *params = (struct IVROverlay_IVROverlay_026_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_DestroyOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_DestroyOverlay_params *params = (struct IVROverlay_IVROverlay_026_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayKey( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayKey_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayName_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayName_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayImageData( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayImageData_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderingPid( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayFlags( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayFlags_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayFlags_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayColor_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayColor_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_026_SetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_026_GetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayCurvature( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayCurvature_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayCurvature_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayCurvature( params->ulOverlayHandle, params->fCurvature );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayCurvature( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayCurvature_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayCurvature_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayCurvature( params->ulOverlayHandle, params->pfCurvature );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayPreCurvePitch( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayPreCurvePitch_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayPreCurvePitch_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayPreCurvePitch( params->ulOverlayHandle, params->fRadians );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayPreCurvePitch( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayPreCurvePitch_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayPreCurvePitch_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayPreCurvePitch( params->ulOverlayHandle, params->pfRadians );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTransformType( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTransformType_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTransformCursor( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTransformCursor_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTransformCursor_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformCursor( params->ulCursorOverlayHandle, params->pvHotspot );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTransformCursor( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTransformCursor_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTransformCursor_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformCursor( params->ulOverlayHandle, params->pvHotspot );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTransformProjection( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTransformProjection_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTransformProjection_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformProjection( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform, params->pProjection, params->eEye );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_ShowOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_ShowOverlay_params *params = (struct IVROverlay_IVROverlay_026_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_HideOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_HideOverlay_params *params = (struct IVROverlay_IVROverlay_026_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_IsOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_026_IsOverlayVisible_params *params = (struct IVROverlay_IVROverlay_026_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates( void *args )
{
    struct IVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates_params *params = (struct IVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_WaitFrameSync( void *args )
{
    struct IVROverlay_IVROverlay_026_WaitFrameSync_params *params = (struct IVROverlay_IVROverlay_026_WaitFrameSync_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitFrameSync( params->nTimeoutMs );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_PollNextOverlayEvent( void *args )
{
    struct IVROverlay_IVROverlay_026_PollNextOverlayEvent_params *params = (struct IVROverlay_IVROverlay_026_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    u_VREvent_t_1168 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_ComputeOverlayIntersection( void *args )
{
    struct IVROverlay_IVROverlay_026_ComputeOverlayIntersection_params *params = (struct IVROverlay_IVROverlay_026_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_IsHoverTargetOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_IsHoverTargetOverlay_params *params = (struct IVROverlay_IVROverlay_026_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayIntersectionMask( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayIntersectionMask_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayIntersectionMask_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration( void *args )
{
    struct IVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration_params *params = (struct IVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->TriggerLaserMouseHapticVibration( params->ulOverlayHandle, params->fDurationSeconds, params->fFrequency, params->fAmplitude );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayCursor( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayCursor_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayCursor_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayCursor( params->ulOverlayHandle, params->ulCursorHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayCursorPositionOverride( params->ulOverlayHandle, params->pvCursor );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride( void *args )
{
    struct IVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride_params *params = (struct IVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayCursorPositionOverride( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_ClearOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_026_ClearOverlayTexture_params *params = (struct IVROverlay_IVROverlay_026_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayRaw( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayRaw_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unBytesPerPixel );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayFromFile( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayFromFile_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle( void *args )
{
    struct IVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle_params *params = (struct IVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetOverlayTextureSize( void *args )
{
    struct IVROverlay_IVROverlay_026_GetOverlayTextureSize_params *params = (struct IVROverlay_IVROverlay_026_GetOverlayTextureSize_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_CreateDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_CreateDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_026_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_IsDashboardVisible( void *args )
{
    struct IVROverlay_IVROverlay_026_IsDashboardVisible_params *params = (struct IVROverlay_IVROverlay_026_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_IsActiveDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_IsActiveDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_026_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_ShowDashboard( void *args )
{
    struct IVROverlay_IVROverlay_026_ShowDashboard_params *params = (struct IVROverlay_IVROverlay_026_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetPrimaryDashboardDevice( void *args )
{
    struct IVROverlay_IVROverlay_026_GetPrimaryDashboardDevice_params *params = (struct IVROverlay_IVROverlay_026_GetPrimaryDashboardDevice_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_ShowKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_026_ShowKeyboard_params *params = (struct IVROverlay_IVROverlay_026_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_ShowKeyboardForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_ShowKeyboardForOverlay_params *params = (struct IVROverlay_IVROverlay_026_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_GetKeyboardText( void *args )
{
    struct IVROverlay_IVROverlay_026_GetKeyboardText_params *params = (struct IVROverlay_IVROverlay_026_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_HideKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_026_HideKeyboard_params *params = (struct IVROverlay_IVROverlay_026_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    iface->HideKeyboard(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay_params *params = (struct IVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_ShowMessageOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_ShowMessageOverlay_params *params = (struct IVROverlay_IVROverlay_026_ShowMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_CloseMessageOverlay( void *args )
{
    struct IVROverlay_IVROverlay_026_CloseMessageOverlay_params *params = (struct IVROverlay_IVROverlay_026_CloseMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    iface->CloseMessageOverlay(  );
    return 0;
}

