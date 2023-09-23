#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.6/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_014.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVROverlayError cppIVROverlay_IVROverlay_014_FindOverlay(void *linux_side, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->FindOverlay((const char *)pchOverlayKey, (vr::VROverlayHandle_t *)pOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_CreateOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->CreateOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_DestroyOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->DestroyOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetHighQualityOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::VROverlayHandle_t cppIVROverlay_IVROverlay_014_GetHighQualityOverlay(void *linux_side)
{
    vr::VROverlayHandle_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetHighQualityOverlay();
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_014_GetOverlayKey(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayKey((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_014_GetOverlayName(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayName((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayImageData(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unBufferSize, (uint32_t *)punWidth, (uint32_t *)punHeight);
    return _ret;
}

const char * cppIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum(void *linux_side, EVROverlayError error)
{
    const char * _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayErrorNameFromEnum((vr::EVROverlayError)error);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayRenderingPid(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayRenderingPid((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unPID);
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_014_GetOverlayRenderingPid(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayRenderingPid((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool)bEnabled);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool *)pbEnabled);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float)fRed, (float)fGreen, (float)fBlue);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfRed, (float *)pfGreen, (float *)pfBlue);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float)fAlpha);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfAlpha);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayTexelAspect(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTexelAspect((vr::VROverlayHandle_t)ulOverlayHandle, (float)fTexelAspect);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayTexelAspect(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTexelAspect((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfTexelAspect);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlaySortOrder(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlaySortOrder((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unSortOrder);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlaySortOrder(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlaySortOrder((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punSortOrder);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fWidthInMeters);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfWidthInMeters);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fMinDistanceInMeters, (float)fMaxDistanceInMeters);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfMinDistanceInMeters, (float *)pfMaxDistanceInMeters);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace)eTextureColorSpace);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace *)peTextureColorSpace);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VRTextureBounds_t *)pOverlayTextureBounds);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VRTextureBounds_t *)pOverlayTextureBounds);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayTransformType(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayTransformType *)peTransformType);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin *)peTrackingOrigin, (vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unTrackedDevice, (const vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punTrackedDevice, (vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unDeviceIndex, (const char *)pchComponentName);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punDeviceIndex, (char *)pchComponentName, (uint32_t)unComponentNameSize);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_ShowOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_HideOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->HideOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_014_IsOverlayVisible(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetTransformForOverlayCoordinates((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (vr::HmdVector2_t)coordinatesInOverlay, (vr::HmdMatrix34_t *)pmatTransform);
    return _ret;
}

bool cppIVROverlay_IVROverlay_014_PollNextOverlayEvent(void *linux_side, VROverlayHandle_t ulOverlayHandle, winVREvent_t_106 *pEvent, uint32_t uncbVREvent)
{
    bool _ret;
    VREvent_t lin;
    if(pEvent)
        struct_VREvent_t_106_win_to_lin(pEvent, &lin);
    uint32_t lin_uncbVREvent = uncbVREvent ? sizeof(lin) : 0;
    _ret = ((IVROverlay*)linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)ulOverlayHandle, pEvent ? &lin : nullptr, lin_uncbVREvent);
    if(pEvent)
        struct_VREvent_t_106_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod *)peInputMethod);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod)eInputMethod);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdVector2_t *)pvecMouseScale);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::HmdVector2_t *)pvecMouseScale);
    return _ret;
}

bool cppIVROverlay_IVROverlay_014_ComputeOverlayIntersection(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)pParams, (vr::VROverlayIntersectionResults_t *)pResults);
    return _ret;
}

bool cppIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->HandleControllerOverlayInteractionAsMouse((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex);
    return _ret;
}

