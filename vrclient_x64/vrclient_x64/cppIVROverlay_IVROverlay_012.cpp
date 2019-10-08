#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.1/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_012.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVROverlayError cppIVROverlay_IVROverlay_012_FindOverlay(void *linux_side, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    return ((IVROverlay*)linux_side)->FindOverlay((const char *)pchOverlayKey, (vr::VROverlayHandle_t *)pOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_CreateOverlay(void *linux_side, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    return ((IVROverlay*)linux_side)->CreateOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_DestroyOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->DestroyOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetHighQualityOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::VROverlayHandle_t cppIVROverlay_IVROverlay_012_GetHighQualityOverlay(void *linux_side)
{
    return ((IVROverlay*)linux_side)->GetHighQualityOverlay();
}

uint32_t cppIVROverlay_IVROverlay_012_GetOverlayKey(void *linux_side, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    return ((IVROverlay*)linux_side)->GetOverlayKey((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
}

uint32_t cppIVROverlay_IVROverlay_012_GetOverlayName(void *linux_side, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    return ((IVROverlay*)linux_side)->GetOverlayName((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayImageData(void *linux_side, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    return ((IVROverlay*)linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unBufferSize, (uint32_t *)punWidth, (uint32_t *)punHeight);
}

const char * cppIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum(void *linux_side, EVROverlayError error)
{
    return ((IVROverlay*)linux_side)->GetOverlayErrorNameFromEnum((vr::EVROverlayError)error);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayRenderingPid(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    return ((IVROverlay*)linux_side)->SetOverlayRenderingPid((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unPID);
}

uint32_t cppIVROverlay_IVROverlay_012_GetOverlayRenderingPid(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->GetOverlayRenderingPid((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    return ((IVROverlay*)linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool)bEnabled);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    return ((IVROverlay*)linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool *)pbEnabled);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    return ((IVROverlay*)linux_side)->SetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float)fRed, (float)fGreen, (float)fBlue);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    return ((IVROverlay*)linux_side)->GetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfRed, (float *)pfGreen, (float *)pfBlue);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    return ((IVROverlay*)linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float)fAlpha);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    return ((IVROverlay*)linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfAlpha);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    return ((IVROverlay*)linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fWidthInMeters);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    return ((IVROverlay*)linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfWidthInMeters);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    return ((IVROverlay*)linux_side)->SetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fMinDistanceInMeters, (float)fMaxDistanceInMeters);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    return ((IVROverlay*)linux_side)->GetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfMinDistanceInMeters, (float *)pfMaxDistanceInMeters);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    return ((IVROverlay*)linux_side)->SetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace)eTextureColorSpace);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    return ((IVROverlay*)linux_side)->GetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace *)peTextureColorSpace);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    return ((IVROverlay*)linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VRTextureBounds_t *)pOverlayTextureBounds);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    return ((IVROverlay*)linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VRTextureBounds_t *)pOverlayTextureBounds);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTransformType(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayTransformType *)peTransformType);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin *)peTrackingOrigin, (vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unTrackedDevice, (const vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punTrackedDevice, (vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unDeviceIndex, (const char *)pchComponentName);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punDeviceIndex, (char *)pchComponentName, (uint32_t)unComponentNameSize);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_ShowOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->ShowOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_HideOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->HideOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

bool cppIVROverlay_IVROverlay_012_IsOverlayVisible(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    return ((IVROverlay*)linux_side)->GetTransformForOverlayCoordinates((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (vr::HmdVector2_t)coordinatesInOverlay, (vr::HmdMatrix34_t *)pmatTransform);
}

bool cppIVROverlay_IVROverlay_012_PollNextOverlayEvent(void *linux_side, VROverlayHandle_t ulOverlayHandle, winVREvent_t_101 * pEvent, uint32_t uncbVREvent)
{
    VREvent_t lin;
    bool _ret;
    if(pEvent)
        struct_VREvent_t_101_win_to_lin(pEvent, &lin);
    _ret = ((IVROverlay*)linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)ulOverlayHandle, pEvent ? &lin : nullptr, uncbVREvent ? sizeof(lin) : 0);
    if(pEvent)
        struct_VREvent_t_101_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    return ((IVROverlay*)linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod *)peInputMethod);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    return ((IVROverlay*)linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod)eInputMethod);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    return ((IVROverlay*)linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdVector2_t *)pvecMouseScale);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    return ((IVROverlay*)linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::HmdVector2_t *)pvecMouseScale);
}

