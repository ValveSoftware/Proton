#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_008.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVROverlay_IVROverlay_008_FindOverlay( struct cppIVROverlay_IVROverlay_008_FindOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->FindOverlay((const char *)params->pchOverlayKey, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_008_CreateOverlay( struct cppIVROverlay_IVROverlay_008_CreateOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayFriendlyName, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_008_DestroyOverlay( struct cppIVROverlay_IVROverlay_008_DestroyOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->DestroyOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_008_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_008_SetHighQualityOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_008_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_008_GetHighQualityOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetHighQualityOverlay();
}

void cppIVROverlay_IVROverlay_008_GetOverlayKey( struct cppIVROverlay_IVROverlay_008_GetOverlayKey_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayKey((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::EVROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_008_GetOverlayName( struct cppIVROverlay_IVROverlay_008_GetOverlayName_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayName((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::EVROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_008_GetOverlayImageData( struct cppIVROverlay_IVROverlay_008_GetOverlayImageData_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unBufferSize, (uint32_t *)params->punWidth, (uint32_t *)params->punHeight);
}

void cppIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayErrorNameFromEnum((vr::EVROverlayError)params->error);
}

void cppIVROverlay_IVROverlay_008_SetOverlayFlag( struct cppIVROverlay_IVROverlay_008_SetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool)params->bEnabled);
}

void cppIVROverlay_IVROverlay_008_GetOverlayFlag( struct cppIVROverlay_IVROverlay_008_GetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool *)params->pbEnabled);
}

void cppIVROverlay_IVROverlay_008_SetOverlayColor( struct cppIVROverlay_IVROverlay_008_SetOverlayColor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayColor((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fRed, (float)params->fGreen, (float)params->fBlue);
}

void cppIVROverlay_IVROverlay_008_GetOverlayColor( struct cppIVROverlay_IVROverlay_008_GetOverlayColor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayColor((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfRed, (float *)params->pfGreen, (float *)params->pfBlue);
}

void cppIVROverlay_IVROverlay_008_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_008_SetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fAlpha);
}

void cppIVROverlay_IVROverlay_008_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_008_GetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfAlpha);
}

void cppIVROverlay_IVROverlay_008_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_008_SetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fWidthInMeters);
}

void cppIVROverlay_IVROverlay_008_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_008_GetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfWidthInMeters);
}

void cppIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fMinDistanceInMeters, (float)params->fMaxDistanceInMeters);
}

void cppIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfMinDistanceInMeters, (float *)params->pfMaxDistanceInMeters);
}

void cppIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTextureColorSpace((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EColorSpace)params->eTextureColorSpace);
}

void cppIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureColorSpace((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EColorSpace *)params->peTextureColorSpace);
}

void cppIVROverlay_IVROverlay_008_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_008_SetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_008_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_008_GetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_008_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_008_GetOverlayTransformType_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayTransformType *)params->peTransformType);
}

void cppIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin *)params->peTrackingOrigin, (vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unTrackedDevice, (const vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t *)params->punTrackedDevice, (vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_008_ShowOverlay( struct cppIVROverlay_IVROverlay_008_ShowOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_008_HideOverlay( struct cppIVROverlay_IVROverlay_008_HideOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->HideOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_008_IsOverlayVisible( struct cppIVROverlay_IVROverlay_008_IsOverlayVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetTransformForOverlayCoordinates((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (vr::HmdVector2_t)params->coordinatesInOverlay, (vr::HmdMatrix34_t *)params->pmatTransform);
}

void cppIVROverlay_IVROverlay_008_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_008_PollNextOverlayEvent_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VREvent_t *)params->pEvent);
}

void cppIVROverlay_IVROverlay_008_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_008_GetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod *)params->peInputMethod);
}

void cppIVROverlay_IVROverlay_008_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_008_SetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod)params->eInputMethod);
}

void cppIVROverlay_IVROverlay_008_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_008_GetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_008_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_008_SetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_008_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_008_ComputeOverlayIntersection_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)params->pParams, (vr::VROverlayIntersectionResults_t *)params->pResults);
}

void cppIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->HandleControllerOverlayInteractionAsMouse((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex);
}

void cppIVROverlay_IVROverlay_008_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_008_IsHoverTargetOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsHoverTargetOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_008_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_008_GetGamepadFocusOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetGamepadFocusOverlay();
}

void cppIVROverlay_IVROverlay_008_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_008_SetGamepadFocusOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetGamepadFocusOverlay((vr::VROverlayHandle_t)params->ulNewFocusOverlay);
}

void cppIVROverlay_IVROverlay_008_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_008_SetOverlayNeighbor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayNeighbor((vr::EOverlayDirection)params->eDirection, (vr::VROverlayHandle_t)params->ulFrom, (vr::VROverlayHandle_t)params->ulTo);
}

void cppIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->MoveGamepadFocusToNeighbor((vr::EOverlayDirection)params->eDirection, (vr::VROverlayHandle_t)params->ulFrom);
}

void cppIVROverlay_IVROverlay_008_SetOverlayTexture( struct cppIVROverlay_IVROverlay_008_SetOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::Texture_t *)params->pTexture);
}

void cppIVROverlay_IVROverlay_008_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_008_ClearOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_008_SetOverlayRaw( struct cppIVROverlay_IVROverlay_008_SetOverlayRaw_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unWidth, (uint32_t)params->unHeight, (uint32_t)params->unDepth);
}

void cppIVROverlay_IVROverlay_008_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_008_SetOverlayFromFile_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)params->ulOverlayHandle, (const char *)params->pchFilePath);
}

void cppIVROverlay_IVROverlay_008_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_008_CreateDashboardOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateDashboardOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayFriendlyName, (vr::VROverlayHandle_t *)params->pMainHandle, (vr::VROverlayHandle_t *)params->pThumbnailHandle);
}

void cppIVROverlay_IVROverlay_008_IsDashboardVisible( struct cppIVROverlay_IVROverlay_008_IsDashboardVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsDashboardVisible();
}

void cppIVROverlay_IVROverlay_008_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_008_IsActiveDashboardOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unProcessId);
}

void cppIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->punProcessId);
}

void cppIVROverlay_IVROverlay_008_ShowDashboard( struct cppIVROverlay_IVROverlay_008_ShowDashboard_params *params )
{
    ((IVROverlay*)params->linux_side)->ShowDashboard((const char *)params->pchOverlayToShow);
}

void cppIVROverlay_IVROverlay_008_ShowKeyboard( struct cppIVROverlay_IVROverlay_008_ShowKeyboard_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)params->eInputMode, (vr::EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32_t)params->unCharMax, (const char *)params->pchExistingText, (bool)params->bUseMinimalMode, (uint64_t)params->uUserValue);
}

void cppIVROverlay_IVROverlay_008_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_008_ShowKeyboardForOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowKeyboardForOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EGamepadTextInputMode)params->eInputMode, (vr::EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32_t)params->unCharMax, (const char *)params->pchExistingText, (bool)params->bUseMinimalMode, (uint64_t)params->uUserValue);
}

void cppIVROverlay_IVROverlay_008_GetKeyboardText( struct cppIVROverlay_IVROverlay_008_GetKeyboardText_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetKeyboardText((char *)params->pchText, (uint32_t)params->cchText);
}

void cppIVROverlay_IVROverlay_008_HideKeyboard( struct cppIVROverlay_IVROverlay_008_HideKeyboard_params *params )
{
    ((IVROverlay*)params->linux_side)->HideKeyboard();
}

void cppIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute_params *params )
{
    ((IVROverlay*)params->linux_side)->SetKeyboardTransformAbsolute((vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToKeyboardTransform);
}

void cppIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay_params *params )
{
    ((IVROverlay*)params->linux_side)->SetKeyboardPositionForOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdRect2_t)params->avoidRect);
}

#ifdef __cplusplus
}
#endif
