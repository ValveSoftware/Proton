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
vr::EVROverlayError cppIVROverlay_IVROverlay_008_FindOverlay(void *linux_side, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->FindOverlay((const char *)pchOverlayKey, (vr::VROverlayHandle_t *)pOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_CreateOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->CreateOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_DestroyOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->DestroyOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetHighQualityOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::VROverlayHandle_t cppIVROverlay_IVROverlay_008_GetHighQualityOverlay(void *linux_side)
{
    vr::VROverlayHandle_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetHighQualityOverlay();
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_008_GetOverlayKey(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayKey((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_008_GetOverlayName(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayName((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayImageData(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unBufferSize, (uint32_t *)punWidth, (uint32_t *)punHeight);
    return _ret;
}

const char * cppIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum(void *linux_side, EVROverlayError error)
{
    const char * _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayErrorNameFromEnum((vr::EVROverlayError)error);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool)bEnabled);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool *)pbEnabled);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float)fRed, (float)fGreen, (float)fBlue);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfRed, (float *)pfGreen, (float *)pfBlue);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float)fAlpha);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfAlpha);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fWidthInMeters);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfWidthInMeters);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fMinDistanceInMeters, (float)fMaxDistanceInMeters);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfMinDistanceInMeters, (float *)pfMaxDistanceInMeters);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace)eTextureColorSpace);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace *)peTextureColorSpace);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VRTextureBounds_t *)pOverlayTextureBounds);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VRTextureBounds_t *)pOverlayTextureBounds);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayTransformType(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayTransformType *)peTransformType);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin *)peTrackingOrigin, (vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unTrackedDevice, (const vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punTrackedDevice, (vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_ShowOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_HideOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->HideOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_008_IsOverlayVisible(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetTransformForOverlayCoordinates((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (vr::HmdVector2_t)coordinatesInOverlay, (vr::HmdMatrix34_t *)pmatTransform);
    return _ret;
}

bool cppIVROverlay_IVROverlay_008_PollNextOverlayEvent(void *linux_side, VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VREvent_t *)pEvent);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod *)peInputMethod);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod)eInputMethod);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdVector2_t *)pvecMouseScale);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::HmdVector2_t *)pvecMouseScale);
    return _ret;
}

bool cppIVROverlay_IVROverlay_008_ComputeOverlayIntersection(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)pParams, (vr::VROverlayIntersectionResults_t *)pResults);
    return _ret;
}

bool cppIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->HandleControllerOverlayInteractionAsMouse((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex);
    return _ret;
}

bool cppIVROverlay_IVROverlay_008_IsHoverTargetOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsHoverTargetOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::VROverlayHandle_t cppIVROverlay_IVROverlay_008_GetGamepadFocusOverlay(void *linux_side)
{
    vr::VROverlayHandle_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetGamepadFocusOverlay();
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetGamepadFocusOverlay(void *linux_side, VROverlayHandle_t ulNewFocusOverlay)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetGamepadFocusOverlay((vr::VROverlayHandle_t)ulNewFocusOverlay);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayNeighbor(void *linux_side, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayNeighbor((vr::EOverlayDirection)eDirection, (vr::VROverlayHandle_t)ulFrom, (vr::VROverlayHandle_t)ulTo);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor(void *linux_side, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->MoveGamepadFocusToNeighbor((vr::EOverlayDirection)eDirection, (vr::VROverlayHandle_t)ulFrom);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::Texture_t *)pTexture);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_ClearOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayRaw(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unWidth, (uint32_t)unHeight, (uint32_t)unDepth);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetOverlayFromFile(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchFilePath);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_CreateDashboardOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->CreateDashboardOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pMainHandle, (vr::VROverlayHandle_t *)pThumbnailHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_008_IsDashboardVisible(void *linux_side)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsDashboardVisible();
    return _ret;
}

bool cppIVROverlay_IVROverlay_008_IsActiveDashboardOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unProcessId);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punProcessId);
    return _ret;
}

void cppIVROverlay_IVROverlay_008_ShowDashboard(void *linux_side, const char *pchOverlayToShow)
{
    ((IVROverlay*)linux_side)->ShowDashboard((const char *)pchOverlayToShow);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_ShowKeyboard(void *linux_side, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (bool)bUseMinimalMode, (uint64_t)uUserValue);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_008_ShowKeyboardForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowKeyboardForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (bool)bUseMinimalMode, (uint64_t)uUserValue);
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_008_GetKeyboardText(void *linux_side, char *pchText, uint32_t cchText)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetKeyboardText((char *)pchText, (uint32_t)cchText);
    return _ret;
}

void cppIVROverlay_IVROverlay_008_HideKeyboard(void *linux_side)
{
    ((IVROverlay*)linux_side)->HideKeyboard();
}

void cppIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute(void *linux_side, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    ((IVROverlay*)linux_side)->SetKeyboardTransformAbsolute((vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToKeyboardTransform);
}

void cppIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    ((IVROverlay*)linux_side)->SetKeyboardPositionForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdRect2_t)avoidRect);
}

#ifdef __cplusplus
}
#endif
