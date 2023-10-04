/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVROverlay_IVROverlay_017_FindOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_FindOverlay_params *params = (struct IVROverlay_IVROverlay_017_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_CreateOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_CreateOverlay_params *params = (struct IVROverlay_IVROverlay_017_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_DestroyOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_DestroyOverlay_params *params = (struct IVROverlay_IVROverlay_017_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_SetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_017_SetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_GetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_017_GetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetHighQualityOverlay(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayKey( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayKey_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayName_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayName_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayImageData( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayImageData_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayRenderingPid( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayColor_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayColor_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_017_SetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_017_GetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayRenderModel( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayRenderModel_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayRenderModel_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayRenderModel( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pColor, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayRenderModel( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayRenderModel_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayRenderModel_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayRenderModel( params->ulOverlayHandle, params->pchRenderModel, params->pColor );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayTransformType( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayTransformType_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_ShowOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_ShowOverlay_params *params = (struct IVROverlay_IVROverlay_017_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_HideOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_HideOverlay_params *params = (struct IVROverlay_IVROverlay_017_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_IsOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_017_IsOverlayVisible_params *params = (struct IVROverlay_IVROverlay_017_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates( void *args )
{
    struct IVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates_params *params = (struct IVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_PollNextOverlayEvent( void *args )
{
    struct IVROverlay_IVROverlay_017_PollNextOverlayEvent_params *params = (struct IVROverlay_IVROverlay_017_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    u_VREvent_t_1011 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_ComputeOverlayIntersection( void *args )
{
    struct IVROverlay_IVROverlay_017_ComputeOverlayIntersection_params *params = (struct IVROverlay_IVROverlay_017_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse( void *args )
{
    struct IVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse_params *params = (struct IVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_IsHoverTargetOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_IsHoverTargetOverlay_params *params = (struct IVROverlay_IVROverlay_017_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetGamepadFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_GetGamepadFocusOverlay_params *params = (struct IVROverlay_IVROverlay_017_GetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetGamepadFocusOverlay(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetGamepadFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_SetGamepadFocusOverlay_params *params = (struct IVROverlay_IVROverlay_017_SetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayNeighbor( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayNeighbor_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor( void *args )
{
    struct IVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor_params *params = (struct IVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayDualAnalogTransform( params->ulOverlay, params->eWhich, params->vCenter, params->fRadius );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayDualAnalogTransform( params->ulOverlay, params->eWhich, params->pvCenter, params->pfRadius );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_ClearOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_017_ClearOverlayTexture_params *params = (struct IVROverlay_IVROverlay_017_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayRaw( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayRaw_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayFromFile( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayFromFile_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle( void *args )
{
    struct IVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle_params *params = (struct IVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayTextureSize( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayTextureSize_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayTextureSize_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_CreateDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_CreateDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_017_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_IsDashboardVisible( void *args )
{
    struct IVROverlay_IVROverlay_017_IsDashboardVisible_params *params = (struct IVROverlay_IVROverlay_017_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->IsDashboardVisible(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_IsActiveDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_IsActiveDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_017_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_ShowDashboard( void *args )
{
    struct IVROverlay_IVROverlay_017_ShowDashboard_params *params = (struct IVROverlay_IVROverlay_017_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetPrimaryDashboardDevice( void *args )
{
    struct IVROverlay_IVROverlay_017_GetPrimaryDashboardDevice_params *params = (struct IVROverlay_IVROverlay_017_GetPrimaryDashboardDevice_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetPrimaryDashboardDevice(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_ShowKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_017_ShowKeyboard_params *params = (struct IVROverlay_IVROverlay_017_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_ShowKeyboardForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_ShowKeyboardForOverlay_params *params = (struct IVROverlay_IVROverlay_017_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetKeyboardText( void *args )
{
    struct IVROverlay_IVROverlay_017_GetKeyboardText_params *params = (struct IVROverlay_IVROverlay_017_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_HideKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_017_HideKeyboard_params *params = (struct IVROverlay_IVROverlay_017_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    iface->HideKeyboard(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay_params *params = (struct IVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayIntersectionMask( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayIntersectionMask_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayIntersectionMask_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_GetOverlayFlags( void *args )
{
    struct IVROverlay_IVROverlay_017_GetOverlayFlags_params *params = (struct IVROverlay_IVROverlay_017_GetOverlayFlags_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_ShowMessageOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_ShowMessageOverlay_params *params = (struct IVROverlay_IVROverlay_017_ShowMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    params->_ret = iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_CloseMessageOverlay( void *args )
{
    struct IVROverlay_IVROverlay_017_CloseMessageOverlay_params *params = (struct IVROverlay_IVROverlay_017_CloseMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    iface->CloseMessageOverlay(  );
    return 0;
}

