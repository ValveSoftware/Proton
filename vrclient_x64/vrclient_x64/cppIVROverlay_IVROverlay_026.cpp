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
EVROverlayError cppIVROverlay_IVROverlay_026_FindOverlay(void *linux_side, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->FindOverlay((const char *)pchOverlayKey, (vr::VROverlayHandle_t *)pOverlayHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_CreateOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->CreateOverlay((const char *)pchOverlayKey, (const char *)pchOverlayName, (vr::VROverlayHandle_t *)pOverlayHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_DestroyOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->DestroyOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_026_GetOverlayKey(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayKey((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_026_GetOverlayName(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayName((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayName(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayName((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchName);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayImageData(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unBufferSize, (uint32_t *)punWidth, (uint32_t *)punHeight);
    return _ret;
}

const char * cppIVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum(void *linux_side, EVROverlayError error)
{
    const char *_ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayErrorNameFromEnum((vr::EVROverlayError)error);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayRenderingPid(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayRenderingPid((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unPID);
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_026_GetOverlayRenderingPid(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayRenderingPid((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool)bEnabled);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool *)pbEnabled);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayFlags(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayFlags((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)pFlags);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float)fRed, (float)fGreen, (float)fBlue);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfRed, (float *)pfGreen, (float *)pfBlue);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float)fAlpha);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfAlpha);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTexelAspect(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTexelAspect((vr::VROverlayHandle_t)ulOverlayHandle, (float)fTexelAspect);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTexelAspect(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTexelAspect((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfTexelAspect);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlaySortOrder(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlaySortOrder((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unSortOrder);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlaySortOrder(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlaySortOrder((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punSortOrder);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fWidthInMeters);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfWidthInMeters);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayCurvature(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fCurvature)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayCurvature((vr::VROverlayHandle_t)ulOverlayHandle, (float)fCurvature);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayCurvature(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfCurvature)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayCurvature((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfCurvature);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayPreCurvePitch(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fRadians)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayPreCurvePitch((vr::VROverlayHandle_t)ulOverlayHandle, (float)fRadians);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayPreCurvePitch(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfRadians)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayPreCurvePitch((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfRadians);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace)eTextureColorSpace);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace *)peTextureColorSpace);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, const VRTextureBounds_t *pOverlayTextureBounds)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VRTextureBounds_t *)pOverlayTextureBounds);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VRTextureBounds_t *)pOverlayTextureBounds);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformType(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayTransformType *)peTransformType);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin *)peTrackingOrigin, (vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unTrackedDevice, (const vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punTrackedDevice, (vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unDeviceIndex, (const char *)pchComponentName);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punDeviceIndex, (char *)pchComponentName, (uint32_t)unComponentNameSize);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformOverlayRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayHandle_t *)ulOverlayHandleParent, (vr::HmdMatrix34_t *)pmatParentOverlayToOverlayTransform);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, const HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformOverlayRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayHandle_t)ulOverlayHandleParent, (const vr::HmdMatrix34_t *)pmatParentOverlayToOverlayTransform);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformCursor(void *linux_side, VROverlayHandle_t ulCursorOverlayHandle, const HmdVector2_t *pvHotspot)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformCursor((vr::VROverlayHandle_t)ulCursorOverlayHandle, (const vr::HmdVector2_t *)pvHotspot);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTransformCursor(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvHotspot)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformCursor((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdVector2_t *)pvHotspot);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTransformProjection(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform, const VROverlayProjection_t *pProjection, EVREye eEye)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformProjection((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform, (const vr::VROverlayProjection_t *)pProjection, (vr::EVREye)eEye);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_ShowOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_HideOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->HideOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_026_IsOverlayVisible(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetTransformForOverlayCoordinates((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (vr::HmdVector2_t)coordinatesInOverlay, (vr::HmdMatrix34_t *)pmatTransform);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_WaitFrameSync(void *linux_side, uint32_t nTimeoutMs)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->WaitFrameSync((uint32_t)nTimeoutMs);
    return _ret;
}

bool cppIVROverlay_IVROverlay_026_PollNextOverlayEvent(void *linux_side, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1237 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    VREvent_t lin;
    if (pEvent)
        struct_VREvent_t_1237_win_to_lin(pEvent, &lin);
    uint32_t lin_uncbVREvent = uncbVREvent ? sizeof(lin) : 0;
    _ret = ((IVROverlay*)linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)ulOverlayHandle, pEvent ? &lin : nullptr, lin_uncbVREvent);
    if (pEvent)
        struct_VREvent_t_1237_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod *)peInputMethod);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod)eInputMethod);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdVector2_t *)pvecMouseScale);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, const HmdVector2_t *pvecMouseScale)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::HmdVector2_t *)pvecMouseScale);
    return _ret;
}

