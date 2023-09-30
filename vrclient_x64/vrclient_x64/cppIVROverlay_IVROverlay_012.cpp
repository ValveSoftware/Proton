/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVROverlay_IVROverlay_012_FindOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_FindOverlay_params *params = (struct IVROverlay_IVROverlay_012_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_CreateOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_CreateOverlay_params *params = (struct IVROverlay_IVROverlay_012_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_DestroyOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_DestroyOverlay_params *params = (struct IVROverlay_IVROverlay_012_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_SetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_012_SetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_GetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_012_GetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayKey( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayKey_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayName_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayImageData( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayImageData_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderingPid( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayColor_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayColor_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayTransformType( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayTransformType_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_ShowOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_ShowOverlay_params *params = (struct IVROverlay_IVROverlay_012_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_HideOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_HideOverlay_params *params = (struct IVROverlay_IVROverlay_012_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_IsOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_012_IsOverlayVisible_params *params = (struct IVROverlay_IVROverlay_012_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates( void *args )
{
    struct IVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates_params *params = (struct IVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_PollNextOverlayEvent( void *args )
{
    struct IVROverlay_IVROverlay_012_PollNextOverlayEvent_params *params = (struct IVROverlay_IVROverlay_012_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    u_VREvent_t_101 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_ComputeOverlayIntersection( void *args )
{
    struct IVROverlay_IVROverlay_012_ComputeOverlayIntersection_params *params = (struct IVROverlay_IVROverlay_012_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse( void *args )
{
    struct IVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse_params *params = (struct IVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_IsHoverTargetOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_IsHoverTargetOverlay_params *params = (struct IVROverlay_IVROverlay_012_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetGamepadFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_GetGamepadFocusOverlay_params *params = (struct IVROverlay_IVROverlay_012_GetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetGamepadFocusOverlay(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetGamepadFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_SetGamepadFocusOverlay_params *params = (struct IVROverlay_IVROverlay_012_SetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayNeighbor( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayNeighbor_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor( void *args )
{
    struct IVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor_params *params = (struct IVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_ClearOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_012_ClearOverlayTexture_params *params = (struct IVROverlay_IVROverlay_012_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayRaw( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayRaw_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayFromFile( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayFromFile_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPI, params->pColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle( void *args )
{
    struct IVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle_params *params = (struct IVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetOverlayTextureSize( void *args )
{
    struct IVROverlay_IVROverlay_012_GetOverlayTextureSize_params *params = (struct IVROverlay_IVROverlay_012_GetOverlayTextureSize_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_CreateDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_CreateDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_012_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_IsDashboardVisible( void *args )
{
    struct IVROverlay_IVROverlay_012_IsDashboardVisible_params *params = (struct IVROverlay_IVROverlay_012_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_IsActiveDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_IsActiveDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_012_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_ShowDashboard( void *args )
{
    struct IVROverlay_IVROverlay_012_ShowDashboard_params *params = (struct IVROverlay_IVROverlay_012_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetPrimaryDashboardDevice( void *args )
{
    struct IVROverlay_IVROverlay_012_GetPrimaryDashboardDevice_params *params = (struct IVROverlay_IVROverlay_012_GetPrimaryDashboardDevice_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_ShowKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_012_ShowKeyboard_params *params = (struct IVROverlay_IVROverlay_012_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_ShowKeyboardForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_ShowKeyboardForOverlay_params *params = (struct IVROverlay_IVROverlay_012_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_GetKeyboardText( void *args )
{
    struct IVROverlay_IVROverlay_012_GetKeyboardText_params *params = (struct IVROverlay_IVROverlay_012_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_HideKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_012_HideKeyboard_params *params = (struct IVROverlay_IVROverlay_012_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    iface->HideKeyboard(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay_params *params = (struct IVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
    return 0;
}

