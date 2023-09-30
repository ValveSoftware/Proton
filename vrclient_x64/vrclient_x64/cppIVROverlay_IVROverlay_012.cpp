/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_012.h"
void cppIVROverlay_IVROverlay_012_FindOverlay( struct cppIVROverlay_IVROverlay_012_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_CreateOverlay( struct cppIVROverlay_IVROverlay_012_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_DestroyOverlay( struct cppIVROverlay_IVROverlay_012_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_012_SetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_012_GetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_012_GetOverlayKey( struct cppIVROverlay_IVROverlay_012_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_012_GetOverlayName( struct cppIVROverlay_IVROverlay_012_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_012_GetOverlayImageData( struct cppIVROverlay_IVROverlay_012_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_012_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_012_SetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_012_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_012_GetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_SetOverlayFlag( struct cppIVROverlay_IVROverlay_012_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_012_GetOverlayFlag( struct cppIVROverlay_IVROverlay_012_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_012_SetOverlayColor( struct cppIVROverlay_IVROverlay_012_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_012_GetOverlayColor( struct cppIVROverlay_IVROverlay_012_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_012_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_012_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_012_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_012_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_012_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_012_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_012_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_012_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_012_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_012_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_012_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_012_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_012_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_012_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_012_ShowOverlay( struct cppIVROverlay_IVROverlay_012_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_HideOverlay( struct cppIVROverlay_IVROverlay_012_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_IsOverlayVisible( struct cppIVROverlay_IVROverlay_012_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_012_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_012_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    u_VREvent_t_101 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_012_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_012_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_012_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_012_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_012_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_012_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_012_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_012_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_012_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_012_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_012_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_012_IsHoverTargetOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_012_GetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_012_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_012_SetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_012_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_012_SetOverlayNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_012_SetOverlayTexture( struct cppIVROverlay_IVROverlay_012_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_012_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_012_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_SetOverlayRaw( struct cppIVROverlay_IVROverlay_012_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_012_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_012_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_012_GetOverlayTexture( struct cppIVROverlay_IVROverlay_012_GetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPI, params->pColorSpace );
}

void cppIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_012_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_012_GetOverlayTextureSize_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
}

void cppIVROverlay_IVROverlay_012_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_012_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_012_IsDashboardVisible( struct cppIVROverlay_IVROverlay_012_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_012_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_012_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_012_ShowDashboard( struct cppIVROverlay_IVROverlay_012_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_012_ShowKeyboard( struct cppIVROverlay_IVROverlay_012_ShowKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_012_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_012_ShowKeyboardForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_012_GetKeyboardText( struct cppIVROverlay_IVROverlay_012_GetKeyboardText_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_012_HideKeyboard( struct cppIVROverlay_IVROverlay_012_HideKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