bool cppIVROverlay_IVROverlay_026_ComputeOverlayIntersection(void *linux_side, VROverlayHandle_t ulOverlayHandle, const VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)pParams, (vr::VROverlayIntersectionResults_t *)pResults);
    return _ret;
}

bool cppIVROverlay_IVROverlay_026_IsHoverTargetOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsHoverTargetOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayIntersectionMask(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayIntersectionMask((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayIntersectionMaskPrimitive_t *)pMaskPrimitives, (uint32_t)unNumMaskPrimitives, (uint32_t)unPrimitiveSize);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->TriggerLaserMouseHapticVibration((vr::VROverlayHandle_t)ulOverlayHandle, (float)fDurationSeconds, (float)fFrequency, (float)fAmplitude);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayCursor(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulCursorHandle)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayCursor((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayHandle_t)ulCursorHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride(void *linux_side, VROverlayHandle_t ulOverlayHandle, const HmdVector2_t *pvCursor)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayCursorPositionOverride((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::HmdVector2_t *)pvCursor);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ClearOverlayCursorPositionOverride((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, const Texture_t *pTexture)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::Texture_t *)pTexture);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_ClearOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayRaw(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unBytesPerPixel)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unWidth, (uint32_t)unHeight, (uint32_t)unBytesPerPixel);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetOverlayFromFile(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchFilePath);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (void **)pNativeTextureHandle, (void *)pNativeTextureRef, (uint32_t *)pWidth, (uint32_t *)pHeight, (uint32_t *)pNativeFormat, (vr::ETextureType *)pAPIType, (vr::EColorSpace *)pColorSpace, (vr::VRTextureBounds_t *)pTextureBounds);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ReleaseNativeOverlayHandle((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pNativeTextureHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetOverlayTextureSize(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTextureSize((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)pWidth, (uint32_t *)pHeight);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_CreateDashboardOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->CreateDashboardOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pMainHandle, (vr::VROverlayHandle_t *)pThumbnailHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_026_IsDashboardVisible(void *linux_side)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsDashboardVisible();
    return _ret;
}

bool cppIVROverlay_IVROverlay_026_IsActiveDashboardOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unProcessId);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punProcessId);
    return _ret;
}

void cppIVROverlay_IVROverlay_026_ShowDashboard(void *linux_side, const char *pchOverlayToShow)
{
    ((IVROverlay*)linux_side)->ShowDashboard((const char *)pchOverlayToShow);
}

TrackedDeviceIndex_t cppIVROverlay_IVROverlay_026_GetPrimaryDashboardDevice(void *linux_side)
{
    TrackedDeviceIndex_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetPrimaryDashboardDevice();
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_ShowKeyboard(void *linux_side, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, uint64_t uUserValue)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (uint32_t)unFlags, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (uint64_t)uUserValue);
    return _ret;
}

EVROverlayError cppIVROverlay_IVROverlay_026_ShowKeyboardForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, uint64_t uUserValue)
{
    EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowKeyboardForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (uint32_t)unFlags, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (uint64_t)uUserValue);
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_026_GetKeyboardText(void *linux_side, char *pchText, uint32_t cchText)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetKeyboardText((char *)pchText, (uint32_t)cchText);
    return _ret;
}

void cppIVROverlay_IVROverlay_026_HideKeyboard(void *linux_side)
{
    ((IVROverlay*)linux_side)->HideKeyboard();
}

void cppIVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute(void *linux_side, ETrackingUniverseOrigin eTrackingOrigin, const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    ((IVROverlay*)linux_side)->SetKeyboardTransformAbsolute((vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToKeyboardTransform);
}

void cppIVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    ((IVROverlay*)linux_side)->SetKeyboardPositionForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdRect2_t)avoidRect);
}

VRMessageOverlayResponse cppIVROverlay_IVROverlay_026_ShowMessageOverlay(void *linux_side, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    VRMessageOverlayResponse _ret;
    _ret = ((IVROverlay*)linux_side)->ShowMessageOverlay((const char *)pchText, (const char *)pchCaption, (const char *)pchButton0Text, (const char *)pchButton1Text, (const char *)pchButton2Text, (const char *)pchButton3Text);
    return _ret;
}

void cppIVROverlay_IVROverlay_026_CloseMessageOverlay(void *linux_side)
{
    ((IVROverlay*)linux_side)->CloseMessageOverlay();
}

#ifdef __cplusplus
}
#endif
