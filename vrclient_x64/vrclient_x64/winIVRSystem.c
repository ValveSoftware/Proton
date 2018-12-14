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

#include "cppIVRSystem_IVRSystem_019.h"

typedef struct __winIVRSystem_IVRSystem_019 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_019;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_019 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetProjectionMatrix, 20)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_019_GetProjectionMatrix(winIVRSystem_IVRSystem_019 *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_019_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_019_GetProjectionRaw(winIVRSystem_IVRSystem_019 *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_ComputeDistortion, 24)
bool __thiscall winIVRSystem_IVRSystem_019_ComputeDistortion(winIVRSystem_IVRSystem_019 *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_ComputeDistortion(_this->linux_side, eEye, fU, fV, pDistortionCoordinates);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_019_GetEyeToHeadTransform(winIVRSystem_IVRSystem_019 *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_019_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_019_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_019 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_019_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetDXGIOutputInfo, 12)
void __thiscall winIVRSystem_IVRSystem_019_GetDXGIOutputInfo(winIVRSystem_IVRSystem_019 *_this, int32_t * pnAdapterIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info(cppIVRSystem_IVRSystem_019_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, 19);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetOutputDevice, 24)
void __thiscall winIVRSystem_IVRSystem_019_GetOutputDevice(winIVRSystem_IVRSystem_019 *_this, uint64_t * pnDevice, ETextureType textureType, VkInstance_T * pInstance)
{
    TRACE("%p\n", _this);
    ivrsystem_get_output_device(cppIVRSystem_IVRSystem_019_GetOutputDevice, _this->linux_side, pnDevice, textureType, pInstance, 19);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_IsDisplayOnDesktop, 4)
bool __thiscall winIVRSystem_IVRSystem_019_IsDisplayOnDesktop(winIVRSystem_IVRSystem_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_IsDisplayOnDesktop(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_SetDisplayVisibility, 5)
bool __thiscall winIVRSystem_IVRSystem_019_SetDisplayVisibility(winIVRSystem_IVRSystem_019 *_this, bool bIsVisibleOnDesktop)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_SetDisplayVisibility(_this->linux_side, bIsVisibleOnDesktop);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_019 *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_019_ResetSeatedZeroPose(winIVRSystem_IVRSystem_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_019 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_019 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_019 *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel, 8)
EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel(_this->linux_side, unDeviceId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_ApplyTransform, 28)
void __thiscall winIVRSystem_IVRSystem_019_ApplyTransform(winIVRSystem_IVRSystem_019 *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_ApplyTransform(_this->linux_side, pOutputPose, pTrackedDevicePose, pTransform);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole, 8)
TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole(winIVRSystem_IVRSystem_019 *_this, ETrackedControllerRole unDeviceType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole(_this->linux_side, unDeviceType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex, 8)
ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetTrackedDeviceClass, 8)
ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_019_GetTrackedDeviceClass(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_019_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_019 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty, 36)
uint32_t __thiscall winIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, PropertyTypeTag_t propType, void * pBuffer, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, propType, pBuffer, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_019 *_this, ETrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_PollNextEvent, 16)
bool __thiscall winIVRSystem_IVRSystem_019_PollNextEvent(winIVRSystem_IVRSystem_019 *_this, winVREvent_t_113b * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_PollNextEvent(_this->linux_side, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_PollNextEventWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_019_PollNextEventWithPose(winIVRSystem_IVRSystem_019 *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_113b * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_019 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetHiddenAreaMesh, 16)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_019_GetHiddenAreaMesh(winIVRSystem_IVRSystem_019 *_this, HiddenAreaMesh_t *_r, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_019_GetHiddenAreaMesh(_this->linux_side, eEye, type);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetControllerState, 20)
bool __thiscall winIVRSystem_IVRSystem_019_GetControllerState(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_113b * pControllerState, uint32_t unControllerStateSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetControllerStateWithPose, 32)
bool __thiscall winIVRSystem_IVRSystem_019_GetControllerStateWithPose(winIVRSystem_IVRSystem_019 *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_113b * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_019_TriggerHapticPulse(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_019 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_019 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_IsInputAvailable, 4)
bool __thiscall winIVRSystem_IVRSystem_019_IsInputAvailable(winIVRSystem_IVRSystem_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_IsInputAvailable(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers, 4)
bool __thiscall winIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers(winIVRSystem_IVRSystem_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_ShouldApplicationPause, 4)
bool __thiscall winIVRSystem_IVRSystem_019_ShouldApplicationPause(winIVRSystem_IVRSystem_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_ShouldApplicationPause(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork, 4)
bool __thiscall winIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork(winIVRSystem_IVRSystem_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_019_DriverDebugRequest(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_PerformFirmwareUpdate, 8)
EVRFirmwareError __thiscall winIVRSystem_IVRSystem_019_PerformFirmwareUpdate(winIVRSystem_IVRSystem_019 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_019_PerformFirmwareUpdate(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting, 4)
void __thiscall winIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting(winIVRSystem_IVRSystem_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt, 4)
void __thiscall winIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt(winIVRSystem_IVRSystem_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt(_this->linux_side);
}

extern vtable_ptr winIVRSystem_IVRSystem_019_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_019,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetOutputDevice)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_IsInputAvailable)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_ShouldApplicationPause)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_DriverDebugRequest)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_019 *create_winIVRSystem_IVRSystem_019(void *linux_side)
{
    winIVRSystem_IVRSystem_019 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_019));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_019_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_019(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_019 *create_winIVRSystem_IVRSystem_019_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_019 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_019));
    struct thunk *thunks = alloc_thunks(47);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 47 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_019_GetProjectionMatrix, 4, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_019_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_019_ComputeDistortion, 4, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_019_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_019_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_019_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_019_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_019_GetOutputDevice, 3, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_019_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_019_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_019_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_019_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_019_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_019_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty, 6, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_019_PollNextEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_019_PollNextEventWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_019_GetHiddenAreaMesh, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_019_GetControllerState, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_019_GetControllerStateWithPose, 5, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_019_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_019_IsInputAvailable, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers, 0, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_019_ShouldApplicationPause, 0, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_019_DriverDebugRequest, 4, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRSystem_IVRSystem_019_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt, 0, FALSE, FALSE);
    for (i = 0; i < 47; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_019_FnTable(void *object)
{
    winIVRSystem_IVRSystem_019 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_017.h"

typedef struct __winIVRSystem_IVRSystem_017 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_017;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_017 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetProjectionMatrix, 20)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_017_GetProjectionMatrix(winIVRSystem_IVRSystem_017 *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_017_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_017_GetProjectionRaw(winIVRSystem_IVRSystem_017 *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_ComputeDistortion, 24)
bool __thiscall winIVRSystem_IVRSystem_017_ComputeDistortion(winIVRSystem_IVRSystem_017 *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_ComputeDistortion(_this->linux_side, eEye, fU, fV, pDistortionCoordinates);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_017_GetEyeToHeadTransform(winIVRSystem_IVRSystem_017 *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_017_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_017_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_017 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_017_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetDXGIOutputInfo, 12)
void __thiscall winIVRSystem_IVRSystem_017_GetDXGIOutputInfo(winIVRSystem_IVRSystem_017 *_this, int32_t * pnAdapterIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info(cppIVRSystem_IVRSystem_017_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, 17);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetOutputDevice, 24)
void __thiscall winIVRSystem_IVRSystem_017_GetOutputDevice(winIVRSystem_IVRSystem_017 *_this, uint64_t * pnDevice, ETextureType textureType, VkInstance_T * pInstance)
{
    TRACE("%p\n", _this);
    ivrsystem_get_output_device(cppIVRSystem_IVRSystem_017_GetOutputDevice, _this->linux_side, pnDevice, textureType, pInstance, 17);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_IsDisplayOnDesktop, 4)
bool __thiscall winIVRSystem_IVRSystem_017_IsDisplayOnDesktop(winIVRSystem_IVRSystem_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_IsDisplayOnDesktop(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_SetDisplayVisibility, 5)
bool __thiscall winIVRSystem_IVRSystem_017_SetDisplayVisibility(winIVRSystem_IVRSystem_017 *_this, bool bIsVisibleOnDesktop)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_SetDisplayVisibility(_this->linux_side, bIsVisibleOnDesktop);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_017 *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_017_ResetSeatedZeroPose(winIVRSystem_IVRSystem_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_017 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_017 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_017 *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel, 8)
EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel(_this->linux_side, unDeviceId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_ApplyTransform, 28)
void __thiscall winIVRSystem_IVRSystem_017_ApplyTransform(winIVRSystem_IVRSystem_017 *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_ApplyTransform(_this->linux_side, pOutputPose, pTrackedDevicePose, pTransform);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole, 8)
TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole(winIVRSystem_IVRSystem_017 *_this, ETrackedControllerRole unDeviceType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole(_this->linux_side, unDeviceType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex, 8)
ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetTrackedDeviceClass, 8)
ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_017_GetTrackedDeviceClass(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_017_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_017 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_017 *_this, ETrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_PollNextEvent, 16)
bool __thiscall winIVRSystem_IVRSystem_017_PollNextEvent(winIVRSystem_IVRSystem_017 *_this, winVREvent_t_1011 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_PollNextEvent(_this->linux_side, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_PollNextEventWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_017_PollNextEventWithPose(winIVRSystem_IVRSystem_017 *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_1011 * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_017 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetHiddenAreaMesh, 16)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_017_GetHiddenAreaMesh(winIVRSystem_IVRSystem_017 *_this, HiddenAreaMesh_t *_r, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_017_GetHiddenAreaMesh(_this->linux_side, eEye, type);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetControllerState, 20)
bool __thiscall winIVRSystem_IVRSystem_017_GetControllerState(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1011 * pControllerState, uint32_t unControllerStateSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetControllerStateWithPose, 32)
bool __thiscall winIVRSystem_IVRSystem_017_GetControllerStateWithPose(winIVRSystem_IVRSystem_017 *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1011 * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_017_TriggerHapticPulse(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_017 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_017 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_017_CaptureInputFocus(winIVRSystem_IVRSystem_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_017_ReleaseInputFocus(winIVRSystem_IVRSystem_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_017_DriverDebugRequest(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_PerformFirmwareUpdate, 8)
EVRFirmwareError __thiscall winIVRSystem_IVRSystem_017_PerformFirmwareUpdate(winIVRSystem_IVRSystem_017 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_017_PerformFirmwareUpdate(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting, 4)
void __thiscall winIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting(winIVRSystem_IVRSystem_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt, 4)
void __thiscall winIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt(winIVRSystem_IVRSystem_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt(_this->linux_side);
}

extern vtable_ptr winIVRSystem_IVRSystem_017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_017,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetOutputDevice)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_DriverDebugRequest)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_017 *create_winIVRSystem_IVRSystem_017(void *linux_side)
{
    winIVRSystem_IVRSystem_017 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_017));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_017_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_017(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_017 *create_winIVRSystem_IVRSystem_017_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_017 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_017));
    struct thunk *thunks = alloc_thunks(45);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 45 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_017_GetProjectionMatrix, 4, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_017_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_017_ComputeDistortion, 4, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_017_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_017_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_017_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_017_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_017_GetOutputDevice, 3, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_017_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_017_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_017_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_017_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_017_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_017_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_017_PollNextEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_017_PollNextEventWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_017_GetHiddenAreaMesh, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_017_GetControllerState, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_017_GetControllerStateWithPose, 5, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_017_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_017_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_017_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_017_DriverDebugRequest, 4, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_017_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt, 0, FALSE, FALSE);
    for (i = 0; i < 45; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_017_FnTable(void *object)
{
    winIVRSystem_IVRSystem_017 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_016.h"

typedef struct __winIVRSystem_IVRSystem_016 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_016;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_016 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetProjectionMatrix, 20)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_016_GetProjectionMatrix(winIVRSystem_IVRSystem_016 *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_016_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_016_GetProjectionRaw(winIVRSystem_IVRSystem_016 *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_ComputeDistortion, 24)
bool __thiscall winIVRSystem_IVRSystem_016_ComputeDistortion(winIVRSystem_IVRSystem_016 *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_ComputeDistortion(_this->linux_side, eEye, fU, fV, pDistortionCoordinates);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_016_GetEyeToHeadTransform(winIVRSystem_IVRSystem_016 *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_016_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_016_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_016 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_016_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetDXGIOutputInfo, 12)
void __thiscall winIVRSystem_IVRSystem_016_GetDXGIOutputInfo(winIVRSystem_IVRSystem_016 *_this, int32_t * pnAdapterIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info(cppIVRSystem_IVRSystem_016_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, 16);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetOutputDevice, 16)
void __thiscall winIVRSystem_IVRSystem_016_GetOutputDevice(winIVRSystem_IVRSystem_016 *_this, uint64_t * pnDevice, ETextureType textureType)
{
    TRACE("%p\n", _this);
    ivrsystem_016_get_output_device(cppIVRSystem_IVRSystem_016_GetOutputDevice, _this->linux_side, pnDevice, textureType, 16);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_IsDisplayOnDesktop, 4)
bool __thiscall winIVRSystem_IVRSystem_016_IsDisplayOnDesktop(winIVRSystem_IVRSystem_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_IsDisplayOnDesktop(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_SetDisplayVisibility, 5)
bool __thiscall winIVRSystem_IVRSystem_016_SetDisplayVisibility(winIVRSystem_IVRSystem_016 *_this, bool bIsVisibleOnDesktop)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_SetDisplayVisibility(_this->linux_side, bIsVisibleOnDesktop);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_016 *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_016_ResetSeatedZeroPose(winIVRSystem_IVRSystem_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_016 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_016 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_016 *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel, 8)
EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel(_this->linux_side, unDeviceId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_ApplyTransform, 28)
void __thiscall winIVRSystem_IVRSystem_016_ApplyTransform(winIVRSystem_IVRSystem_016 *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_ApplyTransform(_this->linux_side, pOutputPose, pTrackedDevicePose, pTransform);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole, 8)
TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole(winIVRSystem_IVRSystem_016 *_this, ETrackedControllerRole unDeviceType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole(_this->linux_side, unDeviceType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex, 8)
ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetTrackedDeviceClass, 8)
ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_016_GetTrackedDeviceClass(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_016_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_016 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_016_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_016 *_this, ETrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_PollNextEvent, 16)
bool __thiscall winIVRSystem_IVRSystem_016_PollNextEvent(winIVRSystem_IVRSystem_016 *_this, winVREvent_t_109 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_PollNextEvent(_this->linux_side, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_PollNextEventWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_016_PollNextEventWithPose(winIVRSystem_IVRSystem_016 *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_109 * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_016_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_016 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetHiddenAreaMesh, 16)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_016_GetHiddenAreaMesh(winIVRSystem_IVRSystem_016 *_this, HiddenAreaMesh_t *_r, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_016_GetHiddenAreaMesh(_this->linux_side, eEye, type);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetControllerState, 20)
bool __thiscall winIVRSystem_IVRSystem_016_GetControllerState(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_109 * pControllerState, uint32_t unControllerStateSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetControllerStateWithPose, 32)
bool __thiscall winIVRSystem_IVRSystem_016_GetControllerStateWithPose(winIVRSystem_IVRSystem_016 *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_109 * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_016_TriggerHapticPulse(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_016_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_016 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_016 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_016_CaptureInputFocus(winIVRSystem_IVRSystem_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_016_ReleaseInputFocus(winIVRSystem_IVRSystem_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_016_DriverDebugRequest(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_PerformFirmwareUpdate, 8)
EVRFirmwareError __thiscall winIVRSystem_IVRSystem_016_PerformFirmwareUpdate(winIVRSystem_IVRSystem_016 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_016_PerformFirmwareUpdate(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting, 4)
void __thiscall winIVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting(winIVRSystem_IVRSystem_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt, 4)
void __thiscall winIVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt(winIVRSystem_IVRSystem_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt(_this->linux_side);
}

extern vtable_ptr winIVRSystem_IVRSystem_016_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_016,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetOutputDevice)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_DriverDebugRequest)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_016 *create_winIVRSystem_IVRSystem_016(void *linux_side)
{
    winIVRSystem_IVRSystem_016 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_016));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_016_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_016(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_016 *create_winIVRSystem_IVRSystem_016_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_016 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_016));
    struct thunk *thunks = alloc_thunks(45);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 45 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_016_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_016_GetProjectionMatrix, 4, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_016_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_016_ComputeDistortion, 4, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_016_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_016_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_016_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_016_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_016_GetOutputDevice, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_016_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_016_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_016_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_016_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_016_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_016_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_016_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_016_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_016_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_016_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_016_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_016_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_016_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_016_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_016_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_016_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_016_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_016_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_016_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_016_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_016_PollNextEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_016_PollNextEventWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_016_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_016_GetHiddenAreaMesh, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_016_GetControllerState, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_016_GetControllerStateWithPose, 5, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_016_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_016_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_016_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_016_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_016_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_016_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_016_DriverDebugRequest, 4, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_016_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_016_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRSystem_IVRSystem_016_AcknowledgeQuit_UserPrompt, 0, FALSE, FALSE);
    for (i = 0; i < 45; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_016_FnTable(void *object)
{
    winIVRSystem_IVRSystem_016 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_015.h"

typedef struct __winIVRSystem_IVRSystem_015 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_015;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_015 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetProjectionMatrix, 20)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_015_GetProjectionMatrix(winIVRSystem_IVRSystem_015 *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_015_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_015_GetProjectionRaw(winIVRSystem_IVRSystem_015 *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_ComputeDistortion, 24)
bool __thiscall winIVRSystem_IVRSystem_015_ComputeDistortion(winIVRSystem_IVRSystem_015 *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_ComputeDistortion(_this->linux_side, eEye, fU, fV, pDistortionCoordinates);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_015_GetEyeToHeadTransform(winIVRSystem_IVRSystem_015 *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_015_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_015_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_015 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_015_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetDXGIOutputInfo, 12)
void __thiscall winIVRSystem_IVRSystem_015_GetDXGIOutputInfo(winIVRSystem_IVRSystem_015 *_this, int32_t * pnAdapterIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info(cppIVRSystem_IVRSystem_015_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, 15);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_IsDisplayOnDesktop, 4)
bool __thiscall winIVRSystem_IVRSystem_015_IsDisplayOnDesktop(winIVRSystem_IVRSystem_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_IsDisplayOnDesktop(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_SetDisplayVisibility, 5)
bool __thiscall winIVRSystem_IVRSystem_015_SetDisplayVisibility(winIVRSystem_IVRSystem_015 *_this, bool bIsVisibleOnDesktop)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_SetDisplayVisibility(_this->linux_side, bIsVisibleOnDesktop);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_015 *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_015_ResetSeatedZeroPose(winIVRSystem_IVRSystem_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_015 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_015 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_015 *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel, 8)
EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel(_this->linux_side, unDeviceId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_ApplyTransform, 28)
void __thiscall winIVRSystem_IVRSystem_015_ApplyTransform(winIVRSystem_IVRSystem_015 *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_ApplyTransform(_this->linux_side, pOutputPose, pTrackedDevicePose, pTransform);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole, 8)
TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole(winIVRSystem_IVRSystem_015 *_this, ETrackedControllerRole unDeviceType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole(_this->linux_side, unDeviceType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex, 8)
ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetTrackedDeviceClass, 8)
ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_015_GetTrackedDeviceClass(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_015_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_015 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_015 *_this, ETrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_PollNextEvent, 16)
bool __thiscall winIVRSystem_IVRSystem_015_PollNextEvent(winIVRSystem_IVRSystem_015 *_this, winVREvent_t_107 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_PollNextEvent(_this->linux_side, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_PollNextEventWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_015_PollNextEventWithPose(winIVRSystem_IVRSystem_015 *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_107 * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_015 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetHiddenAreaMesh, 16)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_015_GetHiddenAreaMesh(winIVRSystem_IVRSystem_015 *_this, HiddenAreaMesh_t *_r, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_015_GetHiddenAreaMesh(_this->linux_side, eEye, type);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetControllerState, 20)
bool __thiscall winIVRSystem_IVRSystem_015_GetControllerState(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_107 * pControllerState, uint32_t unControllerStateSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetControllerStateWithPose, 32)
bool __thiscall winIVRSystem_IVRSystem_015_GetControllerStateWithPose(winIVRSystem_IVRSystem_015 *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_107 * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_015_TriggerHapticPulse(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_015 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_015 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_015_CaptureInputFocus(winIVRSystem_IVRSystem_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_015_ReleaseInputFocus(winIVRSystem_IVRSystem_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_015 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_015_DriverDebugRequest(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_PerformFirmwareUpdate, 8)
EVRFirmwareError __thiscall winIVRSystem_IVRSystem_015_PerformFirmwareUpdate(winIVRSystem_IVRSystem_015 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_015_PerformFirmwareUpdate(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting, 4)
void __thiscall winIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting(winIVRSystem_IVRSystem_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt, 4)
void __thiscall winIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt(winIVRSystem_IVRSystem_015 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt(_this->linux_side);
}

extern vtable_ptr winIVRSystem_IVRSystem_015_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_015,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_DriverDebugRequest)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_015 *create_winIVRSystem_IVRSystem_015(void *linux_side)
{
    winIVRSystem_IVRSystem_015 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_015));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_015_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_015(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_015 *create_winIVRSystem_IVRSystem_015_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_015 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_015));
    struct thunk *thunks = alloc_thunks(44);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 44 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_015_GetProjectionMatrix, 4, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_015_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_015_ComputeDistortion, 4, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_015_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_015_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_015_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_015_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_015_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_015_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_015_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_015_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_015_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_015_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_015_PollNextEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_015_PollNextEventWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_015_GetHiddenAreaMesh, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_015_GetControllerState, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_015_GetControllerStateWithPose, 5, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_015_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_015_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_015_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_015_DriverDebugRequest, 4, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_015_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt, 0, FALSE, FALSE);
    for (i = 0; i < 44; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_015_FnTable(void *object)
{
    winIVRSystem_IVRSystem_015 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_014.h"

typedef struct __winIVRSystem_IVRSystem_014 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_014;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_014 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetProjectionMatrix, 24)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_014_GetProjectionMatrix(winIVRSystem_IVRSystem_014 *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_014_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ, eProjType);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_014_GetProjectionRaw(winIVRSystem_IVRSystem_014 *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_ComputeDistortion, 24)
bool __thiscall winIVRSystem_IVRSystem_014_ComputeDistortion(winIVRSystem_IVRSystem_014 *_this, EVREye eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_ComputeDistortion(_this->linux_side, eEye, fU, fV, pDistortionCoordinates);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_014_GetEyeToHeadTransform(winIVRSystem_IVRSystem_014 *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_014_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_014_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_014 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_014_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetDXGIOutputInfo, 12)
void __thiscall winIVRSystem_IVRSystem_014_GetDXGIOutputInfo(winIVRSystem_IVRSystem_014 *_this, int32_t * pnAdapterIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info(cppIVRSystem_IVRSystem_014_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, 14);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_IsDisplayOnDesktop, 4)
bool __thiscall winIVRSystem_IVRSystem_014_IsDisplayOnDesktop(winIVRSystem_IVRSystem_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_IsDisplayOnDesktop(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_SetDisplayVisibility, 5)
bool __thiscall winIVRSystem_IVRSystem_014_SetDisplayVisibility(winIVRSystem_IVRSystem_014 *_this, bool bIsVisibleOnDesktop)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_SetDisplayVisibility(_this->linux_side, bIsVisibleOnDesktop);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_014 *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_014_ResetSeatedZeroPose(winIVRSystem_IVRSystem_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_014 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_014 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_014 *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel, 8)
EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel(_this->linux_side, unDeviceId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_ApplyTransform, 28)
void __thiscall winIVRSystem_IVRSystem_014_ApplyTransform(winIVRSystem_IVRSystem_014 *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_ApplyTransform(_this->linux_side, pOutputPose, pTrackedDevicePose, pTransform);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole, 8)
TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole(winIVRSystem_IVRSystem_014 *_this, ETrackedControllerRole unDeviceType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole(_this->linux_side, unDeviceType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex, 8)
ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetTrackedDeviceClass, 8)
ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_014_GetTrackedDeviceClass(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_014_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_014 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_014 *_this, ETrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_PollNextEvent, 16)
bool __thiscall winIVRSystem_IVRSystem_014_PollNextEvent(winIVRSystem_IVRSystem_014 *_this, winVREvent_t_104 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_PollNextEvent(_this->linux_side, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_PollNextEventWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_014_PollNextEventWithPose(winIVRSystem_IVRSystem_014 *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_104 * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_014 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetHiddenAreaMesh, 16)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_014_GetHiddenAreaMesh(winIVRSystem_IVRSystem_014 *_this, HiddenAreaMesh_t *_r, EVREye eEye, EHiddenAreaMeshType type)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_014_GetHiddenAreaMesh(_this->linux_side, eEye, type);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetControllerState, 20)
bool __thiscall winIVRSystem_IVRSystem_014_GetControllerState(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_104 * pControllerState, uint32_t unControllerStateSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState, unControllerStateSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetControllerStateWithPose, 32)
bool __thiscall winIVRSystem_IVRSystem_014_GetControllerStateWithPose(winIVRSystem_IVRSystem_014 *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_104 * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_014_TriggerHapticPulse(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_014 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_014 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_014_CaptureInputFocus(winIVRSystem_IVRSystem_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_014_ReleaseInputFocus(winIVRSystem_IVRSystem_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_014_DriverDebugRequest(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_PerformFirmwareUpdate, 8)
EVRFirmwareError __thiscall winIVRSystem_IVRSystem_014_PerformFirmwareUpdate(winIVRSystem_IVRSystem_014 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_014_PerformFirmwareUpdate(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting, 4)
void __thiscall winIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting(winIVRSystem_IVRSystem_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt, 4)
void __thiscall winIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt(winIVRSystem_IVRSystem_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt(_this->linux_side);
}

extern vtable_ptr winIVRSystem_IVRSystem_014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_014,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_DriverDebugRequest)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_014 *create_winIVRSystem_IVRSystem_014(void *linux_side)
{
    winIVRSystem_IVRSystem_014 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_014));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_014_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_014(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_014 *create_winIVRSystem_IVRSystem_014_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_014 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_014));
    struct thunk *thunks = alloc_thunks(44);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 44 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_014_GetProjectionMatrix, 5, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_014_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_014_ComputeDistortion, 4, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_014_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_014_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_014_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_014_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_014_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_014_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_014_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_014_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_014_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_014_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_014_PollNextEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_014_PollNextEventWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_014_GetHiddenAreaMesh, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_014_GetControllerState, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_014_GetControllerStateWithPose, 5, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_014_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_014_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_014_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_014_DriverDebugRequest, 4, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_014_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt, 0, FALSE, FALSE);
    for (i = 0; i < 44; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_014_FnTable(void *object)
{
    winIVRSystem_IVRSystem_014 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_012.h"

typedef struct __winIVRSystem_IVRSystem_012 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_012;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_012 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetProjectionMatrix, 24)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_012_GetProjectionMatrix(winIVRSystem_IVRSystem_012 *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_012_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ, eProjType);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_012_GetProjectionRaw(winIVRSystem_IVRSystem_012 *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_ComputeDistortion, 20)
DistortionCoordinates_t *__thiscall winIVRSystem_IVRSystem_012_ComputeDistortion(winIVRSystem_IVRSystem_012 *_this, DistortionCoordinates_t *_r, EVREye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_012_ComputeDistortion(_this->linux_side, eEye, fU, fV);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_012_GetEyeToHeadTransform(winIVRSystem_IVRSystem_012 *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_012_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_012_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_012 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_012_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetDXGIOutputInfo, 12)
void __thiscall winIVRSystem_IVRSystem_012_GetDXGIOutputInfo(winIVRSystem_IVRSystem_012 *_this, int32_t * pnAdapterIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info(cppIVRSystem_IVRSystem_012_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, 12);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_IsDisplayOnDesktop, 4)
bool __thiscall winIVRSystem_IVRSystem_012_IsDisplayOnDesktop(winIVRSystem_IVRSystem_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_IsDisplayOnDesktop(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_SetDisplayVisibility, 5)
bool __thiscall winIVRSystem_IVRSystem_012_SetDisplayVisibility(winIVRSystem_IVRSystem_012 *_this, bool bIsVisibleOnDesktop)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_SetDisplayVisibility(_this->linux_side, bIsVisibleOnDesktop);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_012 *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_012_ResetSeatedZeroPose(winIVRSystem_IVRSystem_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_012 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_012 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_012 *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel, 8)
EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel(_this->linux_side, unDeviceId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_ApplyTransform, 28)
void __thiscall winIVRSystem_IVRSystem_012_ApplyTransform(winIVRSystem_IVRSystem_012 *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_ApplyTransform(_this->linux_side, pOutputPose, pTrackedDevicePose, pTransform);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole, 8)
TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole(winIVRSystem_IVRSystem_012 *_this, ETrackedControllerRole unDeviceType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole(_this->linux_side, unDeviceType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex, 8)
ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetTrackedDeviceClass, 8)
ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_012_GetTrackedDeviceClass(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_012_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_012 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_012 *_this, ETrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_PollNextEvent, 16)
bool __thiscall winIVRSystem_IVRSystem_012_PollNextEvent(winIVRSystem_IVRSystem_012 *_this, winVREvent_t_103 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_PollNextEvent(_this->linux_side, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_PollNextEventWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_012_PollNextEventWithPose(winIVRSystem_IVRSystem_012 *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_103 * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_012 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetHiddenAreaMesh, 12)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_012_GetHiddenAreaMesh(winIVRSystem_IVRSystem_012 *_this, HiddenAreaMesh_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_012_GetHiddenAreaMesh(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetControllerState, 16)
bool __thiscall winIVRSystem_IVRSystem_012_GetControllerState(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_103 * pControllerState)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetControllerStateWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_012_GetControllerStateWithPose(winIVRSystem_IVRSystem_012 *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_103 * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_012_TriggerHapticPulse(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_012 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_012 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_012_CaptureInputFocus(winIVRSystem_IVRSystem_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_012_ReleaseInputFocus(winIVRSystem_IVRSystem_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_012_DriverDebugRequest(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_PerformFirmwareUpdate, 8)
EVRFirmwareError __thiscall winIVRSystem_IVRSystem_012_PerformFirmwareUpdate(winIVRSystem_IVRSystem_012 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_012_PerformFirmwareUpdate(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting, 4)
void __thiscall winIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting(winIVRSystem_IVRSystem_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt, 4)
void __thiscall winIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt(winIVRSystem_IVRSystem_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt(_this->linux_side);
}

extern vtable_ptr winIVRSystem_IVRSystem_012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_012,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_DriverDebugRequest)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_012 *create_winIVRSystem_IVRSystem_012(void *linux_side)
{
    winIVRSystem_IVRSystem_012 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_012));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_012_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_012(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_012 *create_winIVRSystem_IVRSystem_012_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_012 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_012));
    struct thunk *thunks = alloc_thunks(44);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 44 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_012_GetProjectionMatrix, 5, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_012_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_012_ComputeDistortion, 4, TRUE, TRUE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_012_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_012_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_012_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_012_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_012_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_012_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_012_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_012_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_012_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_012_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_012_PollNextEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_012_PollNextEventWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_012_GetHiddenAreaMesh, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_012_GetControllerState, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_012_GetControllerStateWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_012_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_012_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_012_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_012_DriverDebugRequest, 4, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_012_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt, 0, FALSE, FALSE);
    for (i = 0; i < 44; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_012_FnTable(void *object)
{
    winIVRSystem_IVRSystem_012 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_011.h"

typedef struct __winIVRSystem_IVRSystem_011 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_011;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_011 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetProjectionMatrix, 24)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_011_GetProjectionMatrix(winIVRSystem_IVRSystem_011 *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_011_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ, eProjType);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_011_GetProjectionRaw(winIVRSystem_IVRSystem_011 *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_ComputeDistortion, 20)
DistortionCoordinates_t *__thiscall winIVRSystem_IVRSystem_011_ComputeDistortion(winIVRSystem_IVRSystem_011 *_this, DistortionCoordinates_t *_r, EVREye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_011_ComputeDistortion(_this->linux_side, eEye, fU, fV);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_011_GetEyeToHeadTransform(winIVRSystem_IVRSystem_011 *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_011_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_011_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_011 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_011_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetDXGIOutputInfo, 12)
void __thiscall winIVRSystem_IVRSystem_011_GetDXGIOutputInfo(winIVRSystem_IVRSystem_011 *_this, int32_t * pnAdapterIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info(cppIVRSystem_IVRSystem_011_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, 11);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_IsDisplayOnDesktop, 4)
bool __thiscall winIVRSystem_IVRSystem_011_IsDisplayOnDesktop(winIVRSystem_IVRSystem_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_IsDisplayOnDesktop(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_SetDisplayVisibility, 5)
bool __thiscall winIVRSystem_IVRSystem_011_SetDisplayVisibility(winIVRSystem_IVRSystem_011 *_this, bool bIsVisibleOnDesktop)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_SetDisplayVisibility(_this->linux_side, bIsVisibleOnDesktop);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_011 *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_011_ResetSeatedZeroPose(winIVRSystem_IVRSystem_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_011 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_011 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_011 *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel, 8)
EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel(_this->linux_side, unDeviceId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_ApplyTransform, 28)
void __thiscall winIVRSystem_IVRSystem_011_ApplyTransform(winIVRSystem_IVRSystem_011 *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_ApplyTransform(_this->linux_side, pOutputPose, pTrackedDevicePose, pTransform);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole, 8)
TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole(winIVRSystem_IVRSystem_011 *_this, ETrackedControllerRole unDeviceType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole(_this->linux_side, unDeviceType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex, 8)
ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetTrackedDeviceClass, 8)
ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_011_GetTrackedDeviceClass(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_011_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_011 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_011 *_this, ETrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_PollNextEvent, 16)
bool __thiscall winIVRSystem_IVRSystem_011_PollNextEvent(winIVRSystem_IVRSystem_011 *_this, winVREvent_t_0918 * pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_PollNextEvent(_this->linux_side, pEvent, uncbVREvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_PollNextEventWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_011_PollNextEventWithPose(winIVRSystem_IVRSystem_011 *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_0918 * pEvent, uint32_t uncbVREvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_011 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetHiddenAreaMesh, 12)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_011_GetHiddenAreaMesh(winIVRSystem_IVRSystem_011 *_this, HiddenAreaMesh_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_011_GetHiddenAreaMesh(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetControllerState, 16)
bool __thiscall winIVRSystem_IVRSystem_011_GetControllerState(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0918 * pControllerState)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetControllerStateWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_011_GetControllerStateWithPose(winIVRSystem_IVRSystem_011 *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0918 * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_011_TriggerHapticPulse(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_011 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_011 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_011_CaptureInputFocus(winIVRSystem_IVRSystem_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_011_ReleaseInputFocus(winIVRSystem_IVRSystem_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_011_DriverDebugRequest(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_PerformFirmwareUpdate, 8)
EVRFirmwareError __thiscall winIVRSystem_IVRSystem_011_PerformFirmwareUpdate(winIVRSystem_IVRSystem_011 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_011_PerformFirmwareUpdate(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting, 4)
void __thiscall winIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting(winIVRSystem_IVRSystem_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt, 4)
void __thiscall winIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt(winIVRSystem_IVRSystem_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_PerformanceTestEnableCapture, 5)
void __thiscall winIVRSystem_IVRSystem_011_PerformanceTestEnableCapture(winIVRSystem_IVRSystem_011 *_this, bool bEnable)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_PerformanceTestEnableCapture(_this->linux_side, bEnable);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange, 8)
void __thiscall winIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange(winIVRSystem_IVRSystem_011 *_this, int nFidelityLevel)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange(_this->linux_side, nFidelityLevel);
}

extern vtable_ptr winIVRSystem_IVRSystem_011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_011,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_DriverDebugRequest)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_PerformanceTestEnableCapture)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_011 *create_winIVRSystem_IVRSystem_011(void *linux_side)
{
    winIVRSystem_IVRSystem_011 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_011));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_011_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_011(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_011 *create_winIVRSystem_IVRSystem_011_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_011 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_011));
    struct thunk *thunks = alloc_thunks(46);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 46 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_011_GetProjectionMatrix, 5, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_011_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_011_ComputeDistortion, 4, TRUE, TRUE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_011_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_011_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_011_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_011_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_011_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_011_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_011_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_011_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_011_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_011_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_011_PollNextEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_011_PollNextEventWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_011_GetHiddenAreaMesh, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_011_GetControllerState, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_011_GetControllerStateWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_011_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_011_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_011_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_011_DriverDebugRequest, 4, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_011_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRSystem_IVRSystem_011_PerformanceTestEnableCapture, 1, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange, 1, FALSE, FALSE);
    for (i = 0; i < 46; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_011_FnTable(void *object)
{
    winIVRSystem_IVRSystem_011 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_010.h"

typedef struct __winIVRSystem_IVRSystem_010 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_010;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_010 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetProjectionMatrix, 24)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_010_GetProjectionMatrix(winIVRSystem_IVRSystem_010 *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_010_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ, eProjType);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_010_GetProjectionRaw(winIVRSystem_IVRSystem_010 *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_ComputeDistortion, 20)
DistortionCoordinates_t *__thiscall winIVRSystem_IVRSystem_010_ComputeDistortion(winIVRSystem_IVRSystem_010 *_this, DistortionCoordinates_t *_r, EVREye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_010_ComputeDistortion(_this->linux_side, eEye, fU, fV);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_010_GetEyeToHeadTransform(winIVRSystem_IVRSystem_010 *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_010_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_010_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_010 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_010_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetDXGIOutputInfo, 12)
void __thiscall winIVRSystem_IVRSystem_010_GetDXGIOutputInfo(winIVRSystem_IVRSystem_010 *_this, int32_t * pnAdapterIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info(cppIVRSystem_IVRSystem_010_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, 10);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_IsDisplayOnDesktop, 4)
bool __thiscall winIVRSystem_IVRSystem_010_IsDisplayOnDesktop(winIVRSystem_IVRSystem_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_IsDisplayOnDesktop(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_SetDisplayVisibility, 5)
bool __thiscall winIVRSystem_IVRSystem_010_SetDisplayVisibility(winIVRSystem_IVRSystem_010 *_this, bool bIsVisibleOnDesktop)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_SetDisplayVisibility(_this->linux_side, bIsVisibleOnDesktop);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_010 *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_010_ResetSeatedZeroPose(winIVRSystem_IVRSystem_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_010 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_010 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_010 *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel, 8)
EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel(_this->linux_side, unDeviceId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_ApplyTransform, 28)
void __thiscall winIVRSystem_IVRSystem_010_ApplyTransform(winIVRSystem_IVRSystem_010 *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_ApplyTransform(_this->linux_side, pOutputPose, pTrackedDevicePose, pTransform);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole, 8)
TrackedDeviceIndex_t __thiscall winIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole(winIVRSystem_IVRSystem_010 *_this, ETrackedControllerRole unDeviceType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole(_this->linux_side, unDeviceType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex, 8)
ETrackedControllerRole __thiscall winIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetTrackedDeviceClass, 8)
ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_010_GetTrackedDeviceClass(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_010_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_010 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_010 *_this, ETrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_PollNextEvent, 12)
bool __thiscall winIVRSystem_IVRSystem_010_PollNextEvent(winIVRSystem_IVRSystem_010 *_this, winVREvent_t_0914 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_PollNextEvent(_this->linux_side, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_PollNextEventWithPose, 24)
bool __thiscall winIVRSystem_IVRSystem_010_PollNextEventWithPose(winIVRSystem_IVRSystem_010 *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_0914 * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_010 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetHiddenAreaMesh, 12)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_010_GetHiddenAreaMesh(winIVRSystem_IVRSystem_010 *_this, HiddenAreaMesh_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_010_GetHiddenAreaMesh(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetControllerState, 16)
bool __thiscall winIVRSystem_IVRSystem_010_GetControllerState(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0914 * pControllerState)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetControllerStateWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_010_GetControllerStateWithPose(winIVRSystem_IVRSystem_010 *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0914 * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_010_TriggerHapticPulse(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_010 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_010 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_010_CaptureInputFocus(winIVRSystem_IVRSystem_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_010_ReleaseInputFocus(winIVRSystem_IVRSystem_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_010_DriverDebugRequest(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_PerformFirmwareUpdate, 8)
EVRFirmwareError __thiscall winIVRSystem_IVRSystem_010_PerformFirmwareUpdate(winIVRSystem_IVRSystem_010 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_010_PerformFirmwareUpdate(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting, 4)
void __thiscall winIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting(winIVRSystem_IVRSystem_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt, 4)
void __thiscall winIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt(winIVRSystem_IVRSystem_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_PerformanceTestEnableCapture, 5)
void __thiscall winIVRSystem_IVRSystem_010_PerformanceTestEnableCapture(winIVRSystem_IVRSystem_010 *_this, bool bEnable)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_PerformanceTestEnableCapture(_this->linux_side, bEnable);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange, 8)
void __thiscall winIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange(winIVRSystem_IVRSystem_010 *_this, int nFidelityLevel)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange(_this->linux_side, nFidelityLevel);
}

extern vtable_ptr winIVRSystem_IVRSystem_010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_010,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_DriverDebugRequest)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_PerformanceTestEnableCapture)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_010 *create_winIVRSystem_IVRSystem_010(void *linux_side)
{
    winIVRSystem_IVRSystem_010 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_010));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_010_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_010(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_010 *create_winIVRSystem_IVRSystem_010_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_010 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_010));
    struct thunk *thunks = alloc_thunks(46);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 46 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_010_GetProjectionMatrix, 5, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_010_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_010_ComputeDistortion, 4, TRUE, TRUE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_010_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_010_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_010_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_010_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_010_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_010_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_010_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_010_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_010_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_010_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_010_PollNextEvent, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_010_PollNextEventWithPose, 3, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_010_GetHiddenAreaMesh, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_010_GetControllerState, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_010_GetControllerStateWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_010_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_010_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_010_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_010_DriverDebugRequest, 4, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_010_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVRSystem_IVRSystem_010_PerformanceTestEnableCapture, 1, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange, 1, FALSE, FALSE);
    for (i = 0; i < 46; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_010_FnTable(void *object)
{
    winIVRSystem_IVRSystem_010 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_009.h"

typedef struct __winIVRSystem_IVRSystem_009 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_009;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_009 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetProjectionMatrix, 24)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_009_GetProjectionMatrix(winIVRSystem_IVRSystem_009 *_this, HmdMatrix44_t *_r, EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_009_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ, eProjType);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_009_GetProjectionRaw(winIVRSystem_IVRSystem_009 *_this, EVREye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_ComputeDistortion, 20)
DistortionCoordinates_t *__thiscall winIVRSystem_IVRSystem_009_ComputeDistortion(winIVRSystem_IVRSystem_009 *_this, DistortionCoordinates_t *_r, EVREye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_009_ComputeDistortion(_this->linux_side, eEye, fU, fV);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_009_GetEyeToHeadTransform(winIVRSystem_IVRSystem_009 *_this, HmdMatrix34_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_009_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_009_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_009 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_009_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetDXGIOutputInfo, 12)
void __thiscall winIVRSystem_IVRSystem_009_GetDXGIOutputInfo(winIVRSystem_IVRSystem_009 *_this, int32_t * pnAdapterIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info(cppIVRSystem_IVRSystem_009_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, 9);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_IsDisplayOnDesktop, 4)
bool __thiscall winIVRSystem_IVRSystem_009_IsDisplayOnDesktop(winIVRSystem_IVRSystem_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_IsDisplayOnDesktop(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_SetDisplayVisibility, 5)
bool __thiscall winIVRSystem_IVRSystem_009_SetDisplayVisibility(winIVRSystem_IVRSystem_009 *_this, bool bIsVisibleOnDesktop)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_SetDisplayVisibility(_this->linux_side, bIsVisibleOnDesktop);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_009 *_this, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_009_ResetSeatedZeroPose(winIVRSystem_IVRSystem_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_009 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_009 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_009 *_this, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel, 8)
EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unDeviceId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel(_this->linux_side, unDeviceId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_ApplyTransform, 28)
void __thiscall winIVRSystem_IVRSystem_009_ApplyTransform(winIVRSystem_IVRSystem_009 *_this, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pTrackedDevicePose, HmdMatrix34_t * pTransform)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_ApplyTransform(_this->linux_side, pOutputPose, pTrackedDevicePose, pTransform);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetTrackedDeviceClass, 8)
ETrackedDeviceClass __thiscall winIVRSystem_IVRSystem_009_GetTrackedDeviceClass(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_009_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_009 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, ETrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_009 *_this, ETrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_PollNextEvent, 12)
bool __thiscall winIVRSystem_IVRSystem_009_PollNextEvent(winIVRSystem_IVRSystem_009 *_this, winVREvent_t_0912 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_PollNextEvent(_this->linux_side, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_PollNextEventWithPose, 24)
bool __thiscall winIVRSystem_IVRSystem_009_PollNextEventWithPose(winIVRSystem_IVRSystem_009 *_this, ETrackingUniverseOrigin eOrigin, winVREvent_t_0912 * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_009 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetHiddenAreaMesh, 12)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_009_GetHiddenAreaMesh(winIVRSystem_IVRSystem_009 *_this, HiddenAreaMesh_t *_r, EVREye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_009_GetHiddenAreaMesh(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetControllerState, 16)
bool __thiscall winIVRSystem_IVRSystem_009_GetControllerState(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0912 * pControllerState)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetControllerStateWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_009_GetControllerStateWithPose(winIVRSystem_IVRSystem_009 *_this, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0912 * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_009_TriggerHapticPulse(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_009 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_009 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_009_CaptureInputFocus(winIVRSystem_IVRSystem_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_009_ReleaseInputFocus(winIVRSystem_IVRSystem_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_009 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_009_DriverDebugRequest(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_PerformFirmwareUpdate, 8)
EVRFirmwareError __thiscall winIVRSystem_IVRSystem_009_PerformFirmwareUpdate(winIVRSystem_IVRSystem_009 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_009_PerformFirmwareUpdate(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting, 4)
void __thiscall winIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting(winIVRSystem_IVRSystem_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt, 4)
void __thiscall winIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt(winIVRSystem_IVRSystem_009 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt(_this->linux_side);
}

extern vtable_ptr winIVRSystem_IVRSystem_009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_009,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_SetDisplayVisibility)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_ApplyTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_DriverDebugRequest)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_009 *create_winIVRSystem_IVRSystem_009(void *linux_side)
{
    winIVRSystem_IVRSystem_009 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_009));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_009_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_009(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_009 *create_winIVRSystem_IVRSystem_009_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_009 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_009));
    struct thunk *thunks = alloc_thunks(42);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 42 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_009_GetProjectionMatrix, 5, TRUE, TRUE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_009_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_009_ComputeDistortion, 4, TRUE, TRUE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_009_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_009_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_009_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_009_GetDXGIOutputInfo, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_009_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_009_SetDisplayVisibility, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_009_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_009_ApplyTransform, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_009_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_009_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_009_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_009_PollNextEvent, 1, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_009_PollNextEventWithPose, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_009_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_009_GetHiddenAreaMesh, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_009_GetControllerState, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_009_GetControllerStateWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_009_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_009_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_009_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_009_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_009_DriverDebugRequest, 4, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_009_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting, 0, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt, 0, FALSE, FALSE);
    for (i = 0; i < 42; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_009_FnTable(void *object)
{
    winIVRSystem_IVRSystem_009 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_006.h"

typedef struct __winIVRSystem_IVRSystem_006 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_006;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetWindowBounds, 36)
void __thiscall winIVRSystem_IVRSystem_006_GetWindowBounds(winIVRSystem_IVRSystem_006 *_this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_GetWindowBounds(_this->linux_side, pnX, pnY, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_006 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetEyeOutputViewport, 40)
void __thiscall winIVRSystem_IVRSystem_006_GetEyeOutputViewport(winIVRSystem_IVRSystem_006 *_this, Hmd_Eye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_GetEyeOutputViewport(_this->linux_side, eEye, pnX, pnY, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetProjectionMatrix, 24)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_006_GetProjectionMatrix(winIVRSystem_IVRSystem_006 *_this, HmdMatrix44_t *_r, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_006_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ, eProjType);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_006_GetProjectionRaw(winIVRSystem_IVRSystem_006 *_this, Hmd_Eye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_ComputeDistortion, 20)
DistortionCoordinates_t *__thiscall winIVRSystem_IVRSystem_006_ComputeDistortion(winIVRSystem_IVRSystem_006 *_this, DistortionCoordinates_t *_r, Hmd_Eye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_006_ComputeDistortion(_this->linux_side, eEye, fU, fV);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_006_GetEyeToHeadTransform(winIVRSystem_IVRSystem_006 *_this, HmdMatrix34_t *_r, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_006_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_006_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_006 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_006_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetDXGIOutputInfo, 20)
void __thiscall winIVRSystem_IVRSystem_006_GetDXGIOutputInfo(winIVRSystem_IVRSystem_006 *_this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info2(cppIVRSystem_IVRSystem_006_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, pnAdapterOutputIndex, 6);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_AttachToWindow, 12)
bool __thiscall winIVRSystem_IVRSystem_006_AttachToWindow(winIVRSystem_IVRSystem_006 *_this, void * hWnd)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_AttachToWindow(_this->linux_side, hWnd);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_006 *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_006_ResetSeatedZeroPose(winIVRSystem_IVRSystem_006 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_006 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_006 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel, 8)
EDeviceActivityLevel __thiscall winIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unDeviceId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel(_this->linux_side, unDeviceId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetTrackedDeviceClass, 8)
TrackedDeviceClass __thiscall winIVRSystem_IVRSystem_006_GetTrackedDeviceClass(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_006_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_006 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_006 *_this, TrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_PollNextEvent, 12)
bool __thiscall winIVRSystem_IVRSystem_006_PollNextEvent(winIVRSystem_IVRSystem_006 *_this, winVREvent_t_0910 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_PollNextEvent(_this->linux_side, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_PollNextEventWithPose, 24)
bool __thiscall winIVRSystem_IVRSystem_006_PollNextEventWithPose(winIVRSystem_IVRSystem_006 *_this, TrackingUniverseOrigin eOrigin, winVREvent_t_0910 * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_006 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetHiddenAreaMesh, 12)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_006_GetHiddenAreaMesh(winIVRSystem_IVRSystem_006 *_this, HiddenAreaMesh_t *_r, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_006_GetHiddenAreaMesh(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetControllerState, 16)
bool __thiscall winIVRSystem_IVRSystem_006_GetControllerState(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0910 * pControllerState)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetControllerStateWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_006_GetControllerStateWithPose(winIVRSystem_IVRSystem_006 *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_0910 * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_006_TriggerHapticPulse(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_006 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_006 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_006_CaptureInputFocus(winIVRSystem_IVRSystem_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_006_ReleaseInputFocus(winIVRSystem_IVRSystem_006 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_006_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_006_DriverDebugRequest(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_PerformFirmwareUpdate, 8)
VRFirmwareError __thiscall winIVRSystem_IVRSystem_006_PerformFirmwareUpdate(winIVRSystem_IVRSystem_006 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_PerformFirmwareUpdate(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_IsDisplayOnDesktop, 4)
bool __thiscall winIVRSystem_IVRSystem_006_IsDisplayOnDesktop(winIVRSystem_IVRSystem_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_IsDisplayOnDesktop(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_006_SetDisplayVisibility, 5)
bool __thiscall winIVRSystem_IVRSystem_006_SetDisplayVisibility(winIVRSystem_IVRSystem_006 *_this, bool bIsVisibleOnDesktop)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_006_SetDisplayVisibility(_this->linux_side, bIsVisibleOnDesktop);
}

extern vtable_ptr winIVRSystem_IVRSystem_006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_006,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetWindowBounds)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetEyeOutputViewport)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_AttachToWindow)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_DriverDebugRequest)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_PerformFirmwareUpdate)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_IsDisplayOnDesktop)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_006_SetDisplayVisibility)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_006 *create_winIVRSystem_IVRSystem_006(void *linux_side)
{
    winIVRSystem_IVRSystem_006 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_006));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_006_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_006(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_006 *create_winIVRSystem_IVRSystem_006_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_006 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_006));
    struct thunk *thunks = alloc_thunks(42);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 42 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_006_GetWindowBounds, 4, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_006_GetEyeOutputViewport, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_006_GetProjectionMatrix, 5, TRUE, TRUE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_006_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_006_ComputeDistortion, 4, TRUE, TRUE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_006_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_006_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_006_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_006_GetDXGIOutputInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_006_AttachToWindow, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_006_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_006_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_006_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_006_PollNextEvent, 1, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_006_PollNextEventWithPose, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_006_GetHiddenAreaMesh, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_006_GetControllerState, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_006_GetControllerStateWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_006_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_006_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_006_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVRSystem_IVRSystem_006_DriverDebugRequest, 4, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVRSystem_IVRSystem_006_PerformFirmwareUpdate, 1, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVRSystem_IVRSystem_006_IsDisplayOnDesktop, 0, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVRSystem_IVRSystem_006_SetDisplayVisibility, 1, FALSE, FALSE);
    for (i = 0; i < 42; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_006_FnTable(void *object)
{
    winIVRSystem_IVRSystem_006 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_005.h"

typedef struct __winIVRSystem_IVRSystem_005 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_005;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetWindowBounds, 36)
void __thiscall winIVRSystem_IVRSystem_005_GetWindowBounds(winIVRSystem_IVRSystem_005 *_this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_GetWindowBounds(_this->linux_side, pnX, pnY, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_005 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetEyeOutputViewport, 40)
void __thiscall winIVRSystem_IVRSystem_005_GetEyeOutputViewport(winIVRSystem_IVRSystem_005 *_this, Hmd_Eye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_GetEyeOutputViewport(_this->linux_side, eEye, pnX, pnY, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetProjectionMatrix, 24)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_005_GetProjectionMatrix(winIVRSystem_IVRSystem_005 *_this, HmdMatrix44_t *_r, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_005_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ, eProjType);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_005_GetProjectionRaw(winIVRSystem_IVRSystem_005 *_this, Hmd_Eye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_ComputeDistortion, 20)
DistortionCoordinates_t *__thiscall winIVRSystem_IVRSystem_005_ComputeDistortion(winIVRSystem_IVRSystem_005 *_this, DistortionCoordinates_t *_r, Hmd_Eye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_005_ComputeDistortion(_this->linux_side, eEye, fU, fV);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_005_GetEyeToHeadTransform(winIVRSystem_IVRSystem_005 *_this, HmdMatrix34_t *_r, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_005_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_005_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_005 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_005_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetDXGIOutputInfo, 20)
void __thiscall winIVRSystem_IVRSystem_005_GetDXGIOutputInfo(winIVRSystem_IVRSystem_005 *_this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info2(cppIVRSystem_IVRSystem_005_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, pnAdapterOutputIndex, 5);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_AttachToWindow, 12)
bool __thiscall winIVRSystem_IVRSystem_005_AttachToWindow(winIVRSystem_IVRSystem_005 *_this, void * hWnd)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_AttachToWindow(_this->linux_side, hWnd);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_005 *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_005_ResetSeatedZeroPose(winIVRSystem_IVRSystem_005 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_005 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass, 24)
uint32_t __thiscall winIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass(_this->linux_side, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetTrackedDeviceClass, 8)
TrackedDeviceClass __thiscall winIVRSystem_IVRSystem_005_GetTrackedDeviceClass(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_005_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_005 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_005 *_this, TrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_PollNextEvent, 12)
bool __thiscall winIVRSystem_IVRSystem_005_PollNextEvent(winIVRSystem_IVRSystem_005 *_this, winVREvent_t_098 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_PollNextEvent(_this->linux_side, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_PollNextEventWithPose, 24)
bool __thiscall winIVRSystem_IVRSystem_005_PollNextEventWithPose(winIVRSystem_IVRSystem_005 *_this, TrackingUniverseOrigin eOrigin, winVREvent_t_098 * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_005 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetHiddenAreaMesh, 12)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_005_GetHiddenAreaMesh(winIVRSystem_IVRSystem_005 *_this, HiddenAreaMesh_t *_r, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_005_GetHiddenAreaMesh(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetControllerState, 16)
bool __thiscall winIVRSystem_IVRSystem_005_GetControllerState(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_098 * pControllerState)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetControllerStateWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_005_GetControllerStateWithPose(winIVRSystem_IVRSystem_005 *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_098 * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_005_TriggerHapticPulse(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_005 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_005 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_005_CaptureInputFocus(winIVRSystem_IVRSystem_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_005_ReleaseInputFocus(winIVRSystem_IVRSystem_005 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_005_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_005_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_005_DriverDebugRequest(winIVRSystem_IVRSystem_005 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_005_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

extern vtable_ptr winIVRSystem_IVRSystem_005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_005,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetWindowBounds)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetEyeOutputViewport)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_AttachToWindow)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_005_DriverDebugRequest)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_005 *create_winIVRSystem_IVRSystem_005(void *linux_side)
{
    winIVRSystem_IVRSystem_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_005));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_005_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_005(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_005 *create_winIVRSystem_IVRSystem_005_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_005));
    struct thunk *thunks = alloc_thunks(37);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 37 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_005_GetWindowBounds, 4, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_005_GetEyeOutputViewport, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_005_GetProjectionMatrix, 5, TRUE, TRUE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_005_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_005_ComputeDistortion, 4, TRUE, TRUE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_005_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_005_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_005_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_005_GetDXGIOutputInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_005_AttachToWindow, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_005_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_005_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_005_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_005_PollNextEvent, 1, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_005_PollNextEventWithPose, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_005_GetHiddenAreaMesh, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_005_GetControllerState, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_005_GetControllerStateWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_005_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_005_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_005_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_005_DriverDebugRequest, 4, FALSE, FALSE);
    for (i = 0; i < 37; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_005_FnTable(void *object)
{
    winIVRSystem_IVRSystem_005 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_004.h"

typedef struct __winIVRSystem_IVRSystem_004 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_004;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetWindowBounds, 36)
void __thiscall winIVRSystem_IVRSystem_004_GetWindowBounds(winIVRSystem_IVRSystem_004 *_this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_GetWindowBounds(_this->linux_side, pnX, pnY, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_004 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetEyeOutputViewport, 40)
void __thiscall winIVRSystem_IVRSystem_004_GetEyeOutputViewport(winIVRSystem_IVRSystem_004 *_this, Hmd_Eye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_GetEyeOutputViewport(_this->linux_side, eEye, pnX, pnY, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetProjectionMatrix, 24)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_004_GetProjectionMatrix(winIVRSystem_IVRSystem_004 *_this, HmdMatrix44_t *_r, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_004_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ, eProjType);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_004_GetProjectionRaw(winIVRSystem_IVRSystem_004 *_this, Hmd_Eye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_ComputeDistortion, 20)
DistortionCoordinates_t *__thiscall winIVRSystem_IVRSystem_004_ComputeDistortion(winIVRSystem_IVRSystem_004 *_this, DistortionCoordinates_t *_r, Hmd_Eye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_004_ComputeDistortion(_this->linux_side, eEye, fU, fV);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_004_GetEyeToHeadTransform(winIVRSystem_IVRSystem_004 *_this, HmdMatrix34_t *_r, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_004_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_004_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_004 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_004_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetDXGIOutputInfo, 20)
void __thiscall winIVRSystem_IVRSystem_004_GetDXGIOutputInfo(winIVRSystem_IVRSystem_004 *_this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info2(cppIVRSystem_IVRSystem_004_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, pnAdapterOutputIndex, 4);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_AttachToWindow, 12)
bool __thiscall winIVRSystem_IVRSystem_004_AttachToWindow(winIVRSystem_IVRSystem_004 *_this, void * hWnd)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_AttachToWindow(_this->linux_side, hWnd);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_004 *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_004_ResetSeatedZeroPose(winIVRSystem_IVRSystem_004 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_004 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetTrackedDeviceClass, 8)
TrackedDeviceClass __thiscall winIVRSystem_IVRSystem_004_GetTrackedDeviceClass(winIVRSystem_IVRSystem_004 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_004_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_004 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_004 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_004 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_004 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_004 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_004 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_004 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_004 *_this, TrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_PollNextEvent, 12)
bool __thiscall winIVRSystem_IVRSystem_004_PollNextEvent(winIVRSystem_IVRSystem_004 *_this, winVREvent_t_092 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_PollNextEvent(_this->linux_side, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_PollNextEventWithPose, 24)
bool __thiscall winIVRSystem_IVRSystem_004_PollNextEventWithPose(winIVRSystem_IVRSystem_004 *_this, TrackingUniverseOrigin eOrigin, winVREvent_t_092 * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_004 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetHiddenAreaMesh, 12)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_004_GetHiddenAreaMesh(winIVRSystem_IVRSystem_004 *_this, HiddenAreaMesh_t *_r, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_004_GetHiddenAreaMesh(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetControllerState, 16)
bool __thiscall winIVRSystem_IVRSystem_004_GetControllerState(winIVRSystem_IVRSystem_004 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_092 * pControllerState)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetControllerStateWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_004_GetControllerStateWithPose(winIVRSystem_IVRSystem_004 *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_092 * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_004_TriggerHapticPulse(winIVRSystem_IVRSystem_004 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_004 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_004 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_004_CaptureInputFocus(winIVRSystem_IVRSystem_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_004_ReleaseInputFocus(winIVRSystem_IVRSystem_004 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_004_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_004_DriverDebugRequest, 28)
uint32_t __thiscall winIVRSystem_IVRSystem_004_DriverDebugRequest(winIVRSystem_IVRSystem_004 *_this, TrackedDeviceIndex_t unDeviceIndex, const char * pchRequest, char * pchResponseBuffer, uint32_t unResponseBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_004_DriverDebugRequest(_this->linux_side, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
}

extern vtable_ptr winIVRSystem_IVRSystem_004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_004,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetWindowBounds)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetEyeOutputViewport)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_AttachToWindow)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_004_DriverDebugRequest)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_004 *create_winIVRSystem_IVRSystem_004(void *linux_side)
{
    winIVRSystem_IVRSystem_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_004));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_004_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_004(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_004 *create_winIVRSystem_IVRSystem_004_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_004));
    struct thunk *thunks = alloc_thunks(36);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 36 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_004_GetWindowBounds, 4, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_004_GetEyeOutputViewport, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_004_GetProjectionMatrix, 5, TRUE, TRUE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_004_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_004_ComputeDistortion, 4, TRUE, TRUE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_004_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_004_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_004_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_004_GetDXGIOutputInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_004_AttachToWindow, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_004_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_004_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_004_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_004_PollNextEvent, 1, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_004_PollNextEventWithPose, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_004_GetHiddenAreaMesh, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_004_GetControllerState, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_004_GetControllerStateWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_004_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_004_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_004_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_004_DriverDebugRequest, 4, FALSE, FALSE);
    for (i = 0; i < 36; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_004_FnTable(void *object)
{
    winIVRSystem_IVRSystem_004 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRSystem_IVRSystem_003.h"

typedef struct __winIVRSystem_IVRSystem_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSystem_IVRSystem_003;

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetWindowBounds, 36)
void __thiscall winIVRSystem_IVRSystem_003_GetWindowBounds(winIVRSystem_IVRSystem_003 *_this, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_GetWindowBounds(_this->linux_side, pnX, pnY, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize, 20)
void __thiscall winIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize(winIVRSystem_IVRSystem_003 *_this, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize(_this->linux_side, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetEyeOutputViewport, 40)
void __thiscall winIVRSystem_IVRSystem_003_GetEyeOutputViewport(winIVRSystem_IVRSystem_003 *_this, Hmd_Eye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_GetEyeOutputViewport(_this->linux_side, eEye, pnX, pnY, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetProjectionMatrix, 24)
HmdMatrix44_t *__thiscall winIVRSystem_IVRSystem_003_GetProjectionMatrix(winIVRSystem_IVRSystem_003 *_this, HmdMatrix44_t *_r, Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_003_GetProjectionMatrix(_this->linux_side, eEye, fNearZ, fFarZ, eProjType);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetProjectionRaw, 40)
void __thiscall winIVRSystem_IVRSystem_003_GetProjectionRaw(winIVRSystem_IVRSystem_003 *_this, Hmd_Eye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_GetProjectionRaw(_this->linux_side, eEye, pfLeft, pfRight, pfTop, pfBottom);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_ComputeDistortion, 20)
DistortionCoordinates_t *__thiscall winIVRSystem_IVRSystem_003_ComputeDistortion(winIVRSystem_IVRSystem_003 *_this, DistortionCoordinates_t *_r, Hmd_Eye eEye, float fU, float fV)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_003_ComputeDistortion(_this->linux_side, eEye, fU, fV);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetEyeToHeadTransform, 12)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_003_GetEyeToHeadTransform(winIVRSystem_IVRSystem_003 *_this, HmdMatrix34_t *_r, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_003_GetEyeToHeadTransform(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetTimeSinceLastVsync, 20)
bool __thiscall winIVRSystem_IVRSystem_003_GetTimeSinceLastVsync(winIVRSystem_IVRSystem_003 *_this, float * pfSecondsSinceLastVsync, uint64_t * pulFrameCounter)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetTimeSinceLastVsync(_this->linux_side, pfSecondsSinceLastVsync, pulFrameCounter);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetD3D9AdapterIndex, 4)
int32_t __thiscall winIVRSystem_IVRSystem_003_GetD3D9AdapterIndex(winIVRSystem_IVRSystem_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetD3D9AdapterIndex(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetDXGIOutputInfo, 20)
void __thiscall winIVRSystem_IVRSystem_003_GetDXGIOutputInfo(winIVRSystem_IVRSystem_003 *_this, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex)
{
    TRACE("%p\n", _this);
    get_dxgi_output_info2(cppIVRSystem_IVRSystem_003_GetDXGIOutputInfo, _this->linux_side, pnAdapterIndex, pnAdapterOutputIndex, 3);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_AttachToWindow, 12)
bool __thiscall winIVRSystem_IVRSystem_003_AttachToWindow(winIVRSystem_IVRSystem_003 *_this, void * hWnd)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_AttachToWindow(_this->linux_side, hWnd);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose, 24)
void __thiscall winIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose(winIVRSystem_IVRSystem_003 *_this, TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose(_this->linux_side, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_ResetSeatedZeroPose, 4)
void __thiscall winIVRSystem_IVRSystem_003_ResetSeatedZeroPose(winIVRSystem_IVRSystem_003 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_ResetSeatedZeroPose(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 8)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(winIVRSystem_IVRSystem_003 *_this, HmdMatrix34_t *_r)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(_this->linux_side);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_LoadRenderModel, 20)
bool __thiscall winIVRSystem_IVRSystem_003_LoadRenderModel(winIVRSystem_IVRSystem_003 *_this, const char * pchRenderModelName, winRenderModel_t_091 * pRenderModel)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_LoadRenderModel(_this->linux_side, pchRenderModelName, pRenderModel);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_FreeRenderModel, 12)
void __thiscall winIVRSystem_IVRSystem_003_FreeRenderModel(winIVRSystem_IVRSystem_003 *_this, winRenderModel_t_091 * pRenderModel)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_FreeRenderModel(_this->linux_side, pRenderModel);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetTrackedDeviceClass, 8)
TrackedDeviceClass __thiscall winIVRSystem_IVRSystem_003_GetTrackedDeviceClass(winIVRSystem_IVRSystem_003 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetTrackedDeviceClass(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_IsTrackedDeviceConnected, 8)
bool __thiscall winIVRSystem_IVRSystem_003_IsTrackedDeviceConnected(winIVRSystem_IVRSystem_003 *_this, TrackedDeviceIndex_t unDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_IsTrackedDeviceConnected(_this->linux_side, unDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty, 20)
bool __thiscall winIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty(winIVRSystem_IVRSystem_003 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty, 20)
float __thiscall winIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty(winIVRSystem_IVRSystem_003 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty, 20)
int32_t __thiscall winIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty(winIVRSystem_IVRSystem_003 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty, 20)
uint64_t __thiscall winIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty(winIVRSystem_IVRSystem_003 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty, 24)
HmdMatrix34_t *__thiscall winIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty(winIVRSystem_IVRSystem_003 *_this, HmdMatrix34_t *_r, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pError);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty, 32)
uint32_t __thiscall winIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty(winIVRSystem_IVRSystem_003 *_this, TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, char * pchValue, uint32_t unBufferSize, TrackedPropertyError * pError)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty(_this->linux_side, unDeviceIndex, prop, pchValue, unBufferSize, pError);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum(winIVRSystem_IVRSystem_003 *_this, TrackedPropertyError error)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_PollNextEvent, 12)
bool __thiscall winIVRSystem_IVRSystem_003_PollNextEvent(winIVRSystem_IVRSystem_003 *_this, winVREvent_t_091 * pEvent)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_PollNextEvent(_this->linux_side, pEvent);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_PollNextEventWithPose, 24)
bool __thiscall winIVRSystem_IVRSystem_003_PollNextEventWithPose(winIVRSystem_IVRSystem_003 *_this, TrackingUniverseOrigin eOrigin, winVREvent_t_091 * pEvent, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_PollNextEventWithPose(_this->linux_side, eOrigin, pEvent, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum(winIVRSystem_IVRSystem_003 *_this, EVREventType eType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum(_this->linux_side, eType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetHiddenAreaMesh, 12)
HiddenAreaMesh_t *__thiscall winIVRSystem_IVRSystem_003_GetHiddenAreaMesh(winIVRSystem_IVRSystem_003 *_this, HiddenAreaMesh_t *_r, Hmd_Eye eEye)
{
    TRACE("%p\n", _this);
    *_r = cppIVRSystem_IVRSystem_003_GetHiddenAreaMesh(_this->linux_side, eEye);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetControllerState, 16)
bool __thiscall winIVRSystem_IVRSystem_003_GetControllerState(winIVRSystem_IVRSystem_003 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_091 * pControllerState)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetControllerState(_this->linux_side, unControllerDeviceIndex, pControllerState);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetControllerStateWithPose, 28)
bool __thiscall winIVRSystem_IVRSystem_003_GetControllerStateWithPose(winIVRSystem_IVRSystem_003 *_this, TrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_091 * pControllerState, TrackedDevicePose_t * pTrackedDevicePose)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetControllerStateWithPose(_this->linux_side, eOrigin, unControllerDeviceIndex, pControllerState, pTrackedDevicePose);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_TriggerHapticPulse, 14)
void __thiscall winIVRSystem_IVRSystem_003_TriggerHapticPulse(winIVRSystem_IVRSystem_003 *_this, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_TriggerHapticPulse(_this->linux_side, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum(winIVRSystem_IVRSystem_003 *_this, EVRButtonId eButtonId)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum(_this->linux_side, eButtonId);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum, 8)
const char * __thiscall winIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum(winIVRSystem_IVRSystem_003 *_this, EVRControllerAxisType eAxisType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum(_this->linux_side, eAxisType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse, 140)
bool __thiscall winIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse(winIVRSystem_IVRSystem_003 *_this, Compositor_OverlaySettings * overlaySettings, HmdVector2_t vecWindowClientPositionOnScreen, HmdVector2_t vecWindowClientSize, TrackedDeviceIndex_t unControllerDeviceIndex, EVRControllerEventOutputType eOutputType)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse(_this->linux_side, overlaySettings, vecWindowClientPositionOnScreen, vecWindowClientSize, unControllerDeviceIndex, eOutputType);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_CaptureInputFocus, 4)
bool __thiscall winIVRSystem_IVRSystem_003_CaptureInputFocus(winIVRSystem_IVRSystem_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_CaptureInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_ReleaseInputFocus, 4)
void __thiscall winIVRSystem_IVRSystem_003_ReleaseInputFocus(winIVRSystem_IVRSystem_003 *_this)
{
    TRACE("%p\n", _this);
    cppIVRSystem_IVRSystem_003_ReleaseInputFocus(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess, 4)
bool __thiscall winIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess(winIVRSystem_IVRSystem_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess(_this->linux_side);
}

extern vtable_ptr winIVRSystem_IVRSystem_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSystem_IVRSystem_003,
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetWindowBounds)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetEyeOutputViewport)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetProjectionMatrix)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetProjectionRaw)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_ComputeDistortion)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetEyeToHeadTransform)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetTimeSinceLastVsync)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetD3D9AdapterIndex)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetDXGIOutputInfo)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_AttachToWindow)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_ResetSeatedZeroPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_LoadRenderModel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_FreeRenderModel)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetTrackedDeviceClass)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_IsTrackedDeviceConnected)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_PollNextEvent)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_PollNextEventWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetHiddenAreaMesh)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetControllerState)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetControllerStateWithPose)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_CaptureInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_ReleaseInputFocus)
        VTABLE_ADD_FUNC(winIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess)
    );
#ifndef __GNUC__
}
#endif

winIVRSystem_IVRSystem_003 *create_winIVRSystem_IVRSystem_003(void *linux_side)
{
    winIVRSystem_IVRSystem_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_003));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSystem_IVRSystem_003_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSystem_IVRSystem_003(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSystem_IVRSystem_003 *create_winIVRSystem_IVRSystem_003_FnTable(void *linux_side)
{
    winIVRSystem_IVRSystem_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSystem_IVRSystem_003));
    struct thunk *thunks = alloc_thunks(38);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 38 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSystem_IVRSystem_003_GetWindowBounds, 4, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRSystem_IVRSystem_003_GetEyeOutputViewport, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSystem_IVRSystem_003_GetProjectionMatrix, 5, TRUE, TRUE);
    init_thunk(&thunks[4], r, winIVRSystem_IVRSystem_003_GetProjectionRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSystem_IVRSystem_003_ComputeDistortion, 4, TRUE, TRUE);
    init_thunk(&thunks[6], r, winIVRSystem_IVRSystem_003_GetEyeToHeadTransform, 2, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSystem_IVRSystem_003_GetTimeSinceLastVsync, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSystem_IVRSystem_003_GetD3D9AdapterIndex, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSystem_IVRSystem_003_GetDXGIOutputInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSystem_IVRSystem_003_AttachToWindow, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose, 4, TRUE, FALSE);
    init_thunk(&thunks[12], r, winIVRSystem_IVRSystem_003_ResetSeatedZeroPose, 0, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRSystem_IVRSystem_003_LoadRenderModel, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRSystem_IVRSystem_003_FreeRenderModel, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRSystem_IVRSystem_003_GetTrackedDeviceClass, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRSystem_IVRSystem_003_IsTrackedDeviceConnected, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty, 4, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty, 5, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRSystem_IVRSystem_003_PollNextEvent, 1, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRSystem_IVRSystem_003_PollNextEventWithPose, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRSystem_IVRSystem_003_GetHiddenAreaMesh, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRSystem_IVRSystem_003_GetControllerState, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRSystem_IVRSystem_003_GetControllerStateWithPose, 4, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRSystem_IVRSystem_003_TriggerHapticPulse, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse, 5, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVRSystem_IVRSystem_003_CaptureInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVRSystem_IVRSystem_003_ReleaseInputFocus, 0, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess, 0, FALSE, FALSE);
    for (i = 0; i < 38; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSystem_IVRSystem_003_FnTable(void *object)
{
    winIVRSystem_IVRSystem_003 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

