/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVROverlay_IVROverlay_014_FindOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_FindOverlay_params *params = (struct IVROverlay_IVROverlay_014_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_CreateOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_CreateOverlay_params *params = (struct IVROverlay_IVROverlay_014_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_DestroyOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_DestroyOverlay_params *params = (struct IVROverlay_IVROverlay_014_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_SetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_014_SetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_GetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_014_GetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayKey( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayKey_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayName_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayImageData( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayImageData_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderingPid( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayColor_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayColor_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_014_SetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_014_GetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayTransformType( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayTransformType_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_ShowOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_ShowOverlay_params *params = (struct IVROverlay_IVROverlay_014_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_HideOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_HideOverlay_params *params = (struct IVROverlay_IVROverlay_014_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_IsOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_014_IsOverlayVisible_params *params = (struct IVROverlay_IVROverlay_014_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates( void *args )
{
    struct IVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates_params *params = (struct IVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_PollNextOverlayEvent( void *args )
{
    struct IVROverlay_IVROverlay_014_PollNextOverlayEvent_params *params = (struct IVROverlay_IVROverlay_014_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    u_VREvent_t_106 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_ComputeOverlayIntersection( void *args )
{
    struct IVROverlay_IVROverlay_014_ComputeOverlayIntersection_params *params = (struct IVROverlay_IVROverlay_014_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse( void *args )
{
    struct IVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse_params *params = (struct IVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_IsHoverTargetOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_IsHoverTargetOverlay_params *params = (struct IVROverlay_IVROverlay_014_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetGamepadFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_GetGamepadFocusOverlay_params *params = (struct IVROverlay_IVROverlay_014_GetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetGamepadFocusOverlay(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetGamepadFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_SetGamepadFocusOverlay_params *params = (struct IVROverlay_IVROverlay_014_SetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayNeighbor( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayNeighbor_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor( void *args )
{
    struct IVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor_params *params = (struct IVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_ClearOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_014_ClearOverlayTexture_params *params = (struct IVROverlay_IVROverlay_014_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayRaw( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayRaw_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayFromFile( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayFromFile_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle( void *args )
{
    struct IVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle_params *params = (struct IVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayTextureSize( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayTextureSize_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayTextureSize_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_CreateDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_CreateDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_014_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_IsDashboardVisible( void *args )
{
    struct IVROverlay_IVROverlay_014_IsDashboardVisible_params *params = (struct IVROverlay_IVROverlay_014_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_IsActiveDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_IsActiveDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_014_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_ShowDashboard( void *args )
{
    struct IVROverlay_IVROverlay_014_ShowDashboard_params *params = (struct IVROverlay_IVROverlay_014_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetPrimaryDashboardDevice( void *args )
{
    struct IVROverlay_IVROverlay_014_GetPrimaryDashboardDevice_params *params = (struct IVROverlay_IVROverlay_014_GetPrimaryDashboardDevice_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_ShowKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_014_ShowKeyboard_params *params = (struct IVROverlay_IVROverlay_014_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_ShowKeyboardForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_ShowKeyboardForOverlay_params *params = (struct IVROverlay_IVROverlay_014_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetKeyboardText( void *args )
{
    struct IVROverlay_IVROverlay_014_GetKeyboardText_params *params = (struct IVROverlay_IVROverlay_014_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_HideKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_014_HideKeyboard_params *params = (struct IVROverlay_IVROverlay_014_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    iface->HideKeyboard(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay_params *params = (struct IVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayIntersectionMask( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayIntersectionMask_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayIntersectionMask_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_GetOverlayFlags( void *args )
{
    struct IVROverlay_IVROverlay_014_GetOverlayFlags_params *params = (struct IVROverlay_IVROverlay_014_GetOverlayFlags_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_ShowMessageOverlay( void *args )
{
    struct IVROverlay_IVROverlay_014_ShowMessageOverlay_params *params = (struct IVROverlay_IVROverlay_014_ShowMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
    return 0;
}

