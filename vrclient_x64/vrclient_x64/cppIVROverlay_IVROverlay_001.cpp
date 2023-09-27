#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_0.9.2/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVROverlay_IVROverlay_001_FindOverlay( struct cppIVROverlay_IVROverlay_001_FindOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->FindOverlay((const char *)params->pchOverlayKey, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_001_CreateOverlay( struct cppIVROverlay_IVROverlay_001_CreateOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayFriendlyName, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_001_DestroyOverlay( struct cppIVROverlay_IVROverlay_001_DestroyOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->DestroyOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_001_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_001_SetHighQualityOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_001_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_001_GetHighQualityOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetHighQualityOverlay();
}

void cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayErrorNameFromEnum((vr::VROverlayError)params->error);
}

void cppIVROverlay_IVROverlay_001_SetOverlayFlag( struct cppIVROverlay_IVROverlay_001_SetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool)params->bEnabled);
}

void cppIVROverlay_IVROverlay_001_GetOverlayFlag( struct cppIVROverlay_IVROverlay_001_GetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool *)params->pbEnabled);
}

void cppIVROverlay_IVROverlay_001_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_001_SetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fAlpha);
}

void cppIVROverlay_IVROverlay_001_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_001_GetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfAlpha);
}

void cppIVROverlay_IVROverlay_001_SetOverlayGamma( struct cppIVROverlay_IVROverlay_001_SetOverlayGamma_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayGamma((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fGamma);
}

void cppIVROverlay_IVROverlay_001_GetOverlayGamma( struct cppIVROverlay_IVROverlay_001_GetOverlayGamma_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayGamma((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfGamma);
}

void cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fWidthInMeters);
}

void cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfWidthInMeters);
}

void cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_001_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformType_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayTransformType *)params->peTransformType);
}

void cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackingUniverseOrigin *)params->peTrackingOrigin, (vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unTrackedDevice, (const vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t *)params->punTrackedDevice, (vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_001_GetOverlayVisibility( struct cppIVROverlay_IVROverlay_001_GetOverlayVisibility_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayVisibility((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayVisibility *)params->peOverlayVisibility);
}

void cppIVROverlay_IVROverlay_001_SetOverlayVisibility( struct cppIVROverlay_IVROverlay_001_SetOverlayVisibility_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayVisibility((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayVisibility)params->eOverlayVisibility);
}

void cppIVROverlay_IVROverlay_001_ShowOverlay( struct cppIVROverlay_IVROverlay_001_ShowOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_001_HideOverlay( struct cppIVROverlay_IVROverlay_001_HideOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->HideOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_001_IsOverlayVisible( struct cppIVROverlay_IVROverlay_001_IsOverlayVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_001_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_001_PollNextOverlayEvent_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VREvent_t *)params->pEvent);
}

void cppIVROverlay_IVROverlay_001_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_001_GetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod *)params->peInputMethod);
}

void cppIVROverlay_IVROverlay_001_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_001_SetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod)params->eInputMethod);
}

void cppIVROverlay_IVROverlay_001_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_001_GetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_001_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_001_SetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)params->pParams, (vr::VROverlayIntersectionResults_t *)params->pResults);
}

void cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->HandleControllerOverlayInteractionAsMouse((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex);
}

void cppIVROverlay_IVROverlay_001_SetOverlayTexture( struct cppIVROverlay_IVROverlay_001_SetOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pTexture);
}

void cppIVROverlay_IVROverlay_001_SetOverlayRaw( struct cppIVROverlay_IVROverlay_001_SetOverlayRaw_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unWidth, (uint32_t)params->unHeight, (uint32_t)params->unDepth);
}

void cppIVROverlay_IVROverlay_001_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_001_SetOverlayFromFile_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)params->ulOverlayHandle, (const char *)params->pchFilePath);
}

void cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible( struct cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsSystemOverlayVisible();
}

void cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay( struct cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsActiveSystemOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess( struct cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetSystemOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unProcessId);
}

void cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess( struct cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetSystemOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->punProcessId);
}

#ifdef __cplusplus
}
#endif
