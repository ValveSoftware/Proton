/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVROverlay_IVROverlay_005_FindOverlay( void *args )
{
    struct IVROverlay_IVROverlay_005_FindOverlay_params *params = (struct IVROverlay_IVROverlay_005_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_CreateOverlay( void *args )
{
    struct IVROverlay_IVROverlay_005_CreateOverlay_params *params = (struct IVROverlay_IVROverlay_005_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_DestroyOverlay( void *args )
{
    struct IVROverlay_IVROverlay_005_DestroyOverlay_params *params = (struct IVROverlay_IVROverlay_005_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_005_SetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_005_SetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_005_GetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_005_GetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetHighQualityOverlay(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayKey( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayKey_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayName_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayImageData( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayImageData_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayColor_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayColor_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayGamma( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayGamma_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayGamma_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayGamma( params->ulOverlayHandle, params->fGamma );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayGamma( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayGamma_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayGamma_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayGamma( params->ulOverlayHandle, params->pfGamma );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayTransformType( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayTransformType_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_ShowOverlay( void *args )
{
    struct IVROverlay_IVROverlay_005_ShowOverlay_params *params = (struct IVROverlay_IVROverlay_005_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_HideOverlay( void *args )
{
    struct IVROverlay_IVROverlay_005_HideOverlay_params *params = (struct IVROverlay_IVROverlay_005_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_IsOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_005_IsOverlayVisible_params *params = (struct IVROverlay_IVROverlay_005_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_PollNextOverlayEvent( void *args )
{
    struct IVROverlay_IVROverlay_005_PollNextOverlayEvent_params *params = (struct IVROverlay_IVROverlay_005_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    u_VREvent_t_0910 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_005_GetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_005_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_ComputeOverlayIntersection( void *args )
{
    struct IVROverlay_IVROverlay_005_ComputeOverlayIntersection_params *params = (struct IVROverlay_IVROverlay_005_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse( void *args )
{
    struct IVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse_params *params = (struct IVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_IsFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_005_IsFocusOverlay_params *params = (struct IVROverlay_IVROverlay_005_IsFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->IsFocusOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_ClearOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_005_ClearOverlayTexture_params *params = (struct IVROverlay_IVROverlay_005_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayRaw( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayRaw_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayFromFile( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayFromFile_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_CreateDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_005_CreateDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_005_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_IsDashboardVisible( void *args )
{
    struct IVROverlay_IVROverlay_005_IsDashboardVisible_params *params = (struct IVROverlay_IVROverlay_005_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->IsDashboardVisible(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_IsActiveDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_005_IsActiveDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_005_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_ShowDashboard( void *args )
{
    struct IVROverlay_IVROverlay_005_ShowDashboard_params *params = (struct IVROverlay_IVROverlay_005_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_ShowKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_005_ShowKeyboard_params *params = (struct IVROverlay_IVROverlay_005_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_GetKeyboardText( void *args )
{
    struct IVROverlay_IVROverlay_005_GetKeyboardText_params *params = (struct IVROverlay_IVROverlay_005_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_HideKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_005_HideKeyboard_params *params = (struct IVROverlay_IVROverlay_005_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    iface->HideKeyboard(  );
    return 0;
}

