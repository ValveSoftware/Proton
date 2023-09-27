#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.4/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_013.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVROverlay_IVROverlay_013_FindOverlay( struct cppIVROverlay_IVROverlay_013_FindOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->FindOverlay((const char *)params->pchOverlayKey, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_CreateOverlay( struct cppIVROverlay_IVROverlay_013_CreateOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayFriendlyName, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_DestroyOverlay( struct cppIVROverlay_IVROverlay_013_DestroyOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->DestroyOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_013_SetHighQualityOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_013_GetHighQualityOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetHighQualityOverlay();
}

void cppIVROverlay_IVROverlay_013_GetOverlayKey( struct cppIVROverlay_IVROverlay_013_GetOverlayKey_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayKey((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::EVROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_013_GetOverlayName( struct cppIVROverlay_IVROverlay_013_GetOverlayName_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayName((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::EVROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_013_GetOverlayImageData( struct cppIVROverlay_IVROverlay_013_GetOverlayImageData_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unBufferSize, (uint32_t *)params->punWidth, (uint32_t *)params->punHeight);
}

void cppIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayErrorNameFromEnum((vr::EVROverlayError)params->error);
}

void cppIVROverlay_IVROverlay_013_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_013_SetOverlayRenderingPid_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayRenderingPid((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unPID);
}

void cppIVROverlay_IVROverlay_013_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_013_GetOverlayRenderingPid_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayRenderingPid((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_SetOverlayFlag( struct cppIVROverlay_IVROverlay_013_SetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool)params->bEnabled);
}

void cppIVROverlay_IVROverlay_013_GetOverlayFlag( struct cppIVROverlay_IVROverlay_013_GetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool *)params->pbEnabled);
}

void cppIVROverlay_IVROverlay_013_SetOverlayColor( struct cppIVROverlay_IVROverlay_013_SetOverlayColor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayColor((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fRed, (float)params->fGreen, (float)params->fBlue);
}

void cppIVROverlay_IVROverlay_013_GetOverlayColor( struct cppIVROverlay_IVROverlay_013_GetOverlayColor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayColor((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfRed, (float *)params->pfGreen, (float *)params->pfBlue);
}

void cppIVROverlay_IVROverlay_013_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_013_SetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fAlpha);
}

void cppIVROverlay_IVROverlay_013_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_013_GetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfAlpha);
}

void cppIVROverlay_IVROverlay_013_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_013_SetOverlayTexelAspect_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTexelAspect((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fTexelAspect);
}

void cppIVROverlay_IVROverlay_013_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_013_GetOverlayTexelAspect_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTexelAspect((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfTexelAspect);
}

void cppIVROverlay_IVROverlay_013_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_013_SetOverlaySortOrder_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlaySortOrder((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unSortOrder);
}

void cppIVROverlay_IVROverlay_013_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_013_GetOverlaySortOrder_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlaySortOrder((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->punSortOrder);
}

void cppIVROverlay_IVROverlay_013_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_013_SetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fWidthInMeters);
}

void cppIVROverlay_IVROverlay_013_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_013_GetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfWidthInMeters);
}

void cppIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fMinDistanceInMeters, (float)params->fMaxDistanceInMeters);
}

void cppIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfMinDistanceInMeters, (float *)params->pfMaxDistanceInMeters);
}

void cppIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTextureColorSpace((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EColorSpace)params->eTextureColorSpace);
}

void cppIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureColorSpace((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EColorSpace *)params->peTextureColorSpace);
}

void cppIVROverlay_IVROverlay_013_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_013_SetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_013_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_013_GetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformType_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayTransformType *)params->peTransformType);
}

void cppIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin *)params->peTrackingOrigin, (vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unTrackedDevice, (const vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t *)params->punTrackedDevice, (vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unDeviceIndex, (const char *)params->pchComponentName);
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t *)params->punDeviceIndex, (char *)params->pchComponentName, (uint32_t)params->unComponentNameSize);
}

void cppIVROverlay_IVROverlay_013_ShowOverlay( struct cppIVROverlay_IVROverlay_013_ShowOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_HideOverlay( struct cppIVROverlay_IVROverlay_013_HideOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->HideOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_IsOverlayVisible( struct cppIVROverlay_IVROverlay_013_IsOverlayVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetTransformForOverlayCoordinates((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (vr::HmdVector2_t)params->coordinatesInOverlay, (vr::HmdMatrix34_t *)params->pmatTransform);
}

void cppIVROverlay_IVROverlay_013_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_013_PollNextOverlayEvent_params *params )
{
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_104_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = ((IVROverlay*)params->linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)params->ulOverlayHandle, params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent);
    if (params->pEvent)
        struct_VREvent_t_104_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVROverlay_IVROverlay_013_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_013_GetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod *)params->peInputMethod);
}

void cppIVROverlay_IVROverlay_013_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_013_SetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod)params->eInputMethod);
}

void cppIVROverlay_IVROverlay_013_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_013_GetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_013_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_013_SetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_013_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_013_ComputeOverlayIntersection_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)params->pParams, (vr::VROverlayIntersectionResults_t *)params->pResults);
}

void cppIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->HandleControllerOverlayInteractionAsMouse((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex);
}

void cppIVROverlay_IVROverlay_013_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_013_IsHoverTargetOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsHoverTargetOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_013_GetGamepadFocusOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetGamepadFocusOverlay();
}

void cppIVROverlay_IVROverlay_013_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_013_SetGamepadFocusOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetGamepadFocusOverlay((vr::VROverlayHandle_t)params->ulNewFocusOverlay);
}

void cppIVROverlay_IVROverlay_013_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_013_SetOverlayNeighbor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayNeighbor((vr::EOverlayDirection)params->eDirection, (vr::VROverlayHandle_t)params->ulFrom, (vr::VROverlayHandle_t)params->ulTo);
}

void cppIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->MoveGamepadFocusToNeighbor((vr::EOverlayDirection)params->eDirection, (vr::VROverlayHandle_t)params->ulFrom);
}

void cppIVROverlay_IVROverlay_013_SetOverlayTexture( struct cppIVROverlay_IVROverlay_013_SetOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::Texture_t *)params->pTexture);
}

void cppIVROverlay_IVROverlay_013_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_013_ClearOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_SetOverlayRaw( struct cppIVROverlay_IVROverlay_013_SetOverlayRaw_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unWidth, (uint32_t)params->unHeight, (uint32_t)params->unDepth);
}

void cppIVROverlay_IVROverlay_013_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_013_SetOverlayFromFile_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)params->ulOverlayHandle, (const char *)params->pchFilePath);
}

void cppIVROverlay_IVROverlay_013_GetOverlayTexture( struct cppIVROverlay_IVROverlay_013_GetOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle, (void **)params->pNativeTextureHandle, (void *)params->pNativeTextureRef, (uint32_t *)params->pWidth, (uint32_t *)params->pHeight, (uint32_t *)params->pNativeFormat, (vr::EGraphicsAPIConvention *)params->pAPI, (vr::EColorSpace *)params->pColorSpace);
}

void cppIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ReleaseNativeOverlayHandle((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pNativeTextureHandle);
}

void cppIVROverlay_IVROverlay_013_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_013_GetOverlayTextureSize_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureSize((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->pWidth, (uint32_t *)params->pHeight);
}

void cppIVROverlay_IVROverlay_013_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_013_CreateDashboardOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateDashboardOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayFriendlyName, (vr::VROverlayHandle_t *)params->pMainHandle, (vr::VROverlayHandle_t *)params->pThumbnailHandle);
}

void cppIVROverlay_IVROverlay_013_IsDashboardVisible( struct cppIVROverlay_IVROverlay_013_IsDashboardVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsDashboardVisible();
}

void cppIVROverlay_IVROverlay_013_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_013_IsActiveDashboardOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unProcessId);
}

void cppIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->punProcessId);
}

void cppIVROverlay_IVROverlay_013_ShowDashboard( struct cppIVROverlay_IVROverlay_013_ShowDashboard_params *params )
{
    ((IVROverlay*)params->linux_side)->ShowDashboard((const char *)params->pchOverlayToShow);
}

void cppIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetPrimaryDashboardDevice();
}

void cppIVROverlay_IVROverlay_013_ShowKeyboard( struct cppIVROverlay_IVROverlay_013_ShowKeyboard_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)params->eInputMode, (vr::EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32_t)params->unCharMax, (const char *)params->pchExistingText, (bool)params->bUseMinimalMode, (uint64_t)params->uUserValue);
}

void cppIVROverlay_IVROverlay_013_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_013_ShowKeyboardForOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowKeyboardForOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EGamepadTextInputMode)params->eInputMode, (vr::EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32_t)params->unCharMax, (const char *)params->pchExistingText, (bool)params->bUseMinimalMode, (uint64_t)params->uUserValue);
}

void cppIVROverlay_IVROverlay_013_GetKeyboardText( struct cppIVROverlay_IVROverlay_013_GetKeyboardText_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetKeyboardText((char *)params->pchText, (uint32_t)params->cchText);
}

void cppIVROverlay_IVROverlay_013_HideKeyboard( struct cppIVROverlay_IVROverlay_013_HideKeyboard_params *params )
{
    ((IVROverlay*)params->linux_side)->HideKeyboard();
}

void cppIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute_params *params )
{
    ((IVROverlay*)params->linux_side)->SetKeyboardTransformAbsolute((vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToKeyboardTransform);
}

void cppIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay_params *params )
{
    ((IVROverlay*)params->linux_side)->SetKeyboardPositionForOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdRect2_t)params->avoidRect);
}

void cppIVROverlay_IVROverlay_013_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_013_SetOverlayIntersectionMask_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayIntersectionMask((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayIntersectionMaskPrimitive_t *)params->pMaskPrimitives, (uint32_t)params->unNumMaskPrimitives, (uint32_t)params->unPrimitiveSize);
}

#ifdef __cplusplus
}
#endif
