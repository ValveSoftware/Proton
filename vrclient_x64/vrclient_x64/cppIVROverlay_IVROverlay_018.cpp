#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.17/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_018.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVROverlay_IVROverlay_018_FindOverlay( struct cppIVROverlay_IVROverlay_018_FindOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->FindOverlay((const char *)params->pchOverlayKey, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_CreateOverlay( struct cppIVROverlay_IVROverlay_018_CreateOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayName, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_DestroyOverlay( struct cppIVROverlay_IVROverlay_018_DestroyOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->DestroyOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_018_SetHighQualityOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_018_GetHighQualityOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetHighQualityOverlay();
}

void cppIVROverlay_IVROverlay_018_GetOverlayKey( struct cppIVROverlay_IVROverlay_018_GetOverlayKey_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayKey((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::EVROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_018_GetOverlayName( struct cppIVROverlay_IVROverlay_018_GetOverlayName_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayName((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::EVROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_018_SetOverlayName( struct cppIVROverlay_IVROverlay_018_SetOverlayName_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayName((vr::VROverlayHandle_t)params->ulOverlayHandle, (const char *)params->pchName);
}

void cppIVROverlay_IVROverlay_018_GetOverlayImageData( struct cppIVROverlay_IVROverlay_018_GetOverlayImageData_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unBufferSize, (uint32_t *)params->punWidth, (uint32_t *)params->punHeight);
}

void cppIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayErrorNameFromEnum((vr::EVROverlayError)params->error);
}

void cppIVROverlay_IVROverlay_018_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_018_SetOverlayRenderingPid_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayRenderingPid((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unPID);
}

void cppIVROverlay_IVROverlay_018_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_018_GetOverlayRenderingPid_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayRenderingPid((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_SetOverlayFlag( struct cppIVROverlay_IVROverlay_018_SetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool)params->bEnabled);
}

void cppIVROverlay_IVROverlay_018_GetOverlayFlag( struct cppIVROverlay_IVROverlay_018_GetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool *)params->pbEnabled);
}

void cppIVROverlay_IVROverlay_018_SetOverlayColor( struct cppIVROverlay_IVROverlay_018_SetOverlayColor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayColor((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fRed, (float)params->fGreen, (float)params->fBlue);
}

void cppIVROverlay_IVROverlay_018_GetOverlayColor( struct cppIVROverlay_IVROverlay_018_GetOverlayColor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayColor((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfRed, (float *)params->pfGreen, (float *)params->pfBlue);
}

void cppIVROverlay_IVROverlay_018_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_018_SetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fAlpha);
}

void cppIVROverlay_IVROverlay_018_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_018_GetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfAlpha);
}

void cppIVROverlay_IVROverlay_018_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_018_SetOverlayTexelAspect_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTexelAspect((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fTexelAspect);
}

void cppIVROverlay_IVROverlay_018_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_018_GetOverlayTexelAspect_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTexelAspect((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfTexelAspect);
}

void cppIVROverlay_IVROverlay_018_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_018_SetOverlaySortOrder_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlaySortOrder((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unSortOrder);
}

void cppIVROverlay_IVROverlay_018_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_018_GetOverlaySortOrder_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlaySortOrder((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->punSortOrder);
}

void cppIVROverlay_IVROverlay_018_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_018_SetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fWidthInMeters);
}

void cppIVROverlay_IVROverlay_018_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_018_GetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfWidthInMeters);
}

void cppIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fMinDistanceInMeters, (float)params->fMaxDistanceInMeters);
}

void cppIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfMinDistanceInMeters, (float *)params->pfMaxDistanceInMeters);
}

void cppIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTextureColorSpace((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EColorSpace)params->eTextureColorSpace);
}

void cppIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureColorSpace((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EColorSpace *)params->peTextureColorSpace);
}

void cppIVROverlay_IVROverlay_018_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_018_SetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_018_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_018_GetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_018_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_018_GetOverlayRenderModel_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayRenderModel((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::HmdColor_t *)params->pColor, (vr::EVROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_018_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_018_SetOverlayRenderModel_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayRenderModel((vr::VROverlayHandle_t)params->ulOverlayHandle, (const char *)params->pchRenderModel, (const vr::HmdColor_t *)params->pColor);
}

void cppIVROverlay_IVROverlay_018_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformType_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayTransformType *)params->peTransformType);
}

void cppIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin *)params->peTrackingOrigin, (vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unTrackedDevice, (const vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t *)params->punTrackedDevice, (vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unDeviceIndex, (const char *)params->pchComponentName);
}

void cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t *)params->punDeviceIndex, (char *)params->pchComponentName, (uint32_t)params->unComponentNameSize);
}

void cppIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformOverlayRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayHandle_t *)params->ulOverlayHandleParent, (vr::HmdMatrix34_t *)params->pmatParentOverlayToOverlayTransform);
}

void cppIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformOverlayRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayHandle_t)params->ulOverlayHandleParent, (const vr::HmdMatrix34_t *)params->pmatParentOverlayToOverlayTransform);
}

void cppIVROverlay_IVROverlay_018_ShowOverlay( struct cppIVROverlay_IVROverlay_018_ShowOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_HideOverlay( struct cppIVROverlay_IVROverlay_018_HideOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->HideOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_IsOverlayVisible( struct cppIVROverlay_IVROverlay_018_IsOverlayVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetTransformForOverlayCoordinates((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (vr::HmdVector2_t)params->coordinatesInOverlay, (vr::HmdMatrix34_t *)params->pmatTransform);
}

void cppIVROverlay_IVROverlay_018_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_018_PollNextOverlayEvent_params *params )
{
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_1017_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = ((IVROverlay*)params->linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)params->ulOverlayHandle, params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent);
    if (params->pEvent)
        struct_VREvent_t_1017_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVROverlay_IVROverlay_018_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_018_GetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod *)params->peInputMethod);
}

void cppIVROverlay_IVROverlay_018_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_018_SetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod)params->eInputMethod);
}

void cppIVROverlay_IVROverlay_018_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_018_GetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_018_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_018_SetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_018_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_018_ComputeOverlayIntersection_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)params->pParams, (vr::VROverlayIntersectionResults_t *)params->pResults);
}

void cppIVROverlay_IVROverlay_018_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_018_IsHoverTargetOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsHoverTargetOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_018_GetGamepadFocusOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetGamepadFocusOverlay();
}

void cppIVROverlay_IVROverlay_018_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_018_SetGamepadFocusOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetGamepadFocusOverlay((vr::VROverlayHandle_t)params->ulNewFocusOverlay);
}

void cppIVROverlay_IVROverlay_018_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_018_SetOverlayNeighbor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayNeighbor((vr::EOverlayDirection)params->eDirection, (vr::VROverlayHandle_t)params->ulFrom, (vr::VROverlayHandle_t)params->ulTo);
}

void cppIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->MoveGamepadFocusToNeighbor((vr::EOverlayDirection)params->eDirection, (vr::VROverlayHandle_t)params->ulFrom);
}

void cppIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayDualAnalogTransform((vr::VROverlayHandle_t)params->ulOverlay, (vr::EDualAnalogWhich)params->eWhich, *params->vCenter, (float)params->fRadius);
}

void cppIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayDualAnalogTransform((vr::VROverlayHandle_t)params->ulOverlay, (vr::EDualAnalogWhich)params->eWhich, (vr::HmdVector2_t *)params->pvCenter, (float *)params->pfRadius);
}

void cppIVROverlay_IVROverlay_018_SetOverlayTexture( struct cppIVROverlay_IVROverlay_018_SetOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::Texture_t *)params->pTexture);
}

void cppIVROverlay_IVROverlay_018_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_018_ClearOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_SetOverlayRaw( struct cppIVROverlay_IVROverlay_018_SetOverlayRaw_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unWidth, (uint32_t)params->unHeight, (uint32_t)params->unDepth);
}

void cppIVROverlay_IVROverlay_018_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_018_SetOverlayFromFile_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)params->ulOverlayHandle, (const char *)params->pchFilePath);
}

