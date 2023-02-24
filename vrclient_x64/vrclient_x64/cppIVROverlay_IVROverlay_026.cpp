#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.23.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_026.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVROverlayError cppIVROverlay_IVROverlay_026_FindOverlay(void *linux_side, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    return ((IVROverlay*)linux_side)->FindOverlay((const char *)pchOverlayKey, (vr::VROverlayHandle_t *)pOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_CreateOverlay(void *linux_side, const char * pchOverlayKey, const char * pchOverlayName, VROverlayHandle_t * pOverlayHandle)
{
    return ((IVROverlay*)linux_side)->CreateOverlay((const char *)pchOverlayKey, (const char *)pchOverlayName, (vr::VROverlayHandle_t *)pOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_DestroyOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->DestroyOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

uint32_t cppIVROverlay_IVROverlay_026_GetOverlayKey(void *linux_side, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    return ((IVROverlay*)linux_side)->GetOverlayKey((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
}

uint32_t cppIVROverlay_IVROverlay_026_GetOverlayName(void *linux_side, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    return ((IVROverlay*)linux_side)->GetOverlayName((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayName(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char * pchName)
{
    return ((IVROverlay*)linux_side)->SetOverlayName((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchName);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayImageData(void *linux_side, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    return ((IVROverlay*)linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unBufferSize, (uint32_t *)punWidth, (uint32_t *)punHeight);
}

const char * cppIVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum(void *linux_side, EVROverlayError error)
{
    return ((IVROverlay*)linux_side)->GetOverlayErrorNameFromEnum((vr::EVROverlayError)error);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayRenderingPid(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    return ((IVROverlay*)linux_side)->SetOverlayRenderingPid((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unPID);
}

uint32_t cppIVROverlay_IVROverlay_026_GetOverlayRenderingPid(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->GetOverlayRenderingPid((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    return ((IVROverlay*)linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool)bEnabled);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    return ((IVROverlay*)linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool *)pbEnabled);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayFlags(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    return ((IVROverlay*)linux_side)->GetOverlayFlags((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)pFlags);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    return ((IVROverlay*)linux_side)->SetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float)fRed, (float)fGreen, (float)fBlue);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    return ((IVROverlay*)linux_side)->GetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfRed, (float *)pfGreen, (float *)pfBlue);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    return ((IVROverlay*)linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float)fAlpha);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    return ((IVROverlay*)linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfAlpha);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTexelAspect(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    return ((IVROverlay*)linux_side)->SetOverlayTexelAspect((vr::VROverlayHandle_t)ulOverlayHandle, (float)fTexelAspect);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTexelAspect(void *linux_side, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    return ((IVROverlay*)linux_side)->GetOverlayTexelAspect((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfTexelAspect);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlaySortOrder(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    return ((IVROverlay*)linux_side)->SetOverlaySortOrder((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unSortOrder);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlaySortOrder(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    return ((IVROverlay*)linux_side)->GetOverlaySortOrder((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punSortOrder);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    return ((IVROverlay*)linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fWidthInMeters);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    return ((IVROverlay*)linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfWidthInMeters);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayCurvature(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fCurvature)
{
    return ((IVROverlay*)linux_side)->SetOverlayCurvature((vr::VROverlayHandle_t)ulOverlayHandle, (float)fCurvature);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayCurvature(void *linux_side, VROverlayHandle_t ulOverlayHandle, float * pfCurvature)
{
    return ((IVROverlay*)linux_side)->GetOverlayCurvature((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfCurvature);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayPreCurvePitch(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fRadians)
{
    return ((IVROverlay*)linux_side)->SetOverlayPreCurvePitch((vr::VROverlayHandle_t)ulOverlayHandle, (float)fRadians);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayPreCurvePitch(void *linux_side, VROverlayHandle_t ulOverlayHandle, float * pfRadians)
{
    return ((IVROverlay*)linux_side)->GetOverlayPreCurvePitch((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfRadians);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    return ((IVROverlay*)linux_side)->SetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace)eTextureColorSpace);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    return ((IVROverlay*)linux_side)->GetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace *)peTextureColorSpace);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    return ((IVROverlay*)linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VRTextureBounds_t *)pOverlayTextureBounds);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    return ((IVROverlay*)linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VRTextureBounds_t *)pOverlayTextureBounds);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformType(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayTransformType *)peTransformType);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin *)peTrackingOrigin, (vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unTrackedDevice, (const vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punTrackedDevice, (vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unDeviceIndex, (const char *)pchComponentName);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punDeviceIndex, (char *)pchComponentName, (uint32_t)unComponentNameSize);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformOverlayRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayHandle_t *)ulOverlayHandleParent, (vr::HmdMatrix34_t *)pmatParentOverlayToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformOverlayRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayHandle_t)ulOverlayHandleParent, (const vr::HmdMatrix34_t *)pmatParentOverlayToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformCursor(void *linux_side, VROverlayHandle_t ulCursorOverlayHandle, HmdVector2_t * pvHotspot)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformCursor((vr::VROverlayHandle_t)ulCursorOverlayHandle, (const vr::HmdVector2_t *)pvHotspot);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformCursor(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvHotspot)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformCursor((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdVector2_t *)pvHotspot);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformProjection(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform, VROverlayProjection_t * pProjection, EVREye eEye)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformProjection((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform, (const vr::VROverlayProjection_t *)pProjection, (vr::EVREye)eEye);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_ShowOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->ShowOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_HideOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->HideOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

bool cppIVROverlay_IVROverlay_026_IsOverlayVisible(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    return ((IVROverlay*)linux_side)->GetTransformForOverlayCoordinates((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (vr::HmdVector2_t)coordinatesInOverlay, (vr::HmdMatrix34_t *)pmatTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_WaitFrameSync(void *linux_side, uint32_t nTimeoutMs)
{
    return ((IVROverlay*)linux_side)->WaitFrameSync((uint32_t)nTimeoutMs);
}

bool cppIVROverlay_IVROverlay_026_PollNextOverlayEvent(void *linux_side, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1237 * pEvent, uint32_t uncbVREvent)
{
    VREvent_t lin;
    bool _ret;
    if(pEvent)
        struct_VREvent_t_1237_win_to_lin(pEvent, &lin);
    _ret = ((IVROverlay*)linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)ulOverlayHandle, pEvent ? &lin : nullptr, uncbVREvent ? sizeof(lin) : 0);
    if(pEvent)
        struct_VREvent_t_1237_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    return ((IVROverlay*)linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod *)peInputMethod);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    return ((IVROverlay*)linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod)eInputMethod);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    return ((IVROverlay*)linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdVector2_t *)pvecMouseScale);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    return ((IVROverlay*)linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::HmdVector2_t *)pvecMouseScale);
}

bool cppIVROverlay_IVROverlay_026_ComputeOverlayIntersection(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    return ((IVROverlay*)linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)pParams, (vr::VROverlayIntersectionResults_t *)pResults);
}

bool cppIVROverlay_IVROverlay_026_IsHoverTargetOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->IsHoverTargetOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayIntersectionMask(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    return ((IVROverlay*)linux_side)->SetOverlayIntersectionMask((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayIntersectionMaskPrimitive_t *)pMaskPrimitives, (uint32_t)unNumMaskPrimitives, (uint32_t)unPrimitiveSize);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    return ((IVROverlay*)linux_side)->TriggerLaserMouseHapticVibration((vr::VROverlayHandle_t)ulOverlayHandle, (float)fDurationSeconds, (float)fFrequency, (float)fAmplitude);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayCursor(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulCursorHandle)
{
    return ((IVROverlay*)linux_side)->SetOverlayCursor((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayHandle_t)ulCursorHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvCursor)
{
    return ((IVROverlay*)linux_side)->SetOverlayCursorPositionOverride((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::HmdVector2_t *)pvCursor);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->ClearOverlayCursorPositionOverride((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    return ((IVROverlay*)linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::Texture_t *)pTexture);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_ClearOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayRaw(void *linux_side, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unBytesPerPixel)
{
    return ((IVROverlay*)linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unWidth, (uint32_t)unHeight, (uint32_t)unBytesPerPixel);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayFromFile(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    return ((IVROverlay*)linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchFilePath);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    return ((IVROverlay*)linux_side)->GetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (void **)pNativeTextureHandle, (void *)pNativeTextureRef, (uint32_t *)pWidth, (uint32_t *)pHeight, (uint32_t *)pNativeFormat, (vr::ETextureType *)pAPIType, (vr::EColorSpace *)pColorSpace, (vr::VRTextureBounds_t *)pTextureBounds);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle(void *linux_side, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    return ((IVROverlay*)linux_side)->ReleaseNativeOverlayHandle((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pNativeTextureHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTextureSize(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    return ((IVROverlay*)linux_side)->GetOverlayTextureSize((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)pWidth, (uint32_t *)pHeight);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_CreateDashboardOverlay(void *linux_side, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    return ((IVROverlay*)linux_side)->CreateDashboardOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pMainHandle, (vr::VROverlayHandle_t *)pThumbnailHandle);
}

bool cppIVROverlay_IVROverlay_026_IsDashboardVisible(void *linux_side)
{
    return ((IVROverlay*)linux_side)->IsDashboardVisible();
}

bool cppIVROverlay_IVROverlay_026_IsActiveDashboardOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    return ((IVROverlay*)linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unProcessId);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    return ((IVROverlay*)linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punProcessId);
}

void cppIVROverlay_IVROverlay_026_ShowDashboard(void *linux_side, const char * pchOverlayToShow)
{
    ((IVROverlay*)linux_side)->ShowDashboard((const char *)pchOverlayToShow);
}

vr::TrackedDeviceIndex_t cppIVROverlay_IVROverlay_026_GetPrimaryDashboardDevice(void *linux_side)
{
    return ((IVROverlay*)linux_side)->GetPrimaryDashboardDevice();
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_ShowKeyboard(void *linux_side, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, uint64_t uUserValue)
{
    return ((IVROverlay*)linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (uint32_t)unFlags, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (uint64_t)uUserValue);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_026_ShowKeyboardForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, uint64_t uUserValue)
{
    return ((IVROverlay*)linux_side)->ShowKeyboardForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (uint32_t)unFlags, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (uint64_t)uUserValue);
}

uint32_t cppIVROverlay_IVROverlay_026_GetKeyboardText(void *linux_side, char * pchText, uint32_t cchText)
{
    return ((IVROverlay*)linux_side)->GetKeyboardText((char *)pchText, (uint32_t)cchText);
}

void cppIVROverlay_IVROverlay_026_HideKeyboard(void *linux_side)
{
    ((IVROverlay*)linux_side)->HideKeyboard();
}

void cppIVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute(void *linux_side, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    ((IVROverlay*)linux_side)->SetKeyboardTransformAbsolute((vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToKeyboardTransform);
}

void cppIVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    ((IVROverlay*)linux_side)->SetKeyboardPositionForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdRect2_t)avoidRect);
}

vr::VRMessageOverlayResponse cppIVROverlay_IVROverlay_026_ShowMessageOverlay(void *linux_side, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    return ((IVROverlay*)linux_side)->ShowMessageOverlay((const char *)pchText, (const char *)pchCaption, (const char *)pchButton0Text, (const char *)pchButton1Text, (const char *)pchButton2Text, (const char *)pchButton3Text);
}

void cppIVROverlay_IVROverlay_026_CloseMessageOverlay(void *linux_side)
{
    ((IVROverlay*)linux_side)->CloseMessageOverlay();
}

#ifdef __cplusplus
}
#endif