bool cppIVROverlay_IVROverlay_014_IsHoverTargetOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsHoverTargetOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::VROverlayHandle_t cppIVROverlay_IVROverlay_014_GetGamepadFocusOverlay(void *linux_side)
{
    vr::VROverlayHandle_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetGamepadFocusOverlay();
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetGamepadFocusOverlay(void *linux_side, VROverlayHandle_t ulNewFocusOverlay)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetGamepadFocusOverlay((vr::VROverlayHandle_t)ulNewFocusOverlay);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayNeighbor(void *linux_side, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayNeighbor((vr::EOverlayDirection)eDirection, (vr::VROverlayHandle_t)ulFrom, (vr::VROverlayHandle_t)ulTo);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor(void *linux_side, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->MoveGamepadFocusToNeighbor((vr::EOverlayDirection)eDirection, (vr::VROverlayHandle_t)ulFrom);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::Texture_t *)pTexture);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_ClearOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayRaw(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unWidth, (uint32_t)unHeight, (uint32_t)unDepth);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayFromFile(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchFilePath);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (void **)pNativeTextureHandle, (void *)pNativeTextureRef, (uint32_t *)pWidth, (uint32_t *)pHeight, (uint32_t *)pNativeFormat, (vr::ETextureType *)pAPIType, (vr::EColorSpace *)pColorSpace, (vr::VRTextureBounds_t *)pTextureBounds);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ReleaseNativeOverlayHandle((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pNativeTextureHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayTextureSize(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayTextureSize((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)pWidth, (uint32_t *)pHeight);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_CreateDashboardOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->CreateDashboardOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pMainHandle, (vr::VROverlayHandle_t *)pThumbnailHandle);
    return _ret;
}

bool cppIVROverlay_IVROverlay_014_IsDashboardVisible(void *linux_side)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsDashboardVisible();
    return _ret;
}

bool cppIVROverlay_IVROverlay_014_IsActiveDashboardOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    bool _ret;
    _ret = ((IVROverlay*)linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unProcessId);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punProcessId);
    return _ret;
}

void cppIVROverlay_IVROverlay_014_ShowDashboard(void *linux_side, const char *pchOverlayToShow)
{
    ((IVROverlay*)linux_side)->ShowDashboard((const char *)pchOverlayToShow);
}

vr::TrackedDeviceIndex_t cppIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice(void *linux_side)
{
    vr::TrackedDeviceIndex_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetPrimaryDashboardDevice();
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_ShowKeyboard(void *linux_side, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (bool)bUseMinimalMode, (uint64_t)uUserValue);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_ShowKeyboardForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->ShowKeyboardForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (bool)bUseMinimalMode, (uint64_t)uUserValue);
    return _ret;
}

uint32_t cppIVROverlay_IVROverlay_014_GetKeyboardText(void *linux_side, char *pchText, uint32_t cchText)
{
    uint32_t _ret;
    _ret = ((IVROverlay*)linux_side)->GetKeyboardText((char *)pchText, (uint32_t)cchText);
    return _ret;
}

void cppIVROverlay_IVROverlay_014_HideKeyboard(void *linux_side)
{
    ((IVROverlay*)linux_side)->HideKeyboard();
}

void cppIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute(void *linux_side, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    ((IVROverlay*)linux_side)->SetKeyboardTransformAbsolute((vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToKeyboardTransform);
}

void cppIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    ((IVROverlay*)linux_side)->SetKeyboardPositionForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdRect2_t)avoidRect);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_SetOverlayIntersectionMask(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->SetOverlayIntersectionMask((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayIntersectionMaskPrimitive_t *)pMaskPrimitives, (uint32_t)unNumMaskPrimitives, (uint32_t)unPrimitiveSize);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_014_GetOverlayFlags(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    vr::EVROverlayError _ret;
    _ret = ((IVROverlay*)linux_side)->GetOverlayFlags((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)pFlags);
    return _ret;
}

vr::VRMessageOverlayResponse cppIVROverlay_IVROverlay_014_ShowMessageOverlay(void *linux_side, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    vr::VRMessageOverlayResponse _ret;
    _ret = ((IVROverlay*)linux_side)->ShowMessageOverlay((const char *)pchText, (const char *)pchCaption, (const char *)pchButton0Text, (const char *)pchButton1Text, (const char *)pchButton2Text, (const char *)pchButton3Text);
    return _ret;
}

#ifdef __cplusplus
}
#endif
