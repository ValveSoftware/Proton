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
vr::VROverlayError cppIVROverlay_IVROverlay_001_FindOverlay(void *linux_side, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->FindOverlay((const char *)pchOverlayKey, (vr::VROverlayHandle_t *)pOverlayHandle);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_CreateOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->CreateOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pOverlayHandle);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_DestroyOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->DestroyOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetHighQualityOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::VROverlayHandle_t cppIVROverlay_IVROverlay_001_GetHighQualityOverlay(void *linux_side)
{
    vr::VROverlayHandle_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetHighQualityOverlay();
    return _ret;
}

const char * cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum(void *linux_side, VROverlayError error)
{
    const char * _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayErrorNameFromEnum((vr::VROverlayError)error);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool)bEnabled);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool *)pbEnabled);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float)fAlpha);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfAlpha);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayGamma(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayGamma((vr::VROverlayHandle_t)ulOverlayHandle, (float)fGamma);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayGamma(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfGamma)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayGamma((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfGamma);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fWidthInMeters);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfWidthInMeters);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, const VRTextureBounds_t *pOverlayTextureBounds)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VRTextureBounds_t *)pOverlayTextureBounds);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VRTextureBounds_t *)pOverlayTextureBounds);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayTransformType(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayTransformType *)peTransformType);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackingUniverseOrigin *)peTrackingOrigin, (vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unTrackedDevice, (const vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punTrackedDevice, (vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayVisibility(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayVisibility *peOverlayVisibility)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayVisibility((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayVisibility *)peOverlayVisibility);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayVisibility(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayVisibility eOverlayVisibility)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayVisibility((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayVisibility)eOverlayVisibility);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_ShowOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_HideOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->HideOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_001_IsOverlayVisible(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_001_PollNextOverlayEvent(void *linux_side, VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VREvent_t *)pEvent);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod *)peInputMethod);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod)eInputMethod);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdVector2_t *)pvecMouseScale);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, const HmdVector2_t *pvecMouseScale)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::HmdVector2_t *)pvecMouseScale);
    return _ret;
}

bool cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection(void *linux_side, VROverlayHandle_t ulOverlayHandle, const VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)pParams, (vr::VROverlayIntersectionResults_t *)pResults);
    return _ret;
}

bool cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->HandleControllerOverlayInteractionAsMouse((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pTexture)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pTexture);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayRaw(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unWidth, (uint32_t)unHeight, (uint32_t)unDepth);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetOverlayFromFile(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchFilePath);
    return _ret;
}

bool cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible(void *linux_side)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsSystemOverlayVisible();
    return _ret;
}

bool cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsActiveSystemOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetSystemOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unProcessId);
    return _ret;
}

vr::VROverlayError cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    vr::VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetSystemOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punProcessId);
    return _ret;
}

#ifdef __cplusplus
}
#endif