void cppIVROverlay_IVROverlay_018_GetOverlayTexture( struct cppIVROverlay_IVROverlay_018_GetOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle, (void **)params->pNativeTextureHandle, (void *)params->pNativeTextureRef, (uint32_t *)params->pWidth, (uint32_t *)params->pHeight, (uint32_t *)params->pNativeFormat, (vr::ETextureType *)params->pAPIType, (vr::EColorSpace *)params->pColorSpace, (vr::VRTextureBounds_t *)params->pTextureBounds);
}

void cppIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ReleaseNativeOverlayHandle((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pNativeTextureHandle);
}

void cppIVROverlay_IVROverlay_018_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_018_GetOverlayTextureSize_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureSize((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->pWidth, (uint32_t *)params->pHeight);
}

void cppIVROverlay_IVROverlay_018_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_018_CreateDashboardOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateDashboardOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayFriendlyName, (vr::VROverlayHandle_t *)params->pMainHandle, (vr::VROverlayHandle_t *)params->pThumbnailHandle);
}

void cppIVROverlay_IVROverlay_018_IsDashboardVisible( struct cppIVROverlay_IVROverlay_018_IsDashboardVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsDashboardVisible();
}

void cppIVROverlay_IVROverlay_018_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_018_IsActiveDashboardOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unProcessId);
}

void cppIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->punProcessId);
}

void cppIVROverlay_IVROverlay_018_ShowDashboard( struct cppIVROverlay_IVROverlay_018_ShowDashboard_params *params )
{
    ((IVROverlay*)params->linux_side)->ShowDashboard((const char *)params->pchOverlayToShow);
}

void cppIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetPrimaryDashboardDevice();
}

void cppIVROverlay_IVROverlay_018_ShowKeyboard( struct cppIVROverlay_IVROverlay_018_ShowKeyboard_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)params->eInputMode, (vr::EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32_t)params->unCharMax, (const char *)params->pchExistingText, (bool)params->bUseMinimalMode, (uint64_t)params->uUserValue);
}

void cppIVROverlay_IVROverlay_018_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_018_ShowKeyboardForOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowKeyboardForOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EGamepadTextInputMode)params->eInputMode, (vr::EGamepadTextInputLineMode)params->eLineInputMode, (const char *)params->pchDescription, (uint32_t)params->unCharMax, (const char *)params->pchExistingText, (bool)params->bUseMinimalMode, (uint64_t)params->uUserValue);
}

void cppIVROverlay_IVROverlay_018_GetKeyboardText( struct cppIVROverlay_IVROverlay_018_GetKeyboardText_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetKeyboardText((char *)params->pchText, (uint32_t)params->cchText);
}

void cppIVROverlay_IVROverlay_018_HideKeyboard( struct cppIVROverlay_IVROverlay_018_HideKeyboard_params *params )
{
    ((IVROverlay*)params->linux_side)->HideKeyboard();
}

void cppIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute_params *params )
{
    ((IVROverlay*)params->linux_side)->SetKeyboardTransformAbsolute((vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToKeyboardTransform);
}

void cppIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay_params *params )
{
    ((IVROverlay*)params->linux_side)->SetKeyboardPositionForOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdRect2_t)params->avoidRect);
}

void cppIVROverlay_IVROverlay_018_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_018_SetOverlayIntersectionMask_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayIntersectionMask((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayIntersectionMaskPrimitive_t *)params->pMaskPrimitives, (uint32_t)params->unNumMaskPrimitives, (uint32_t)params->unPrimitiveSize);
}

void cppIVROverlay_IVROverlay_018_GetOverlayFlags( struct cppIVROverlay_IVROverlay_018_GetOverlayFlags_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayFlags((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->pFlags);
}

void cppIVROverlay_IVROverlay_018_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_018_ShowMessageOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowMessageOverlay((const char *)params->pchText, (const char *)params->pchCaption, (const char *)params->pchButton0Text, (const char *)params->pchButton1Text, (const char *)params->pchButton2Text, (const char *)params->pchButton3Text);
}

void cppIVROverlay_IVROverlay_018_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_018_CloseMessageOverlay_params *params )
{
    ((IVROverlay*)params->linux_side)->CloseMessageOverlay();
}

#ifdef __cplusplus
}
#endif
