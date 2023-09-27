#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.10/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_005.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVROverlay_IVROverlay_005_FindOverlay( struct cppIVROverlay_IVROverlay_005_FindOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->FindOverlay((const char *)params->pchOverlayKey, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_005_CreateOverlay( struct cppIVROverlay_IVROverlay_005_CreateOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayFriendlyName, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_005_DestroyOverlay( struct cppIVROverlay_IVROverlay_005_DestroyOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->DestroyOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_005_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_005_SetHighQualityOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_005_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_005_GetHighQualityOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetHighQualityOverlay();
}

void cppIVROverlay_IVROverlay_005_GetOverlayKey( struct cppIVROverlay_IVROverlay_005_GetOverlayKey_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayKey((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::VROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_005_GetOverlayName( struct cppIVROverlay_IVROverlay_005_GetOverlayName_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayName((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::VROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_005_GetOverlayImageData( struct cppIVROverlay_IVROverlay_005_GetOverlayImageData_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unBufferSize, (uint32_t *)params->punWidth, (uint32_t *)params->punHeight);
}

void cppIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayErrorNameFromEnum((vr::VROverlayError)params->error);
}

void cppIVROverlay_IVROverlay_005_SetOverlayFlag( struct cppIVROverlay_IVROverlay_005_SetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool)params->bEnabled);
}

void cppIVROverlay_IVROverlay_005_GetOverlayFlag( struct cppIVROverlay_IVROverlay_005_GetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool *)params->pbEnabled);
}

void cppIVROverlay_IVROverlay_005_SetOverlayColor( struct cppIVROverlay_IVROverlay_005_SetOverlayColor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayColor((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fRed, (float)params->fGreen, (float)params->fBlue);
}

void cppIVROverlay_IVROverlay_005_GetOverlayColor( struct cppIVROverlay_IVROverlay_005_GetOverlayColor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayColor((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfRed, (float *)params->pfGreen, (float *)params->pfBlue);
}

void cppIVROverlay_IVROverlay_005_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_005_SetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fAlpha);
}

void cppIVROverlay_IVROverlay_005_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_005_GetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfAlpha);
}

void cppIVROverlay_IVROverlay_005_SetOverlayGamma( struct cppIVROverlay_IVROverlay_005_SetOverlayGamma_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayGamma((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fGamma);
}

void cppIVROverlay_IVROverlay_005_GetOverlayGamma( struct cppIVROverlay_IVROverlay_005_GetOverlayGamma_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayGamma((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfGamma);
}

void cppIVROverlay_IVROverlay_005_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_005_SetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fWidthInMeters);
}

void cppIVROverlay_IVROverlay_005_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_005_GetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfWidthInMeters);
}

void cppIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fMinDistanceInMeters, (float)params->fMaxDistanceInMeters);
}

void cppIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfMinDistanceInMeters, (float *)params->pfMaxDistanceInMeters);
}

void cppIVROverlay_IVROverlay_005_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_005_SetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_005_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_005_GetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_005_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_005_GetOverlayTransformType_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayTransformType *)params->peTransformType);
}

void cppIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackingUniverseOrigin *)params->peTrackingOrigin, (vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unTrackedDevice, (const vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t *)params->punTrackedDevice, (vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_005_ShowOverlay( struct cppIVROverlay_IVROverlay_005_ShowOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_005_HideOverlay( struct cppIVROverlay_IVROverlay_005_HideOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->HideOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_005_IsOverlayVisible( struct cppIVROverlay_IVROverlay_005_IsOverlayVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_005_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_005_PollNextOverlayEvent_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VREvent_t *)params->pEvent);
}

void cppIVROverlay_IVROverlay_005_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_005_GetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod *)params->peInputMethod);
}

void cppIVROverlay_IVROverlay_005_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_005_SetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod)params->eInputMethod);
}

void cppIVROverlay_IVROverlay_005_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_005_GetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_005_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_005_SetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_005_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_005_ComputeOverlayIntersection_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)params->pParams, (vr::VROverlayIntersectionResults_t *)params->pResults);
}

void cppIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->HandleControllerOverlayInteractionAsMouse((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex);
}

void cppIVROverlay_IVROverlay_005_IsFocusOverlay( struct cppIVROverlay_IVROverlay_005_IsFocusOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsFocusOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_005_SetOverlayTexture( struct cppIVROverlay_IVROverlay_005_SetOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::GraphicsAPIConvention)params->eTextureType, (void *)params->pTexture);
}

void cppIVROverlay_IVROverlay_005_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_005_ClearOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_005_SetOverlayRaw( struct cppIVROverlay_IVROverlay_005_SetOverlayRaw_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unWidth, (uint32_t)params->unHeight, (uint32_t)params->unDepth);
}

void cppIVROverlay_IVROverlay_005_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_005_SetOverlayFromFile_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)params->ulOverlayHandle, (const char *)params->pchFilePath);
}

void cppIVROverlay_IVROverlay_005_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_005_CreateDashboardOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateDashboardOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayFriendlyName, (vr::VROverlayHandle_t *)params->pMainHandle, (vr::VROverlayHandle_t *)params->pThumbnailHandle);
}

void cppIVROverlay_IVROverlay_005_IsDashboardVisible( struct cppIVROverlay_IVROverlay_005_IsDashboardVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsDashboardVisible();
}

void cppIVROverlay_IVROverlay_005_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_005_IsActiveDashboardOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unProcessId);
}

void cppIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->punProcessId);
}

void cppIVROverlay_IVROverlay_005_ShowDashboard( struct cppIVROverlay_IVROverlay_005_ShowDashboard_params *params )
{
    ((IVROverlay*)params->linux_side)->ShowDashboard((const char *)params->pchOverlayToShow);
}

void cppIVROverlay_IVROverlay_005_ShowKeyboard( struct cppIVROverlay_IVROverlay_005_ShowKeyboard_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)params->eInputMode, (vr::EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32_t)params->unCharMax, (const char *)params->pchExistingText, (bool)params->bUseMinimalMode);
}

void cppIVROverlay_IVROverlay_005_GetKeyboardText( struct cppIVROverlay_IVROverlay_005_GetKeyboardText_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetKeyboardText((char *)params->pchText, (uint32_t)params->cchText);
}

void cppIVROverlay_IVROverlay_005_HideKeyboard( struct cppIVROverlay_IVROverlay_005_HideKeyboard_params *params )
{
    ((IVROverlay*)params->linux_side)->HideKeyboard();
}

#ifdef __cplusplus
}
#endif
