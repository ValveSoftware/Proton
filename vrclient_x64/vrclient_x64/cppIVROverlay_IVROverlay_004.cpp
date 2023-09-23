#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.8/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_004.h"
#ifdef __cplusplus
extern "C" {
#endif
VROverlayError cppIVROverlay_IVROverlay_004_FindOverlay(void *linux_side, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->FindOverlay((const char *)pchOverlayKey, (vr::VROverlayHandle_t *)pOverlayHandle);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_CreateOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->CreateOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pOverlayHandle);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_DestroyOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->DestroyOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetHighQualityOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

VROverlayHandle_t cppIVROverlay_IVROverlay_004_GetHighQualityOverlay(void *linux_side)
{
    VROverlayHandle_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetHighQualityOverlay();
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_004_GetOverlayKey(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, VROverlayError *pError)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayKey((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::VROverlayError *)pError);
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_004_GetOverlayName(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, VROverlayError *pError)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayName((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::VROverlayError *)pError);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayImageData(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unBufferSize, (uint32_t *)punWidth, (uint32_t *)punHeight);
    return _ret;
}

const char * cppIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum(void *linux_side, VROverlayError error)
{
    const char *_ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayErrorNameFromEnum((vr::VROverlayError)error);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool)bEnabled);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool *)pbEnabled);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float)fRed, (float)fGreen, (float)fBlue);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfRed, (float *)pfGreen, (float *)pfBlue);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float)fAlpha);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfAlpha);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayGamma(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayGamma((vr::VROverlayHandle_t)ulOverlayHandle, (float)fGamma);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayGamma(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfGamma)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayGamma((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfGamma);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fWidthInMeters);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfWidthInMeters);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fMinDistanceInMeters, (float)fMaxDistanceInMeters);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfMinDistanceInMeters, (float *)pfMaxDistanceInMeters);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, const VRTextureBounds_t *pOverlayTextureBounds)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VRTextureBounds_t *)pOverlayTextureBounds);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VRTextureBounds_t *)pOverlayTextureBounds);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayTransformType(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayTransformType *)peTransformType);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackingUniverseOrigin *)peTrackingOrigin, (vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unTrackedDevice, (const vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punTrackedDevice, (vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_ShowOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_HideOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->HideOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_004_IsOverlayVisible(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_004_PollNextOverlayEvent(void *linux_side, VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VREvent_t *)pEvent);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod *)peInputMethod);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod)eInputMethod);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdVector2_t *)pvecMouseScale);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, const HmdVector2_t *pvecMouseScale)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::HmdVector2_t *)pvecMouseScale);
    return _ret;
}

bool cppIVROverlay_IVROverlay_004_ComputeOverlayIntersection(void *linux_side, VROverlayHandle_t ulOverlayHandle, const VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)pParams, (vr::VROverlayIntersectionResults_t *)pResults);
    return _ret;
}

bool cppIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->HandleControllerOverlayInteractionAsMouse((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void *pTexture)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (vr::GraphicsAPIConvention)eTextureType, (void *)pTexture);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_ClearOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayRaw(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unWidth, (uint32_t)unHeight, (uint32_t)unDepth);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetOverlayFromFile(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchFilePath);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_CreateDashboardOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->CreateDashboardOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pMainHandle, (vr::VROverlayHandle_t *)pThumbnailHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_004_IsDashboardVisible(void *linux_side)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsDashboardVisible();
    return _ret;
}

bool cppIVROverlay_IVROverlay_004_IsActiveDashboardOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unProcessId);
    return _ret;
}

VROverlayError cppIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    VROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punProcessId);
    return _ret;
}

void cppIVROverlay_IVROverlay_004_ShowDashboard(void *linux_side, const char *pchOverlayToShow)
{
    ((IVROverlay*)linux_side)->ShowDashboard((const char *)pchOverlayToShow);
}

#ifdef __cplusplus
}
#endif
