/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_004.h"
void cppIVROverlay_IVROverlay_004_FindOverlay( struct cppIVROverlay_IVROverlay_004_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_004_CreateOverlay( struct cppIVROverlay_IVROverlay_004_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_004_DestroyOverlay( struct cppIVROverlay_IVROverlay_004_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_004_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_004_SetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_004_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_004_GetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_004_GetOverlayKey( struct cppIVROverlay_IVROverlay_004_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_004_GetOverlayName( struct cppIVROverlay_IVROverlay_004_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_004_GetOverlayImageData( struct cppIVROverlay_IVROverlay_004_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_004_SetOverlayFlag( struct cppIVROverlay_IVROverlay_004_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_004_GetOverlayFlag( struct cppIVROverlay_IVROverlay_004_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_004_SetOverlayColor( struct cppIVROverlay_IVROverlay_004_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_004_GetOverlayColor( struct cppIVROverlay_IVROverlay_004_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_004_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_004_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_004_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_004_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_004_SetOverlayGamma( struct cppIVROverlay_IVROverlay_004_SetOverlayGamma_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayGamma( params->ulOverlayHandle, params->fGamma );
}

void cppIVROverlay_IVROverlay_004_GetOverlayGamma( struct cppIVROverlay_IVROverlay_004_GetOverlayGamma_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayGamma( params->ulOverlayHandle, params->pfGamma );
}

void cppIVROverlay_IVROverlay_004_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_004_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_004_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_004_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_004_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_004_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_004_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_004_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_004_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_004_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_004_ShowOverlay( struct cppIVROverlay_IVROverlay_004_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_004_HideOverlay( struct cppIVROverlay_IVROverlay_004_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_004_IsOverlayVisible( struct cppIVROverlay_IVROverlay_004_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_004_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_004_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    u_VREvent_t_097 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_004_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_004_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_004_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_004_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_004_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_004_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_004_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_004_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_004_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_004_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_004_SetOverlayTexture( struct cppIVROverlay_IVROverlay_004_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->eTextureType, params->pTexture );
}

void cppIVROverlay_IVROverlay_004_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_004_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_004_SetOverlayRaw( struct cppIVROverlay_IVROverlay_004_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_004_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_004_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_004_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_004_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_004_IsDashboardVisible( struct cppIVROverlay_IVROverlay_004_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_004_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_004_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_004_ShowDashboard( struct cppIVROverlay_IVROverlay_004_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

