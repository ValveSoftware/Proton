/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_007.h"
void cppIVROverlay_IVROverlay_007_FindOverlay( struct cppIVROverlay_IVROverlay_007_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_CreateOverlay( struct cppIVROverlay_IVROverlay_007_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_DestroyOverlay( struct cppIVROverlay_IVROverlay_007_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_007_SetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_007_GetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_007_GetOverlayKey( struct cppIVROverlay_IVROverlay_007_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_007_GetOverlayName( struct cppIVROverlay_IVROverlay_007_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_007_GetOverlayImageData( struct cppIVROverlay_IVROverlay_007_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_007_SetOverlayFlag( struct cppIVROverlay_IVROverlay_007_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_007_GetOverlayFlag( struct cppIVROverlay_IVROverlay_007_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_007_SetOverlayColor( struct cppIVROverlay_IVROverlay_007_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_007_GetOverlayColor( struct cppIVROverlay_IVROverlay_007_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_007_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_007_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_007_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_007_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_007_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_007_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_007_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_007_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_007_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_007_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_007_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_007_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_007_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_007_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_007_ShowOverlay( struct cppIVROverlay_IVROverlay_007_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_HideOverlay( struct cppIVROverlay_IVROverlay_007_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_IsOverlayVisible( struct cppIVROverlay_IVROverlay_007_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_007_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    u_VREvent_t_0912 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_007_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_007_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_007_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_007_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_007_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_007_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_007_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_007_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_007_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_007_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_007_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_007_IsHoverTargetOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_007_GetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_007_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_007_SetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_007_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_007_SetOverlayNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_007_SetOverlayTexture( struct cppIVROverlay_IVROverlay_007_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_007_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_007_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_SetOverlayRaw( struct cppIVROverlay_IVROverlay_007_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_007_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_007_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_007_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_007_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_007_IsDashboardVisible( struct cppIVROverlay_IVROverlay_007_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_007_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_007_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_007_ShowDashboard( struct cppIVROverlay_IVROverlay_007_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_007_ShowKeyboard( struct cppIVROverlay_IVROverlay_007_ShowKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_007_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_007_ShowKeyboardForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_007_GetKeyboardText( struct cppIVROverlay_IVROverlay_007_GetKeyboardText_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_007_HideKeyboard( struct cppIVROverlay_IVROverlay_007_HideKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    iface->HideKeyboard(  );
}

