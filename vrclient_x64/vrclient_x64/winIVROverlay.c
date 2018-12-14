/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVROverlay_IVROverlay_019.h"

typedef struct __winIVROverlay_IVROverlay_019 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_019;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_FindOverlay(winIVROverlay_IVROverlay_019 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_CreateOverlay(winIVROverlay_IVROverlay_019 *_this, const char * pchOverlayKey, const char * pchOverlayName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_DestroyOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetHighQualityOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_019_GetHighQualityOverlay(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_019_GetOverlayKey(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_019_GetOverlayName(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayName, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayName(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayImageData(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_019 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayRenderingPid, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayRenderingPid(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayRenderingPid, 12)
uint32_t __thiscall winIVROverlay_IVROverlay_019_GetOverlayRenderingPid(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayFlag(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayFlag(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayColor(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayColor(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayAlpha(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayAlpha(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTexelAspect, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTexelAspect(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTexelAspect, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTexelAspect(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlaySortOrder, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlaySortOrder(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlaySortOrder, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlaySortOrder(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTextureBounds(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTextureBounds(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayRenderModel, 40)
uint32_t __thiscall winIVROverlay_IVROverlay_019_GetOverlayRenderModel(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, HmdColor_t * pColor, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayRenderModel, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayRenderModel(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchRenderModel, HmdColor_t * pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTransformType(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_ShowOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_HideOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_019_IsOverlayVisible(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_PollNextOverlayEvent, 24)
bool __thiscall winIVROverlay_IVROverlay_019_PollNextOverlayEvent(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_113b * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayInputMethod(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayInputMethod(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayMouseScale(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayMouseScale(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_019_ComputeOverlayIntersection(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_019_IsHoverTargetOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_019_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayNeighbor(winIVROverlay_IVROverlay_019 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_019 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * pvCenter, float fRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, fRadius);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * pvCenter, float * pfRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, pfRadius);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTexture(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_ClearOverlayTexture(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayRaw(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayFromFile(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTexture, 76)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTexture(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTextureSize, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTextureSize(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_CreateDashboardOverlay(winIVROverlay_IVROverlay_019 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_019_IsDashboardVisible(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_019_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_019_ShowDashboard(winIVROverlay_IVROverlay_019 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_019_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice, 4)
TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_ShowKeyboard(winIVROverlay_IVROverlay_019 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_019_GetKeyboardText(winIVROverlay_IVROverlay_019 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_019_HideKeyboard(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_019_HideKeyboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute, 16)
void __thiscall winIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_019 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay, 28)
void __thiscall winIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayIntersectionMask, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayFlags, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayFlags(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ShowMessageOverlay, 52)
VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_019_ShowMessageOverlay(winIVROverlay_IVROverlay_019 *_this, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_CloseMessageOverlay, 4)
void __thiscall winIVROverlay_IVROverlay_019_CloseMessageOverlay(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_019_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_019_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_019,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_019 *create_winIVROverlay_IVROverlay_019(void *linux_side)
{
    winIVROverlay_IVROverlay_019 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_019));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_019_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_019(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_019 *create_winIVROverlay_IVROverlay_019_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_019 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_019));
    struct thunk *thunks = alloc_thunks(82);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 82 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_019_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_019_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_019_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_019_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_019_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_019_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_019_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_019_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_019_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_019_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_019_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_019_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_019_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_019_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_019_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_019_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_019_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_019_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_019_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_019_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_019_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_019_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_019_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_019_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_019_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_019_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_019_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_019_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_019_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_019_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_019_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_019_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_019_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_019_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_019_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_019_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_019_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_019_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_019_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_019_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_019_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform, 4, TRUE, TRUE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform, 4, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_019_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_019_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_019_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_019_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_019_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_019_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_019_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_019_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_019_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_019_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_019_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_019_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_019_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_019_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_019_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_019_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[80], r, winIVROverlay_IVROverlay_019_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[81], r, winIVROverlay_IVROverlay_019_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 82; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_019_FnTable(void *object)
{
    winIVROverlay_IVROverlay_019 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_018.h"

typedef struct __winIVROverlay_IVROverlay_018 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_018;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_FindOverlay(winIVROverlay_IVROverlay_018 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_CreateOverlay(winIVROverlay_IVROverlay_018 *_this, const char * pchOverlayKey, const char * pchOverlayName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_DestroyOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetHighQualityOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_018_GetHighQualityOverlay(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_018_GetOverlayKey(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_018_GetOverlayName(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayName, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayName(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayImageData(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_018 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayRenderingPid, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayRenderingPid(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayRenderingPid, 12)
uint32_t __thiscall winIVROverlay_IVROverlay_018_GetOverlayRenderingPid(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayFlag(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayFlag(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayColor(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayColor(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayAlpha(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayAlpha(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTexelAspect, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTexelAspect(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTexelAspect, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTexelAspect(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlaySortOrder, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlaySortOrder(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlaySortOrder, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlaySortOrder(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTextureBounds(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTextureBounds(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayRenderModel, 40)
uint32_t __thiscall winIVROverlay_IVROverlay_018_GetOverlayRenderModel(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, HmdColor_t * pColor, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayRenderModel, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayRenderModel(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchRenderModel, HmdColor_t * pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTransformType(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_ShowOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_HideOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_018_IsOverlayVisible(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_PollNextOverlayEvent, 24)
bool __thiscall winIVROverlay_IVROverlay_018_PollNextOverlayEvent(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1017 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayInputMethod(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayInputMethod(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayMouseScale(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayMouseScale(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_018_ComputeOverlayIntersection(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_018_IsHoverTargetOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_018_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayNeighbor(winIVROverlay_IVROverlay_018 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_018 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * vCenter, float fRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, vCenter, fRadius);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * pvCenter, float * pfRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, pfRadius);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTexture(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_ClearOverlayTexture(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayRaw(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayFromFile(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTexture, 76)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTexture(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTextureSize, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTextureSize(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_CreateDashboardOverlay(winIVROverlay_IVROverlay_018 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_018_IsDashboardVisible(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_018_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_018_ShowDashboard(winIVROverlay_IVROverlay_018 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_018_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice, 4)
TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_ShowKeyboard(winIVROverlay_IVROverlay_018 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_018_GetKeyboardText(winIVROverlay_IVROverlay_018 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_018_HideKeyboard(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_018_HideKeyboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute, 16)
void __thiscall winIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_018 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay, 28)
void __thiscall winIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayIntersectionMask, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayFlags, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayFlags(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ShowMessageOverlay, 52)
VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_018_ShowMessageOverlay(winIVROverlay_IVROverlay_018 *_this, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_CloseMessageOverlay, 4)
void __thiscall winIVROverlay_IVROverlay_018_CloseMessageOverlay(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_018_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_018_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_018,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_018 *create_winIVROverlay_IVROverlay_018(void *linux_side)
{
    winIVROverlay_IVROverlay_018 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_018));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_018_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_018(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_018 *create_winIVROverlay_IVROverlay_018_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_018 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_018));
    struct thunk *thunks = alloc_thunks(82);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 82 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_018_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_018_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_018_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_018_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_018_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_018_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_018_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_018_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_018_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_018_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_018_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_018_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_018_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_018_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_018_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_018_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_018_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_018_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_018_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_018_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_018_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_018_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_018_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_018_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_018_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_018_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_018_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_018_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_018_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_018_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_018_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_018_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_018_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_018_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_018_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_018_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_018_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_018_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_018_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_018_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_018_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform, 4, TRUE, TRUE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform, 4, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_018_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_018_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_018_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_018_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_018_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_018_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_018_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_018_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_018_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_018_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_018_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_018_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_018_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_018_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_018_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_018_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[80], r, winIVROverlay_IVROverlay_018_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[81], r, winIVROverlay_IVROverlay_018_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 82; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_018_FnTable(void *object)
{
    winIVROverlay_IVROverlay_018 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_017.h"

typedef struct __winIVROverlay_IVROverlay_017 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_017;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_FindOverlay(winIVROverlay_IVROverlay_017 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_CreateOverlay(winIVROverlay_IVROverlay_017 *_this, const char * pchOverlayKey, const char * pchOverlayName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_DestroyOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetHighQualityOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_017_GetHighQualityOverlay(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_017_GetOverlayKey(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_017_GetOverlayName(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayName, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayName(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayImageData(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_017 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayRenderingPid, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayRenderingPid(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayRenderingPid, 12)
uint32_t __thiscall winIVROverlay_IVROverlay_017_GetOverlayRenderingPid(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayFlag(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayFlag(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayColor(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayColor(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayAlpha(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayAlpha(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTexelAspect, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTexelAspect(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTexelAspect, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTexelAspect(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlaySortOrder, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlaySortOrder(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlaySortOrder, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlaySortOrder(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTextureBounds(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTextureBounds(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayRenderModel, 40)
uint32_t __thiscall winIVROverlay_IVROverlay_017_GetOverlayRenderModel(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, HmdColor_t * pColor, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayRenderModel, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayRenderModel(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchRenderModel, HmdColor_t * pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTransformType(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_ShowOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_HideOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_017_IsOverlayVisible(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_PollNextOverlayEvent, 24)
bool __thiscall winIVROverlay_IVROverlay_017_PollNextOverlayEvent(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1011 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayInputMethod(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayInputMethod(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayMouseScale(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayMouseScale(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_017_ComputeOverlayIntersection(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_017_IsHoverTargetOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_017_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayNeighbor(winIVROverlay_IVROverlay_017 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_017 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * vCenter, float fRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, vCenter, fRadius);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t * pvCenter, float * pfRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, pfRadius);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTexture(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_ClearOverlayTexture(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayRaw(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayFromFile(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTexture, 76)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTexture(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTextureSize, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTextureSize(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_CreateDashboardOverlay(winIVROverlay_IVROverlay_017 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_017_IsDashboardVisible(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_017_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_017_ShowDashboard(winIVROverlay_IVROverlay_017 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_017_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice, 4)
TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_ShowKeyboard(winIVROverlay_IVROverlay_017 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_017_GetKeyboardText(winIVROverlay_IVROverlay_017 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_017_HideKeyboard(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_017_HideKeyboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute, 16)
void __thiscall winIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_017 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay, 28)
void __thiscall winIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayIntersectionMask, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayFlags, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayFlags(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ShowMessageOverlay, 52)
VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_017_ShowMessageOverlay(winIVROverlay_IVROverlay_017 *_this, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_CloseMessageOverlay, 4)
void __thiscall winIVROverlay_IVROverlay_017_CloseMessageOverlay(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_017_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_017,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_017 *create_winIVROverlay_IVROverlay_017(void *linux_side)
{
    winIVROverlay_IVROverlay_017 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_017));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_017_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_017(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_017 *create_winIVROverlay_IVROverlay_017_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_017 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_017));
    struct thunk *thunks = alloc_thunks(83);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 83 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_017_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_017_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_017_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_017_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_017_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_017_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_017_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_017_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_017_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_017_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_017_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_017_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_017_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_017_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_017_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_017_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_017_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_017_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_017_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_017_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_017_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_017_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_017_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_017_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_017_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_017_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_017_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_017_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_017_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_017_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_017_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_017_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_017_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_017_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_017_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_017_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_017_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_017_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_017_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_017_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_017_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform, 4, TRUE, TRUE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform, 4, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_017_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_017_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_017_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_017_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_017_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_017_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_017_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_017_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_017_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_017_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_017_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_017_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_017_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_017_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_017_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[80], r, winIVROverlay_IVROverlay_017_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[81], r, winIVROverlay_IVROverlay_017_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[82], r, winIVROverlay_IVROverlay_017_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 83; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_017_FnTable(void *object)
{
    winIVROverlay_IVROverlay_017 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_016.h"

typedef struct __winIVROverlay_IVROverlay_016 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_016;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_FindOverlay(winIVROverlay_IVROverlay_016 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_CreateOverlay(winIVROverlay_IVROverlay_016 *_this, const char * pchOverlayKey, const char * pchOverlayName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_DestroyOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetHighQualityOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_016_GetHighQualityOverlay(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_016_GetOverlayKey(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_016_GetOverlayName(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayName, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayName(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayImageData(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_016 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayRenderingPid, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayRenderingPid(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayRenderingPid, 12)
uint32_t __thiscall winIVROverlay_IVROverlay_016_GetOverlayRenderingPid(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayFlag(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayFlag(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayColor(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayColor(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayAlpha(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayAlpha(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTexelAspect, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTexelAspect(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTexelAspect, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTexelAspect(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlaySortOrder, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlaySortOrder(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlaySortOrder, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlaySortOrder(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTextureBounds(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTextureBounds(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayRenderModel, 40)
uint32_t __thiscall winIVROverlay_IVROverlay_016_GetOverlayRenderModel(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, HmdColor_t * pColor, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayRenderModel, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayRenderModel(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchRenderModel, HmdColor_t * pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTransformType(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t * ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t * pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_ShowOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_HideOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_016_IsOverlayVisible(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_PollNextOverlayEvent, 24)
bool __thiscall winIVROverlay_IVROverlay_016_PollNextOverlayEvent(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1010 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayInputMethod(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayInputMethod(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayMouseScale(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayMouseScale(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_016_ComputeOverlayIntersection(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_016_IsHoverTargetOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_016_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayNeighbor(winIVROverlay_IVROverlay_016 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_016 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTexture(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_ClearOverlayTexture(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayRaw(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayFromFile(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTexture, 76)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTexture(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTextureSize, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTextureSize(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_CreateDashboardOverlay(winIVROverlay_IVROverlay_016 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_016_IsDashboardVisible(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_016_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_016_ShowDashboard(winIVROverlay_IVROverlay_016 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_016_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice, 4)
TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_ShowKeyboard(winIVROverlay_IVROverlay_016 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_016_GetKeyboardText(winIVROverlay_IVROverlay_016 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_016_HideKeyboard(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_016_HideKeyboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute, 16)
void __thiscall winIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_016 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay, 28)
void __thiscall winIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayIntersectionMask, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayFlags, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayFlags(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ShowMessageOverlay, 52)
VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_016_ShowMessageOverlay(winIVROverlay_IVROverlay_016 *_this, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_CloseMessageOverlay, 4)
void __thiscall winIVROverlay_IVROverlay_016_CloseMessageOverlay(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_016_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_016_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_016,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_016 *create_winIVROverlay_IVROverlay_016(void *linux_side)
{
    winIVROverlay_IVROverlay_016 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_016));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_016_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_016(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_016 *create_winIVROverlay_IVROverlay_016_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_016 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_016));
    struct thunk *thunks = alloc_thunks(81);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 81 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_016_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_016_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_016_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_016_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_016_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_016_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_016_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_016_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_016_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_016_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_016_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_016_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_016_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_016_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_016_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_016_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_016_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_016_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_016_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_016_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_016_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_016_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_016_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_016_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_016_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_016_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_016_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_016_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_016_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_016_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_016_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_016_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_016_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_016_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_016_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_016_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_016_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_016_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_016_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_016_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_016_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_016_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_016_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_016_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_016_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_016_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_016_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_016_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_016_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_016_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_016_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_016_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_016_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_016_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_016_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_016_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_016_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_016_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[80], r, winIVROverlay_IVROverlay_016_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 81; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_016_FnTable(void *object)
{
    winIVROverlay_IVROverlay_016 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_014.h"

typedef struct __winIVROverlay_IVROverlay_014 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_014;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_FindOverlay(winIVROverlay_IVROverlay_014 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_CreateOverlay(winIVROverlay_IVROverlay_014 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_DestroyOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetHighQualityOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_014_GetHighQualityOverlay(winIVROverlay_IVROverlay_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_014_GetOverlayKey(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_014_GetOverlayName(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayImageData(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_014 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayRenderingPid, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayRenderingPid(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayRenderingPid, 12)
uint32_t __thiscall winIVROverlay_IVROverlay_014_GetOverlayRenderingPid(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayFlag(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayFlag(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayColor(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayColor(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayAlpha(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayAlpha(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTexelAspect, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTexelAspect(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTexelAspect, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTexelAspect(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlaySortOrder, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlaySortOrder(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlaySortOrder, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlaySortOrder(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTextureBounds(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTextureBounds(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTransformType(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_ShowOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_HideOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_014_IsOverlayVisible(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_PollNextOverlayEvent, 24)
bool __thiscall winIVROverlay_IVROverlay_014_PollNextOverlayEvent(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_106 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayInputMethod(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayInputMethod(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayMouseScale(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayMouseScale(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_014_ComputeOverlayIntersection(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_014_IsHoverTargetOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_014_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayNeighbor(winIVROverlay_IVROverlay_014 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_014 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTexture(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_ClearOverlayTexture(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayRaw(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayFromFile(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTexture, 76)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTexture(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, ETextureType * pAPIType, EColorSpace * pColorSpace, VRTextureBounds_t * pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTextureSize, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTextureSize(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_CreateDashboardOverlay(winIVROverlay_IVROverlay_014 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_014_IsDashboardVisible(winIVROverlay_IVROverlay_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_014_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_014_ShowDashboard(winIVROverlay_IVROverlay_014 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_014_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice, 4)
TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_ShowKeyboard(winIVROverlay_IVROverlay_014 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_014_GetKeyboardText(winIVROverlay_IVROverlay_014 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_014_HideKeyboard(winIVROverlay_IVROverlay_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_014_HideKeyboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute, 16)
void __thiscall winIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_014 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay, 28)
void __thiscall winIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayIntersectionMask, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayFlags, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayFlags(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ShowMessageOverlay, 52)
VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_014_ShowMessageOverlay(winIVROverlay_IVROverlay_014 *_this, const char * pchText, const char * pchCaption, const char * pchButton0Text, const char * pchButton1Text, const char * pchButton2Text, const char * pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

extern vtable_ptr winIVROverlay_IVROverlay_014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_014,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ShowMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_014 *create_winIVROverlay_IVROverlay_014(void *linux_side)
{
    winIVROverlay_IVROverlay_014 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_014));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_014_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_014(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_014 *create_winIVROverlay_IVROverlay_014_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_014 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_014));
    struct thunk *thunks = alloc_thunks(75);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 75 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_014_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_014_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_014_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_014_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_014_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_014_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_014_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_014_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_014_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_014_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_014_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_014_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_014_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_014_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_014_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_014_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_014_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_014_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_014_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_014_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_014_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_014_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_014_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_014_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_014_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_014_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_014_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_014_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_014_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_014_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_014_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_014_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_014_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_014_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_014_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_014_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_014_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_014_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_014_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_014_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_014_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_014_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_014_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_014_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_014_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_014_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_014_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_014_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_014_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_014_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_014_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_014_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_014_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_014_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_014_ShowMessageOverlay, 6, FALSE, FALSE);
    for (i = 0; i < 75; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_014_FnTable(void *object)
{
    winIVROverlay_IVROverlay_014 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_013.h"

typedef struct __winIVROverlay_IVROverlay_013 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_013;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_FindOverlay(winIVROverlay_IVROverlay_013 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_CreateOverlay(winIVROverlay_IVROverlay_013 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_DestroyOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetHighQualityOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_013_GetHighQualityOverlay(winIVROverlay_IVROverlay_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_013_GetOverlayKey(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_013_GetOverlayName(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayImageData(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_013 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayRenderingPid, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayRenderingPid(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayRenderingPid, 12)
uint32_t __thiscall winIVROverlay_IVROverlay_013_GetOverlayRenderingPid(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayFlag(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayFlag(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayColor(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayColor(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayAlpha(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayAlpha(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTexelAspect, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTexelAspect(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTexelAspect, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTexelAspect(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float * pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlaySortOrder, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlaySortOrder(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlaySortOrder, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlaySortOrder(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTextureBounds(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTextureBounds(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTransformType(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_ShowOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_HideOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_013_IsOverlayVisible(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_PollNextOverlayEvent, 24)
bool __thiscall winIVROverlay_IVROverlay_013_PollNextOverlayEvent(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_104 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayInputMethod(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayInputMethod(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayMouseScale(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayMouseScale(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_013_ComputeOverlayIntersection(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_013_IsHoverTargetOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_013_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayNeighbor(winIVROverlay_IVROverlay_013 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_013 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTexture(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_ClearOverlayTexture(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayRaw(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayFromFile(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTexture, 68)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTexture(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, EGraphicsAPIConvention * pAPI, EColorSpace * pColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPI, pColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTextureSize, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTextureSize(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_CreateDashboardOverlay(winIVROverlay_IVROverlay_013 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_013_IsDashboardVisible(winIVROverlay_IVROverlay_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_013_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_013_ShowDashboard(winIVROverlay_IVROverlay_013 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_013_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice, 4)
TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_ShowKeyboard(winIVROverlay_IVROverlay_013 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_013_GetKeyboardText(winIVROverlay_IVROverlay_013 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_013_HideKeyboard(winIVROverlay_IVROverlay_013 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_013_HideKeyboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute, 16)
void __thiscall winIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_013 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay, 28)
void __thiscall winIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayIntersectionMask, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t * pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

extern vtable_ptr winIVROverlay_IVROverlay_013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_013,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayIntersectionMask)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_013 *create_winIVROverlay_IVROverlay_013(void *linux_side)
{
    winIVROverlay_IVROverlay_013 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_013));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_013_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_013(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_013 *create_winIVROverlay_IVROverlay_013_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_013 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_013));
    struct thunk *thunks = alloc_thunks(73);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 73 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_013_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_013_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_013_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_013_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_013_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_013_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_013_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_013_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_013_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_013_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_013_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_013_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_013_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_013_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_013_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_013_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_013_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_013_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_013_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_013_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_013_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_013_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_013_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_013_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_013_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_013_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_013_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_013_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_013_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_013_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_013_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_013_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_013_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_013_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_013_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_013_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_013_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_013_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_013_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_013_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_013_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_013_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_013_GetOverlayTexture, 8, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_013_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_013_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_013_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_013_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_013_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_013_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_013_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_013_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_013_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_013_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    for (i = 0; i < 73; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_013_FnTable(void *object)
{
    winIVROverlay_IVROverlay_013 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_012.h"

typedef struct __winIVROverlay_IVROverlay_012 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_012;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_FindOverlay(winIVROverlay_IVROverlay_012 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_CreateOverlay(winIVROverlay_IVROverlay_012 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_DestroyOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetHighQualityOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_012_GetHighQualityOverlay(winIVROverlay_IVROverlay_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_012_GetOverlayKey(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_012_GetOverlayName(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayImageData(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_012 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayRenderingPid, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayRenderingPid(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayRenderingPid, 12)
uint32_t __thiscall winIVROverlay_IVROverlay_012_GetOverlayRenderingPid(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayFlag(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayFlag(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayColor(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayColor(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayAlpha(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayAlpha(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTextureBounds(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTextureBounds(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTransformType(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_ShowOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_HideOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_012_IsOverlayVisible(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_PollNextOverlayEvent, 24)
bool __thiscall winIVROverlay_IVROverlay_012_PollNextOverlayEvent(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_101 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayInputMethod(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayInputMethod(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayMouseScale(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayMouseScale(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_012_ComputeOverlayIntersection(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_012_IsHoverTargetOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_012_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayNeighbor(winIVROverlay_IVROverlay_012 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_012 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTexture(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_ClearOverlayTexture(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayRaw(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayFromFile(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTexture, 68)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTexture(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, EGraphicsAPIConvention * pAPI, EColorSpace * pColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPI, pColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTextureSize, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTextureSize(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * pWidth, uint32_t * pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_CreateDashboardOverlay(winIVROverlay_IVROverlay_012 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_012_IsDashboardVisible(winIVROverlay_IVROverlay_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_012_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_012_ShowDashboard(winIVROverlay_IVROverlay_012 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_012_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice, 4)
TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_ShowKeyboard(winIVROverlay_IVROverlay_012 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_012_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_012_GetKeyboardText(winIVROverlay_IVROverlay_012 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_012_HideKeyboard(winIVROverlay_IVROverlay_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_012_HideKeyboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute, 16)
void __thiscall winIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_012 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay, 28)
void __thiscall winIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

extern vtable_ptr winIVROverlay_IVROverlay_012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_012,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_012 *create_winIVROverlay_IVROverlay_012(void *linux_side)
{
    winIVROverlay_IVROverlay_012 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_012));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_012_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_012(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_012 *create_winIVROverlay_IVROverlay_012_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_012 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_012));
    struct thunk *thunks = alloc_thunks(68);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 68 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_012_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_012_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_012_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_012_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_012_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_012_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_012_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_012_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_012_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_012_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_012_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_012_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_012_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_012_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_012_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_012_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_012_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_012_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_012_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_012_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_012_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_012_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_012_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_012_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_012_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_012_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_012_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_012_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_012_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_012_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_012_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_012_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_012_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_012_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_012_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_012_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_012_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_012_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_012_GetOverlayTexture, 8, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_012_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_012_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_012_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_012_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_012_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_012_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_012_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_012_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_012_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    for (i = 0; i < 68; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_012_FnTable(void *object)
{
    winIVROverlay_IVROverlay_012 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_011.h"

typedef struct __winIVROverlay_IVROverlay_011 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_011;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_FindOverlay(winIVROverlay_IVROverlay_011 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_CreateOverlay(winIVROverlay_IVROverlay_011 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_DestroyOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetHighQualityOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_011_GetHighQualityOverlay(winIVROverlay_IVROverlay_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_011_GetOverlayKey(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_011_GetOverlayName(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayImageData(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_011 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayRenderingPid, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayRenderingPid(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayRenderingPid, 12)
uint32_t __thiscall winIVROverlay_IVROverlay_011_GetOverlayRenderingPid(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayFlag(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayFlag(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayColor(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayColor(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayAlpha(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayAlpha(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTextureBounds(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTextureBounds(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTransformType(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_ShowOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_HideOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_011_IsOverlayVisible(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_PollNextOverlayEvent, 24)
bool __thiscall winIVROverlay_IVROverlay_011_PollNextOverlayEvent(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_0920 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayInputMethod(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayInputMethod(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayMouseScale(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayMouseScale(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_011_ComputeOverlayIntersection(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_011_IsHoverTargetOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_011_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayNeighbor(winIVROverlay_IVROverlay_011 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_011 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTexture(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_ClearOverlayTexture(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayRaw(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayFromFile(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTexture, 68)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTexture(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, void ** pNativeTextureHandle, void * pNativeTextureRef, uint32_t * pWidth, uint32_t * pHeight, uint32_t * pNativeFormat, EGraphicsAPIConvention * pAPI, EColorSpace * pColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPI, pColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, void * pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_CreateDashboardOverlay(winIVROverlay_IVROverlay_011 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_011_IsDashboardVisible(winIVROverlay_IVROverlay_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_011_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_011_ShowDashboard(winIVROverlay_IVROverlay_011 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_011_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice, 4)
TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_ShowKeyboard(winIVROverlay_IVROverlay_011 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_011_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_011_GetKeyboardText(winIVROverlay_IVROverlay_011 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_011_HideKeyboard(winIVROverlay_IVROverlay_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_011_HideKeyboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute, 16)
void __thiscall winIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_011 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay, 28)
void __thiscall winIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

extern vtable_ptr winIVROverlay_IVROverlay_011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_011,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_011 *create_winIVROverlay_IVROverlay_011(void *linux_side)
{
    winIVROverlay_IVROverlay_011 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_011));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_011_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_011(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_011 *create_winIVROverlay_IVROverlay_011_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_011 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_011));
    struct thunk *thunks = alloc_thunks(67);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 67 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_011_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_011_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_011_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_011_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_011_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_011_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_011_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_011_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_011_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_011_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_011_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_011_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_011_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_011_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_011_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_011_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_011_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_011_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_011_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_011_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_011_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_011_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_011_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_011_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_011_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_011_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_011_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_011_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_011_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_011_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_011_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_011_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_011_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_011_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_011_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_011_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_011_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_011_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_011_GetOverlayTexture, 8, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_011_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_011_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_011_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_011_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_011_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_011_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_011_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_011_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    for (i = 0; i < 67; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_011_FnTable(void *object)
{
    winIVROverlay_IVROverlay_011 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_010.h"

typedef struct __winIVROverlay_IVROverlay_010 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_010;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_FindOverlay(winIVROverlay_IVROverlay_010 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_CreateOverlay(winIVROverlay_IVROverlay_010 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_DestroyOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetHighQualityOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_010_GetHighQualityOverlay(winIVROverlay_IVROverlay_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_010_GetOverlayKey(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_010_GetOverlayName(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayImageData(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_010 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayFlag(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayFlag(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayColor(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayColor(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayAlpha(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayAlpha(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTextureBounds(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTextureBounds(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTransformType(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punDeviceIndex, char * pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_ShowOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_HideOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_010_IsOverlayVisible(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_PollNextOverlayEvent, 24)
bool __thiscall winIVROverlay_IVROverlay_010_PollNextOverlayEvent(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_0918 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayInputMethod(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayInputMethod(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayMouseScale(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayMouseScale(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_010_ComputeOverlayIntersection(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_010_IsHoverTargetOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_010_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayNeighbor(winIVROverlay_IVROverlay_010 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_010 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTexture(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_ClearOverlayTexture(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayRaw(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayFromFile(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_CreateDashboardOverlay(winIVROverlay_IVROverlay_010 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_010_IsDashboardVisible(winIVROverlay_IVROverlay_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_010_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_010_ShowDashboard(winIVROverlay_IVROverlay_010 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_010_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice, 4)
TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_ShowKeyboard(winIVROverlay_IVROverlay_010 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_010_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_010_GetKeyboardText(winIVROverlay_IVROverlay_010 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_010_HideKeyboard(winIVROverlay_IVROverlay_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_010_HideKeyboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute, 16)
void __thiscall winIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_010 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay, 28)
void __thiscall winIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

extern vtable_ptr winIVROverlay_IVROverlay_010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_010,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_010 *create_winIVROverlay_IVROverlay_010(void *linux_side)
{
    winIVROverlay_IVROverlay_010 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_010));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_010_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_010(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_010 *create_winIVROverlay_IVROverlay_010_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_010 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_010));
    struct thunk *thunks = alloc_thunks(63);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 63 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_010_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_010_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_010_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_010_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_010_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_010_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_010_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_010_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_010_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_010_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_010_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_010_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_010_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_010_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_010_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_010_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_010_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_010_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_010_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_010_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_010_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_010_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_010_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_010_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_010_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_010_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_010_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_010_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_010_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_010_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_010_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_010_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_010_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_010_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_010_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_010_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_010_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_010_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_010_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_010_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_010_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_010_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_010_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_010_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    for (i = 0; i < 63; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_010_FnTable(void *object)
{
    winIVROverlay_IVROverlay_010 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_008.h"

typedef struct __winIVROverlay_IVROverlay_008 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_008;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_FindOverlay(winIVROverlay_IVROverlay_008 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_CreateOverlay(winIVROverlay_IVROverlay_008 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_DestroyOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetHighQualityOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_008_GetHighQualityOverlay(winIVROverlay_IVROverlay_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_008_GetOverlayKey(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_008_GetOverlayName(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayImageData(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_008 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayFlag(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayFlag(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayColor(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayColor(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayAlpha(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayAlpha(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTextureBounds(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayTextureBounds(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayTransformType(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_ShowOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_HideOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_008_IsOverlayVisible(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t * pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_PollNextOverlayEvent, 20)
bool __thiscall winIVROverlay_IVROverlay_008_PollNextOverlayEvent(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_0914 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayInputMethod(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayInputMethod(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayMouseScale(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayMouseScale(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_008_ComputeOverlayIntersection(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_008_IsHoverTargetOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_008_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayNeighbor(winIVROverlay_IVROverlay_008 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_008 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTexture(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_ClearOverlayTexture(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayRaw(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayFromFile(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_CreateDashboardOverlay(winIVROverlay_IVROverlay_008 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_008_IsDashboardVisible(winIVROverlay_IVROverlay_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_008_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_008_ShowDashboard(winIVROverlay_IVROverlay_008 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_008_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_ShowKeyboard(winIVROverlay_IVROverlay_008 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_008_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_008_GetKeyboardText(winIVROverlay_IVROverlay_008 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_008_HideKeyboard(winIVROverlay_IVROverlay_008 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_008_HideKeyboard(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute, 16)
void __thiscall winIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_008 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay, 28)
void __thiscall winIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

extern vtable_ptr winIVROverlay_IVROverlay_008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_008,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_008 *create_winIVROverlay_IVROverlay_008(void *linux_side)
{
    winIVROverlay_IVROverlay_008 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_008));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_008_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_008(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_008 *create_winIVROverlay_IVROverlay_008_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_008 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_008));
    struct thunk *thunks = alloc_thunks(60);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 60 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_008_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_008_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_008_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_008_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_008_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_008_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_008_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_008_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_008_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_008_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_008_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_008_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_008_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_008_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_008_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_008_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_008_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_008_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_008_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_008_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_008_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_008_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_008_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_008_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_008_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_008_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_008_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_008_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_008_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_008_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_008_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_008_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_008_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_008_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_008_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_008_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_008_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_008_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_008_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_008_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_008_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_008_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_008_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_008_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    for (i = 0; i < 60; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_008_FnTable(void *object)
{
    winIVROverlay_IVROverlay_008 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_007.h"

typedef struct __winIVROverlay_IVROverlay_007 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_007;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_FindOverlay, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_FindOverlay(winIVROverlay_IVROverlay_007 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_CreateOverlay, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_CreateOverlay(winIVROverlay_IVROverlay_007 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_DestroyOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_DestroyOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetHighQualityOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetHighQualityOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_007_GetHighQualityOverlay(winIVROverlay_IVROverlay_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_007_GetOverlayKey(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_007_GetOverlayName(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, EVROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayImageData, 40)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayImageData(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_007 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayFlag, 17)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayFlag(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayFlag, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayFlag(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayColor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayColor(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayColor, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayColor(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayAlpha, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayAlpha(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayAlpha, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayAlpha(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayWidthInMeters, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayWidthInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace * peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTextureBounds(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayTextureBounds, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayTextureBounds(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayTransformType, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayTransformType(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative, 28)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ShowOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_ShowOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_HideOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_HideOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_007_IsOverlayVisible(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_PollNextOverlayEvent, 20)
bool __thiscall winIVROverlay_IVROverlay_007_PollNextOverlayEvent(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_0912 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayInputMethod, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayInputMethod(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayInputMethod, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayInputMethod(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayMouseScale(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayMouseScale, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayMouseScale(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_007_ComputeOverlayIntersection(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_IsHoverTargetOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_007_IsHoverTargetOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetGamepadFocusOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_007_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetGamepadFocusOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetGamepadFocusOverlay, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayNeighbor, 24)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayNeighbor(winIVROverlay_IVROverlay_007 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_007 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayTexture, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTexture(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ClearOverlayTexture, 12)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_ClearOverlayTexture(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayRaw, 32)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayRaw(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayFromFile, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayFromFile(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_CreateDashboardOverlay, 36)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_CreateDashboardOverlay(winIVROverlay_IVROverlay_007 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_007_IsDashboardVisible(winIVROverlay_IVROverlay_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_007_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess, 16)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess, 20)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_007_ShowDashboard(winIVROverlay_IVROverlay_007 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_007_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ShowKeyboard, 41)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_ShowKeyboard(winIVROverlay_IVROverlay_007 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ShowKeyboardForOverlay, 49)
EVROverlayError __thiscall winIVROverlay_IVROverlay_007_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_007_GetKeyboardText(winIVROverlay_IVROverlay_007 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_007_HideKeyboard(winIVROverlay_IVROverlay_007 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_007_HideKeyboard(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_007,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_HideKeyboard)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_007 *create_winIVROverlay_IVROverlay_007(void *linux_side)
{
    winIVROverlay_IVROverlay_007 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_007));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_007_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_007(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_007 *create_winIVROverlay_IVROverlay_007_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_007 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_007));
    struct thunk *thunks = alloc_thunks(57);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 57 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_007_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_007_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_007_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_007_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_007_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_007_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_007_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_007_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_007_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_007_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_007_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_007_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_007_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_007_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_007_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_007_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_007_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_007_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_007_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_007_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_007_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_007_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_007_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_007_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_007_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_007_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_007_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_007_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_007_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_007_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_007_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_007_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_007_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_007_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_007_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_007_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_007_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_007_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_007_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_007_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_007_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_007_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_007_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_007_HideKeyboard, 0, FALSE, FALSE);
    for (i = 0; i < 57; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_007_FnTable(void *object)
{
    winIVROverlay_IVROverlay_007 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_005.h"

typedef struct __winIVROverlay_IVROverlay_005 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_005;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_FindOverlay, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_FindOverlay(winIVROverlay_IVROverlay_005 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_CreateOverlay, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_CreateOverlay(winIVROverlay_IVROverlay_005 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_DestroyOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_DestroyOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetHighQualityOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetHighQualityOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_005_GetHighQualityOverlay(winIVROverlay_IVROverlay_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_005_GetOverlayKey(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_005_GetOverlayName(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayImageData, 40)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayImageData(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_005 *_this, VROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayFlag, 17)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayFlag(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayFlag, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayFlag(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayColor, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayColor(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayColor, 36)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayColor(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayAlpha, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayAlpha(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayAlpha, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayAlpha(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayGamma, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayGamma(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayGamma(_this->linux_side, ulOverlayHandle, fGamma);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayGamma, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayGamma(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float * pfGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayGamma(_this->linux_side, ulOverlayHandle, pfGamma);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayWidthInMeters, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayWidthInMeters, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayTextureBounds, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayTextureBounds(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayTextureBounds, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayTextureBounds(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayTransformType, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayTransformType(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_ShowOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_ShowOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_HideOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_HideOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_005_IsOverlayVisible(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_PollNextOverlayEvent, 20)
bool __thiscall winIVROverlay_IVROverlay_005_PollNextOverlayEvent(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_0910 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayInputMethod, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayInputMethod(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayInputMethod, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayInputMethod(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayMouseScale, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayMouseScale(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayMouseScale, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayMouseScale(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_005_ComputeOverlayIntersection(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_IsFocusOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_005_IsFocusOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_IsFocusOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayTexture, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayTexture(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayTexture(_this->linux_side, ulOverlayHandle, eTextureType, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_ClearOverlayTexture, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_ClearOverlayTexture(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayRaw, 32)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayRaw(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayFromFile, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayFromFile(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_CreateDashboardOverlay, 36)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_CreateDashboardOverlay(winIVROverlay_IVROverlay_005 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_005_IsDashboardVisible(winIVROverlay_IVROverlay_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_005_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_005_ShowDashboard(winIVROverlay_IVROverlay_005 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_005_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_ShowKeyboard, 33)
VROverlayError __thiscall winIVROverlay_IVROverlay_005_ShowKeyboard(winIVROverlay_IVROverlay_005 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32_t unCharMax, const char * pchExistingText, bool bUseMinimalMode)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetKeyboardText, 16)
uint32_t __thiscall winIVROverlay_IVROverlay_005_GetKeyboardText(winIVROverlay_IVROverlay_005 *_this, char * pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetKeyboardText(_this->linux_side, pchText, cchText);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_HideKeyboard, 4)
void __thiscall winIVROverlay_IVROverlay_005_HideKeyboard(winIVROverlay_IVROverlay_005 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_005_HideKeyboard(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_005,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_IsFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_HideKeyboard)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_005 *create_winIVROverlay_IVROverlay_005(void *linux_side)
{
    winIVROverlay_IVROverlay_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_005));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_005_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_005(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_005 *create_winIVROverlay_IVROverlay_005_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_005));
    struct thunk *thunks = alloc_thunks(52);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 52 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_005_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_005_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_005_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_005_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_005_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_005_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_005_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_005_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_005_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_005_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_005_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_005_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_005_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_005_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_005_SetOverlayGamma, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_005_GetOverlayGamma, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_005_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_005_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_005_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_005_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_005_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_005_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_005_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_005_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_005_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_005_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_005_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_005_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_005_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_005_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_005_IsFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_005_SetOverlayTexture, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_005_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_005_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_005_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_005_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_005_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_005_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_005_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_005_ShowKeyboard, 6, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_005_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_005_HideKeyboard, 0, FALSE, FALSE);
    for (i = 0; i < 52; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_005_FnTable(void *object)
{
    winIVROverlay_IVROverlay_005 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_004.h"

typedef struct __winIVROverlay_IVROverlay_004 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_004;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_FindOverlay, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_FindOverlay(winIVROverlay_IVROverlay_004 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_CreateOverlay, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_CreateOverlay(winIVROverlay_IVROverlay_004 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_DestroyOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_DestroyOverlay(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetHighQualityOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetHighQualityOverlay(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_004_GetHighQualityOverlay(winIVROverlay_IVROverlay_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_004_GetOverlayKey(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_004_GetOverlayName(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayImageData, 40)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayImageData(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_004 *_this, VROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayFlag, 17)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayFlag(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayFlag, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayFlag(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayColor, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayColor(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayColor, 36)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayColor(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayAlpha, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayAlpha(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayAlpha, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayAlpha(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayGamma, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayGamma(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayGamma(_this->linux_side, ulOverlayHandle, fGamma);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayGamma, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayGamma(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float * pfGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayGamma(_this->linux_side, ulOverlayHandle, pfGamma);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayWidthInMeters, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayWidthInMeters, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float * pfMinDistanceInMeters, float * pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayTextureBounds, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayTextureBounds(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayTextureBounds, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayTextureBounds(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayTransformType, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayTransformType(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_ShowOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_ShowOverlay(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_HideOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_HideOverlay(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_004_IsOverlayVisible(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_PollNextOverlayEvent, 20)
bool __thiscall winIVROverlay_IVROverlay_004_PollNextOverlayEvent(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_098 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayInputMethod, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayInputMethod(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayInputMethod, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayInputMethod(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayMouseScale, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayMouseScale(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayMouseScale, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayMouseScale(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_004_ComputeOverlayIntersection(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayTexture, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayTexture(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayTexture(_this->linux_side, ulOverlayHandle, eTextureType, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_ClearOverlayTexture, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_ClearOverlayTexture(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayRaw, 32)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayRaw(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayFromFile, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayFromFile(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_CreateDashboardOverlay, 36)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_CreateDashboardOverlay(winIVROverlay_IVROverlay_004 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_004_IsDashboardVisible(winIVROverlay_IVROverlay_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_004_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_004_ShowDashboard(winIVROverlay_IVROverlay_004 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_004_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

extern vtable_ptr winIVROverlay_IVROverlay_004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_004,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_ShowDashboard)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_004 *create_winIVROverlay_IVROverlay_004(void *linux_side)
{
    winIVROverlay_IVROverlay_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_004));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_004_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_004(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_004 *create_winIVROverlay_IVROverlay_004_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_004));
    struct thunk *thunks = alloc_thunks(48);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 48 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_004_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_004_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_004_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_004_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_004_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_004_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_004_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_004_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_004_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_004_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_004_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_004_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_004_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_004_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_004_SetOverlayGamma, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_004_GetOverlayGamma, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_004_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_004_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_004_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_004_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_004_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_004_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_004_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_004_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_004_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_004_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_004_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_004_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_004_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_004_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_004_SetOverlayTexture, 3, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_004_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_004_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_004_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_004_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_004_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_004_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_004_ShowDashboard, 1, FALSE, FALSE);
    for (i = 0; i < 48; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_004_FnTable(void *object)
{
    winIVROverlay_IVROverlay_004 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_003.h"

typedef struct __winIVROverlay_IVROverlay_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_003;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_FindOverlay, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_FindOverlay(winIVROverlay_IVROverlay_003 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_CreateOverlay, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_CreateOverlay(winIVROverlay_IVROverlay_003 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_DestroyOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_DestroyOverlay(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetHighQualityOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetHighQualityOverlay(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_003_GetHighQualityOverlay(winIVROverlay_IVROverlay_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayKey, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_003_GetOverlayKey(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayName, 32)
uint32_t __thiscall winIVROverlay_IVROverlay_003_GetOverlayName(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, char * pchValue, uint32_t unBufferSize, VROverlayError * pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayImageData, 40)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayImageData(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unBufferSize, uint32_t * punWidth, uint32_t * punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_003 *_this, VROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayFlag, 17)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayFlag(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayFlag, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayFlag(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayColor, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayColor(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayColor, 36)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayColor(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayAlpha, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayAlpha(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayAlpha, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayAlpha(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayGamma, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayGamma(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayGamma(_this->linux_side, ulOverlayHandle, fGamma);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayGamma, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayGamma(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float * pfGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayGamma(_this->linux_side, ulOverlayHandle, pfGamma);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayWidthInMeters, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayWidthInMeters, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayTextureBounds, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayTextureBounds(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayTextureBounds, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayTextureBounds(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayTransformType, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayTransformType(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_ShowOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_ShowOverlay(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_HideOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_HideOverlay(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_003_IsOverlayVisible(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_PollNextOverlayEvent, 20)
bool __thiscall winIVROverlay_IVROverlay_003_PollNextOverlayEvent(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_097 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayInputMethod, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayInputMethod(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayInputMethod, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayInputMethod(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayMouseScale, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayMouseScale(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayMouseScale, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayMouseScale(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_003_ComputeOverlayIntersection(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayTexture, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayTexture(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayTexture(_this->linux_side, ulOverlayHandle, eTextureType, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_ClearOverlayTexture, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_ClearOverlayTexture(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayRaw, 32)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayRaw(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayFromFile, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayFromFile(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_CreateDashboardOverlay, 36)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_CreateDashboardOverlay(winIVROverlay_IVROverlay_003 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_003_IsDashboardVisible(winIVROverlay_IVROverlay_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_003_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_ShowDashboard, 12)
void __thiscall winIVROverlay_IVROverlay_003_ShowDashboard(winIVROverlay_IVROverlay_003 *_this, const char * pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_003_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

extern vtable_ptr winIVROverlay_IVROverlay_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_003,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_ShowDashboard)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_003 *create_winIVROverlay_IVROverlay_003(void *linux_side)
{
    winIVROverlay_IVROverlay_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_003));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_003_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_003(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_003 *create_winIVROverlay_IVROverlay_003_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_003));
    struct thunk *thunks = alloc_thunks(46);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 46 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_003_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_003_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_003_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_003_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_003_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_003_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_003_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_003_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_003_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_003_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_003_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_003_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_003_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_003_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_003_SetOverlayGamma, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_003_GetOverlayGamma, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_003_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_003_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_003_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_003_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_003_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_003_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_003_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_003_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_003_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_003_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_003_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_003_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_003_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_003_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_003_SetOverlayTexture, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_003_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_003_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_003_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_003_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_003_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_003_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_003_ShowDashboard, 1, FALSE, FALSE);
    for (i = 0; i < 46; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_003_FnTable(void *object)
{
    winIVROverlay_IVROverlay_003 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_002.h"

typedef struct __winIVROverlay_IVROverlay_002 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_002;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_FindOverlay, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_FindOverlay(winIVROverlay_IVROverlay_002 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_CreateOverlay, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_CreateOverlay(winIVROverlay_IVROverlay_002 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_DestroyOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_DestroyOverlay(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetHighQualityOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetHighQualityOverlay(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_002_GetHighQualityOverlay(winIVROverlay_IVROverlay_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_002 *_this, VROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayFlag, 17)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayFlag(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayFlag, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayFlag(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayColor, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayColor(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayColor, 36)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayColor(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float * pfRed, float * pfGreen, float * pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayAlpha, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayAlpha(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayAlpha, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayAlpha(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayGamma, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayGamma(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayGamma(_this->linux_side, ulOverlayHandle, fGamma);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayGamma, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayGamma(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float * pfGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayGamma(_this->linux_side, ulOverlayHandle, pfGamma);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayWidthInMeters, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayWidthInMeters, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayTextureBounds, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayTextureBounds(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayTextureBounds, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayTextureBounds(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayTransformType, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayTransformType(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_ShowOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_ShowOverlay(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_HideOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_HideOverlay(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_002_IsOverlayVisible(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_PollNextOverlayEvent, 20)
bool __thiscall winIVROverlay_IVROverlay_002_PollNextOverlayEvent(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_094 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayInputMethod, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayInputMethod(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayInputMethod, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayInputMethod(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayMouseScale, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayMouseScale(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayMouseScale, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayMouseScale(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_002_ComputeOverlayIntersection(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayTexture, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayTexture(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayTexture(_this->linux_side, ulOverlayHandle, eTextureType, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_ClearOverlayTexture, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_ClearOverlayTexture(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayRaw, 32)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayRaw(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayFromFile, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayFromFile(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_CreateDashboardOverlay, 36)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_CreateDashboardOverlay(winIVROverlay_IVROverlay_002 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t * pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_IsDashboardVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_002_IsDashboardVisible(winIVROverlay_IVROverlay_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_IsDashboardVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_IsActiveDashboardOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_002_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

extern vtable_ptr winIVROverlay_IVROverlay_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_002,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_002 *create_winIVROverlay_IVROverlay_002(void *linux_side)
{
    winIVROverlay_IVROverlay_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_002));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_002_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_002(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_002 *create_winIVROverlay_IVROverlay_002_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_002));
    struct thunk *thunks = alloc_thunks(42);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 42 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_002_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_002_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_002_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_002_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_002_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_002_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_002_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_002_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_002_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_002_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_002_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_002_SetOverlayGamma, 2, TRUE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_002_GetOverlayGamma, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_002_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_002_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_002_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_002_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_002_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_002_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_002_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_002_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_002_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_002_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_002_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_002_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_002_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_002_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_002_SetOverlayTexture, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_002_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_002_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_002_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_002_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_002_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_002_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    for (i = 0; i < 42; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_002_FnTable(void *object)
{
    winIVROverlay_IVROverlay_002 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_001.h"

typedef struct __winIVROverlay_IVROverlay_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_001;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_FindOverlay, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_FindOverlay(winIVROverlay_IVROverlay_001 *_this, const char * pchOverlayKey, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_CreateOverlay, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_CreateOverlay(winIVROverlay_IVROverlay_001 *_this, const char * pchOverlayKey, const char * pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_DestroyOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_DestroyOverlay(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetHighQualityOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetHighQualityOverlay(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetHighQualityOverlay, 4)
VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_001_GetHighQualityOverlay(winIVROverlay_IVROverlay_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetHighQualityOverlay(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum, 8)
const char * __thiscall winIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_001 *_this, VROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayFlag, 17)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayFlag(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayFlag, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayFlag(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool * pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayAlpha, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayAlpha(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayAlpha, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayAlpha(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float * pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayGamma, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayGamma(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayGamma(_this->linux_side, ulOverlayHandle, fGamma);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayGamma, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayGamma(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float * pfGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayGamma(_this->linux_side, ulOverlayHandle, pfGamma);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayWidthInMeters, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayWidthInMeters, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float * pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayTextureBounds, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayTextureBounds(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayTextureBounds, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayTextureBounds(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t * pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayTransformType, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayTransformType(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType * peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin * peTrackingOrigin, HmdMatrix34_t * pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative, 24)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative, 28)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t * punTrackedDevice, HmdMatrix34_t * pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayVisibility, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayVisibility(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayVisibility * peOverlayVisibility)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayVisibility(_this->linux_side, ulOverlayHandle, peOverlayVisibility);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayVisibility, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayVisibility(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayVisibility eOverlayVisibility)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayVisibility(_this->linux_side, ulOverlayHandle, eOverlayVisibility);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_ShowOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_ShowOverlay(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_HideOverlay, 12)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_HideOverlay(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_HideOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_IsOverlayVisible, 12)
bool __thiscall winIVROverlay_IVROverlay_001_IsOverlayVisible(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_PollNextOverlayEvent, 20)
bool __thiscall winIVROverlay_IVROverlay_001_PollNextOverlayEvent(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_092 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayInputMethod, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayInputMethod(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod * peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayInputMethod, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayInputMethod(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayMouseScale, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayMouseScale(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayMouseScale, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayMouseScale(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t * pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_ComputeOverlayIntersection, 28)
bool __thiscall winIVROverlay_IVROverlay_001_ComputeOverlayIntersection(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t * pParams, VROverlayIntersectionResults_t * pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse, 16)
bool __thiscall winIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayTexture, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayTexture(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, void * pTexture)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayTexture(_this->linux_side, ulOverlayHandle, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayRaw, 32)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayRaw(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, void * pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayFromFile, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayFromFile(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, const char * pchFilePath)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_IsSystemOverlayVisible, 4)
bool __thiscall winIVROverlay_IVROverlay_001_IsSystemOverlayVisible(winIVROverlay_IVROverlay_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_IsActiveSystemOverlay, 12)
bool __thiscall winIVROverlay_IVROverlay_001_IsActiveSystemOverlay(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay(_this->linux_side, ulOverlayHandle);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess, 16)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess, 20)
VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t * punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

extern vtable_ptr winIVROverlay_IVROverlay_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_001,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayVisibility)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayVisibility)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_IsSystemOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_IsActiveSystemOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_001 *create_winIVROverlay_IVROverlay_001(void *linux_side)
{
    winIVROverlay_IVROverlay_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_001 *create_winIVROverlay_IVROverlay_001_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_001));
    struct thunk *thunks = alloc_thunks(40);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 40 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_001_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_001_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_001_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_001_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_001_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_001_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_001_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_001_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_001_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_001_SetOverlayGamma, 2, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_001_GetOverlayGamma, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_001_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_001_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_001_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_001_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_001_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_001_GetOverlayVisibility, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_001_SetOverlayVisibility, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_001_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_001_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_001_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_001_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_001_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_001_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_001_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_001_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_001_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_001_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_001_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_001_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_001_IsSystemOverlayVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_001_IsActiveSystemOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess, 2, FALSE, FALSE);
    for (i = 0; i < 40; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_001_FnTable(void *object)
{
    winIVROverlay_IVROverlay_001 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

