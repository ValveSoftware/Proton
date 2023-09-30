/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_010.h"
void cppIVROverlay_IVROverlay_010_FindOverlay( struct cppIVROverlay_IVROverlay_010_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_010_CreateOverlay( struct cppIVROverlay_IVROverlay_010_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_010_DestroyOverlay( struct cppIVROverlay_IVROverlay_010_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_010_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_010_SetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_010_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_010_GetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_010_GetOverlayKey( struct cppIVROverlay_IVROverlay_010_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_010_GetOverlayName( struct cppIVROverlay_IVROverlay_010_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_010_GetOverlayImageData( struct cppIVROverlay_IVROverlay_010_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_010_SetOverlayFlag( struct cppIVROverlay_IVROverlay_010_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_010_GetOverlayFlag( struct cppIVROverlay_IVROverlay_010_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_010_SetOverlayColor( struct cppIVROverlay_IVROverlay_010_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_010_GetOverlayColor( struct cppIVROverlay_IVROverlay_010_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_010_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_010_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_010_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_010_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_010_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_010_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_010_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_010_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_010_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_010_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_010_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_010_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_010_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_010_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_010_ShowOverlay( struct cppIVROverlay_IVROverlay_010_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_010_HideOverlay( struct cppIVROverlay_IVROverlay_010_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_010_IsOverlayVisible( struct cppIVROverlay_IVROverlay_010_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_010_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_010_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    u_VREvent_t_0918 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_010_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_010_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_010_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_010_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_010_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_010_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_010_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_010_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_010_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_010_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_010_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_010_IsHoverTargetOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_010_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_010_GetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_010_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_010_SetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_010_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_010_SetOverlayNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_010_SetOverlayTexture( struct cppIVROverlay_IVROverlay_010_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_010_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_010_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_010_SetOverlayRaw( struct cppIVROverlay_IVROverlay_010_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_010_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_010_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_010_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_010_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_010_IsDashboardVisible( struct cppIVROverlay_IVROverlay_010_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_010_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_010_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_010_ShowDashboard( struct cppIVROverlay_IVROverlay_010_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_010_ShowKeyboard( struct cppIVROverlay_IVROverlay_010_ShowKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_010_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_010_ShowKeyboardForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_010_GetKeyboardText( struct cppIVROverlay_IVROverlay_010_GetKeyboardText_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_010_HideKeyboard( struct cppIVROverlay_IVROverlay_010_HideKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