bool cppIVROverlay_IVROverlay_012_ComputeOverlayIntersection(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    return ((IVROverlay*)linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)pParams, (vr::VROverlayIntersectionResults_t *)pResults);
}

bool cppIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    return ((IVROverlay*)linux_side)->HandleControllerOverlayInteractionAsMouse((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex);
}

bool cppIVROverlay_IVROverlay_012_IsHoverTargetOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->IsHoverTargetOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::VROverlayHandle_t cppIVROverlay_IVROverlay_012_GetGamepadFocusOverlay(void *linux_side)
{
    return ((IVROverlay*)linux_side)->GetGamepadFocusOverlay();
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetGamepadFocusOverlay(void *linux_side, VROverlayHandle_t ulNewFocusOverlay)
{
    return ((IVROverlay*)linux_side)->SetGamepadFocusOverlay((vr::VROverlayHandle_t)ulNewFocusOverlay);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayNeighbor(void *linux_side, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    return ((IVROverlay*)linux_side)->SetOverlayNeighbor((vr::EOverlayDirection)eDirection, (vr::VROverlayHandle_t)ulFrom, (vr::VROverlayHandle_t)ulTo);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor(void *linux_side, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    return ((IVROverlay*)linux_side)->MoveGamepadFocusToNeighbor((vr::EOverlayDirection)eDirection, (vr::VROverlayHandle_t)ulFrom);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    return ((IVROverlay*)linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::Texture_t *)pTexture);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_ClearOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayRaw(void *linux_side, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    return ((IVROverlay*)linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unWidth, (uint32_t)unHeight, (uint32_t)unDepth);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayFromFile(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    return ((IVROverlay*)linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchFilePath);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, EGraphicsAPIConvention * pAPI, EColorSpace * pColorSpace)
{
    return ((IVROverlay*)linux_side)->GetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (void **)pNativeTextureHandle, (void *)pNativeTextureRef, (uint32_t *)pWidth, (uint32_t *)pHeight, (uint32_t *)pNativeFormat, (vr::EGraphicsAPIConvention *)pAPI, (vr::EColorSpace *)pColorSpace);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle(void *linux_side, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    return ((IVROverlay*)linux_side)->ReleaseNativeOverlayHandle((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pNativeTextureHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTextureSize(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    return ((IVROverlay*)linux_side)->GetOverlayTextureSize((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)pWidth, (uint32_t *)pHeight);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_CreateDashboardOverlay(void *linux_side, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    return ((IVROverlay*)linux_side)->CreateDashboardOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pMainHandle, (vr::VROverlayHandle_t *)pThumbnailHandle);
}

bool cppIVROverlay_IVROverlay_012_IsDashboardVisible(void *linux_side)
{
    return ((IVROverlay*)linux_side)->IsDashboardVisible();
}

bool cppIVROverlay_IVROverlay_012_IsActiveDashboardOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    return ((IVROverlay*)linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unProcessId);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    return ((IVROverlay*)linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punProcessId);
}

void cppIVROverlay_IVROverlay_012_ShowDashboard(void *linux_side, const char * pchOverlayToShow)
{
    ((IVROverlay*)linux_side)->ShowDashboard((const char *)pchOverlayToShow);
}

vr::TrackedDeviceIndex_t cppIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice(void *linux_side)
{
    return ((IVROverlay*)linux_side)->GetPrimaryDashboardDevice();
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_ShowKeyboard(void *linux_side, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    return ((IVROverlay*)linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (bool)bUseMinimalMode, (uint64_t)uUserValue);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_012_ShowKeyboardForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    return ((IVROverlay*)linux_side)->ShowKeyboardForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (bool)bUseMinimalMode, (uint64_t)uUserValue);
}

uint32_t cppIVROverlay_IVROverlay_012_GetKeyboardText(void *linux_side, char * pchText, uint32_t cchText)
{
    return ((IVROverlay*)linux_side)->GetKeyboardText((char *)pchText, (uint32_t)cchText);
}

void cppIVROverlay_IVROverlay_012_HideKeyboard(void *linux_side)
{
    ((IVROverlay*)linux_side)->HideKeyboard();
}

void cppIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute(void *linux_side, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    ((IVROverlay*)linux_side)->SetKeyboardTransformAbsolute((vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToKeyboardTransform);
}

void cppIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    ((IVROverlay*)linux_side)->SetKeyboardPositionForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdRect2_t)avoidRect);
}

#ifdef __cplusplus
}
#endif
